
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_13,
  unsigned int VAR_14,
  unsigned int VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 switch (VAR_15) {
 case 8000:
  VAR_17 = VAR_7;
  VAR_18 = VAR_3;
  break;
 case 16000:
  VAR_17 = VAR_7;
  VAR_18 = VAR_4;
  break;
 case 24000:
  VAR_17 = VAR_9;
  VAR_18 = VAR_4;
  break;
 case 32000:
  VAR_17 = VAR_7;
  VAR_18 = VAR_5;
  break;
 case 48000:
  VAR_17 = VAR_9;
  VAR_18 = VAR_5;
  break;
 case 96000:
  VAR_17 = VAR_9;
  VAR_18 = VAR_6;
  break;
 case 11025:
  VAR_17 = VAR_8;
  VAR_18 = VAR_3;
  break;
 case 22050:
  VAR_17 = VAR_8;
  VAR_18 = VAR_4;
  break;
 case 44100:
  VAR_17 = VAR_8;
  VAR_18 = VAR_5;
  break;
 case 88200:
  VAR_17 = VAR_8;
  VAR_18 = VAR_6;
  break;
 default:
  VAR_19 = -VAR_0;
  FUNC_0(VAR_13->dev, "Unsupported sample rate (%d)\n", VAR_19);
  return VAR_19;
 }

 switch (VAR_14) {
 case 130:
  VAR_16 = VAR_10;
  break;
 case 129:
  VAR_16 = VAR_11;
  break;
 case 128:
  VAR_16 = VAR_12;
  break;
 default:
  VAR_19 = -VAR_0;
  FUNC_0(VAR_13->dev, "DAI ID not recognized (%d)\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_1(VAR_13, VAR_16,
   VAR_2 | VAR_1, VAR_17|VAR_18);
 if (VAR_19 < 0) {
  FUNC_0(VAR_13->dev,
    "Failed to update register (%d)\n", VAR_19);
  return VAR_19;
 }

 return 0;
}
