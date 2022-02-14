
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int xtalk_protect; int xtalk_baktab_initialized; int regmap; int xtalk_work; int xtalk_sem; int xtalk_state; scalar_t__ irq; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct nau8825* FUNC_4 (struct device*) ;
 struct nau8825* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct device*,int *,int *,int) ;
 int FUNC_8 (struct i2c_client*,struct nau8825*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct nau8825*) ;
 int FUNC_10 (struct nau8825*) ;
 int FUNC_11 (struct device*,struct nau8825*) ;
 int VAR_9 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct nau8825*) ;
 int VAR_10 ;
 int FUNC_14 (int ,int ,int*) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_11,
 const struct i2c_device_id *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct nau8825 *VAR_14 = FUNC_4(&VAR_11->dev);
 int VAR_15, VAR_16;

 if (!VAR_14) {
  VAR_14 = FUNC_5(VAR_13, sizeof(*VAR_14), VAR_2);
  if (!VAR_14)
   return -VAR_1;
  VAR_15 = FUNC_11(VAR_13, VAR_14);
  if (VAR_15)
   return VAR_15;
 }

 FUNC_8(VAR_11, VAR_14);

 VAR_14->regmap = FUNC_6(VAR_11, &VAR_9);
 if (FUNC_1(VAR_14->regmap))
  return FUNC_2(VAR_14->regmap);
 VAR_14->dev = VAR_13;
 VAR_14->irq = VAR_11->irq;



 VAR_14->xtalk_state = VAR_6;
 VAR_14->xtalk_protect = 0;
 VAR_14->xtalk_baktab_initialized = 0;
 FUNC_15(&VAR_14->xtalk_sem, 1);
 FUNC_0(&VAR_14->xtalk_work, VAR_10);

 FUNC_10(VAR_14);

 FUNC_12(VAR_14->regmap);
 VAR_15 = FUNC_14(VAR_14->regmap, VAR_3, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13, "Failed to read device id from the NAU8825: %d\n",
   VAR_15);
  return VAR_15;
 }
 if ((VAR_16 & VAR_4) !=
   VAR_5) {
  FUNC_3(VAR_13, "Not a NAU8825 chip\n");
  return -VAR_0;
 }

 FUNC_9(VAR_14);

 if (VAR_11->irq)
  FUNC_13(VAR_14);

 return FUNC_7(&VAR_11->dev,
  &VAR_7,
  &VAR_8, 1);
}
