
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int jd1_gpio; int jd2_gpio; int jd3_gpio; } ;
struct rt5677_priv {int domain; int regmap; TYPE_1__ pdata; int irq_lock; } ;
struct TYPE_5__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ,int,char*,struct rt5677_priv*) ;
 struct rt5677_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int ,int *,struct rt5677_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_21)
{
 int VAR_22;
 struct rt5677_priv *VAR_23 = FUNC_2(VAR_21);
 unsigned int VAR_24 = 0, VAR_25 = 0;

 if (!VAR_23->pdata.jd1_gpio &&
  !VAR_23->pdata.jd2_gpio &&
  !VAR_23->pdata.jd3_gpio)
  return 0;

 if (!VAR_21->irq) {
  FUNC_0(&VAR_21->dev, "No interrupt specified\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_23->irq_lock);






 FUNC_5(VAR_23->regmap, VAR_4,
   VAR_9,
   VAR_10);

 FUNC_5(VAR_23->regmap, VAR_5, 0xff, 0xff);


 if (VAR_23->pdata.jd1_gpio) {
  VAR_24 |= VAR_13;
  VAR_25 |= VAR_23->pdata.jd1_gpio << VAR_14;
 }
 if (VAR_23->pdata.jd2_gpio) {
  VAR_24 |= VAR_15;
  VAR_25 |= VAR_23->pdata.jd2_gpio << VAR_16;
 }
 if (VAR_23->pdata.jd3_gpio) {
  VAR_24 |= VAR_17;
  VAR_25 |= VAR_23->pdata.jd3_gpio << VAR_18;
 }
 FUNC_5(VAR_23->regmap, VAR_12, VAR_24, VAR_25);


 FUNC_5(VAR_23->regmap, VAR_8,
   VAR_7, VAR_6);


 VAR_23->domain = FUNC_3(VAR_21->dev.of_node,
   VAR_11, &VAR_19, VAR_23);
 if (!VAR_23->domain) {
  FUNC_0(&VAR_21->dev, "Failed to create IRQ domain\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_1(&VAR_21->dev, VAR_21->irq, ((void*)0), VAR_20,
   VAR_3 | VAR_2,
   "rt5677", VAR_23);
 if (VAR_22)
  FUNC_0(&VAR_21->dev, "Failed to request IRQ: %d\n", VAR_22);

 return VAR_22;
}
