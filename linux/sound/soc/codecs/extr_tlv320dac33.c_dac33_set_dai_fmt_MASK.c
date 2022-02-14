
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlv320dac33_priv {int fifo_mode; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 unsigned int VAR_11 ;


 unsigned int VAR_12 ;

 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 struct tlv320dac33_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_13,
        unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct tlv320dac33_priv *VAR_16 = FUNC_4(VAR_15);
 u8 VAR_17, VAR_18;

 VAR_17 = FUNC_1(VAR_15, VAR_8);
 VAR_18 = FUNC_1(VAR_15, VAR_9);

 switch (VAR_14 & VAR_12) {
 case 133:

  VAR_17 |= (VAR_6 | VAR_7);
  break;
 case 132:

  if (VAR_16->fifo_mode) {
   FUNC_3(VAR_15->dev, "FIFO mode requires master mode\n");
   return -VAR_10;
  } else
   VAR_17 &= ~(VAR_6 | VAR_7);
  break;
 default:
  return -VAR_10;
 }

 VAR_17 &= ~VAR_3;
 switch (VAR_14 & VAR_11) {
 case 130:
  VAR_17 |= VAR_1;
  break;
 case 131:
  VAR_17 |= VAR_0;
  VAR_18 &= ~VAR_5;
  VAR_18 |= FUNC_0(0);
  break;
 case 128:
  VAR_17 |= VAR_4;
  break;
 case 129:
  VAR_17 |= VAR_2;
  break;
 default:
  FUNC_3(VAR_15->dev, "Unsupported format (%u)\n",
   VAR_14 & VAR_11);
  return -VAR_10;
 }

 FUNC_2(VAR_15, VAR_8, VAR_17);
 FUNC_2(VAR_15, VAR_9, VAR_18);

 return 0;
}
