
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aic31xx_priv {int regmap; scalar_t__ jack; struct device* dev; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;


 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (scalar_t__,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_21, void *VAR_22)
{
 struct aic31xx_priv *VAR_23 = VAR_22;
 struct device *VAR_24 = VAR_23->dev;
 unsigned int VAR_25;
 bool VAR_26 = 0;
 int VAR_27;

 VAR_27 = FUNC_2(VAR_23->regmap, VAR_12, &VAR_25);
 if (VAR_27) {
  FUNC_0(VAR_24, "Failed to read interrupt mask: %d\n", VAR_27);
  goto exit;
 }

 if (VAR_25)
  VAR_26 = 1;
 else
  goto read_overflow;

 if (VAR_25 & VAR_6)
  FUNC_0(VAR_24, "Short circuit on Left output is detected\n");
 if (VAR_25 & VAR_7)
  FUNC_0(VAR_24, "Short circuit on Right output is detected\n");
 if (VAR_25 & (VAR_11 | VAR_2)) {
  unsigned int VAR_28;
  int VAR_29 = 0;

  VAR_27 = FUNC_2(VAR_23->regmap, VAR_13,
      &VAR_28);
  if (VAR_27) {
   FUNC_0(VAR_24, "Failed to read interrupt mask: %d\n",
    VAR_27);
   goto exit;
  }

  if (VAR_28 & VAR_2)
   VAR_29 |= VAR_18;

  VAR_27 = FUNC_2(VAR_23->regmap, VAR_8, &VAR_28);
  if (VAR_27) {
   FUNC_0(VAR_24, "Failed to read headset type: %d\n", VAR_27);
   goto exit;
  }

  switch ((VAR_28 & VAR_9) >>
   VAR_10) {
  case 129:
   VAR_29 |= VAR_19;
   break;
  case 128:
   VAR_29 |= VAR_20;
   break;
  default:
   break;
  }

  if (VAR_23->jack)
   FUNC_3(VAR_23->jack, VAR_29,
         VAR_14);
 }
 if (VAR_25 & ~(VAR_6 |
        VAR_7 |
        VAR_11 |
        VAR_2))
  FUNC_0(VAR_24, "Unknown DAC interrupt flags: 0x%08x\n", VAR_25);

read_overflow:
 VAR_27 = FUNC_2(VAR_23->regmap, VAR_15, &VAR_25);
 if (VAR_27) {
  FUNC_0(VAR_24, "Failed to read overflow flag: %d\n", VAR_27);
  goto exit;
 }

 if (VAR_25)
  VAR_26 = 1;
 else
  goto exit;

 if (VAR_25 & VAR_3)
  FUNC_1(VAR_24, "Left-channel DAC overflow has occurred\n");
 if (VAR_25 & VAR_4)
  FUNC_1(VAR_24, "Right-channel DAC overflow has occurred\n");
 if (VAR_25 & VAR_5)
  FUNC_1(VAR_24, "DAC barrel shifter overflow has occurred\n");
 if (VAR_25 & VAR_0)
  FUNC_1(VAR_24, "ADC overflow has occurred\n");
 if (VAR_25 & VAR_1)
  FUNC_1(VAR_24, "ADC barrel shifter overflow has occurred\n");
 if (VAR_25 & ~(VAR_3 |
        VAR_4 |
        VAR_5 |
        VAR_0 |
        VAR_1))
  FUNC_1(VAR_24, "Unknown overflow interrupt flags: 0x%08x\n", VAR_25);

exit:
 if (VAR_26)
  return VAR_16;
 else
  return VAR_17;
}
