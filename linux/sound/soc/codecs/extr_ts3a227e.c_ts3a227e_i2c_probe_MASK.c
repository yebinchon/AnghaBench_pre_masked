
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts3a227e {int regmap; int irq; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct ts3a227e* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct device*,int ,int *,int ,int,char*,struct ts3a227e*) ;
 int FUNC_6 (struct device*,int *,int *,int ) ;
 int FUNC_7 (struct i2c_client*,struct ts3a227e*) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (int ,int ,int,int) ;
 int VAR_8 ;
 int FUNC_10 (struct ts3a227e*) ;
 int FUNC_11 (struct ts3a227e*,unsigned int) ;
 int FUNC_12 (struct ts3a227e*,struct device*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
         const struct i2c_device_id *VAR_12)
{
 struct ts3a227e *VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 int VAR_15;
 unsigned int VAR_16;

 VAR_13 = FUNC_3(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_11, VAR_13);
 VAR_13->dev = VAR_14;
 VAR_13->irq = VAR_11->irq;

 VAR_13->regmap = FUNC_4(VAR_11, &VAR_9);
 if (FUNC_0(VAR_13->regmap))
  return FUNC_1(VAR_13->regmap);

 VAR_15 = FUNC_12(VAR_13, VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_14, "Failed to parse device property: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_5(VAR_14, VAR_11->irq, ((void*)0), VAR_8,
     VAR_5 | VAR_4,
     "TS3A227E", VAR_13);
 if (VAR_15) {
  FUNC_2(VAR_14, "Cannot request irq %d (%d)\n", VAR_11->irq, VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_6(&VAR_11->dev, &VAR_10,
           ((void*)0), 0);
 if (VAR_15)
  return VAR_15;


 FUNC_9(VAR_13->regmap, VAR_7,
      VAR_3 | VAR_0,
      VAR_0);


 FUNC_8(VAR_13->regmap, VAR_6, &VAR_16);
 FUNC_11(VAR_13, VAR_16);
 FUNC_10(VAR_13);

 return 0;
}
