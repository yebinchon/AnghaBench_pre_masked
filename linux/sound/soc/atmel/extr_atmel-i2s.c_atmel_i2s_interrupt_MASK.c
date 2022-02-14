
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_i2s_dev {int regmap; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct atmel_i2s_dev *VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 irqreturn_t VAR_18 = VAR_9;

 FUNC_3(VAR_12->regmap, VAR_5, &VAR_13);
 FUNC_3(VAR_12->regmap, VAR_0, &VAR_14);
 VAR_15 = VAR_13 & VAR_14;

 if (!VAR_15)
  return VAR_9;

 if (VAR_15 & VAR_1) {
  VAR_17 = VAR_6;

  for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16) {
   if (VAR_13 & FUNC_0(VAR_16)) {
    VAR_17 |= FUNC_0(VAR_16);
    FUNC_2(VAR_12->dev,
     "RX overrun on channel %d\n", VAR_16);
   }
  }
  FUNC_4(VAR_12->regmap, VAR_4, VAR_17);
  VAR_18 = VAR_8;
 }

 if (VAR_15 & VAR_2) {
  VAR_17 = VAR_7;

  for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16) {
   if (VAR_13 & FUNC_1(VAR_16)) {
    VAR_17 |= FUNC_1(VAR_16);
    FUNC_2(VAR_12->dev,
     "TX underrun on channel %d\n", VAR_16);
   }
  }
  FUNC_4(VAR_12->regmap, VAR_4, VAR_17);
  VAR_18 = VAR_8;
 }

 return VAR_18;
}
