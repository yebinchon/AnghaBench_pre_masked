
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int count; int list; } ;
struct adau1977 {int type; void (* switch_mode ) (struct device*) ;int max_master_fs; struct regmap* regmap; struct regmap* dvdd_reg; struct regmap* reset_gpio; struct regmap* avdd_reg; TYPE_1__ constraints; struct device* dev; } ;
typedef enum adau1977_type { ____Placeholder_adau1977_type } adau1977_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct adau1977*) ;
 int FUNC_4 (struct adau1977*) ;
 int VAR_9 ;
 int FUNC_5 (struct adau1977*) ;
 int FUNC_6 (struct device*,struct adau1977*) ;
 struct regmap* FUNC_7 (struct device*,char*,int ) ;
 struct adau1977* FUNC_8 (struct device*,int,int ) ;
 struct regmap* FUNC_9 (struct device*,char*) ;
 struct regmap* FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,int *,int *,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct regmap*,int ,unsigned int,int) ;

int FUNC_14(struct device *VAR_10, struct regmap *VAR_11,
 enum adau1977_type VAR_12, void (*VAR_13)(struct device *VAR_14))
{
 unsigned int VAR_15;
 struct adau1977 *VAR_16;
 int VAR_17;

 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_16 = FUNC_8(VAR_10, sizeof(*VAR_16), VAR_5);
 if (VAR_16 == ((void*)0))
  return -VAR_4;

 VAR_16->dev = VAR_10;
 VAR_16->type = VAR_12;
 VAR_16->regmap = VAR_11;
 VAR_16->switch_mode = VAR_13;
 VAR_16->max_master_fs = 192000;

 VAR_16->constraints.list = VAR_9;
 VAR_16->constraints.count = FUNC_0(VAR_9);

 VAR_16->avdd_reg = FUNC_9(VAR_10, "AVDD");
 if (FUNC_1(VAR_16->avdd_reg))
  return FUNC_2(VAR_16->avdd_reg);

 VAR_16->dvdd_reg = FUNC_10(VAR_10, "DVDD");
 if (FUNC_1(VAR_16->dvdd_reg)) {
  if (FUNC_2(VAR_16->dvdd_reg) != -VAR_3)
   return FUNC_2(VAR_16->dvdd_reg);
  VAR_16->dvdd_reg = ((void*)0);
 }

 VAR_16->reset_gpio = FUNC_7(VAR_10, "reset",
             VAR_6);
 if (FUNC_1(VAR_16->reset_gpio))
  return FUNC_2(VAR_16->reset_gpio);

 FUNC_6(VAR_10, VAR_16);

 if (VAR_16->reset_gpio)
  FUNC_12(100);

 VAR_17 = FUNC_4(VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_12 == VAR_0) {
  VAR_17 = FUNC_5(VAR_16);
  if (VAR_17)
   goto err_poweroff;
 }

 if (VAR_16->dvdd_reg)
  VAR_15 = ~0;
 else
  VAR_15 = (unsigned int)~VAR_1;

 VAR_17 = FUNC_13(VAR_16->regmap, VAR_2,
    VAR_15, 0x00);
 if (VAR_17)
  goto err_poweroff;

 VAR_17 = FUNC_3(VAR_16);
 if (VAR_17)
  return VAR_17;

 return FUNC_11(VAR_10, &VAR_7,
   &VAR_8, 1);

err_poweroff:
 FUNC_3(VAR_16);
 return VAR_17;

}
