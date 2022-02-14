
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dev; } ;
struct cpcap_audio {int regmap; struct snd_soc_component* component; } ;
typedef enum cpcap_dai { ____Placeholder_cpcap_dai } cpcap_dai ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct cpcap_audio *VAR_11, enum cpcap_dai VAR_12,
         int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_11->component;
 u16 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 switch (VAR_12) {
 case 129:
  VAR_15 = VAR_8;
  VAR_17 = VAR_6;
  VAR_19 = FUNC_0(VAR_4) |
       FUNC_0(VAR_5);
  break;
 case 128:
  VAR_15 = VAR_7;
  VAR_17 = VAR_2;
  VAR_19 = FUNC_0(VAR_3) |
       FUNC_0(VAR_1);
  break;
 default:
  FUNC_1(VAR_14->dev, "invalid DAI: %d", VAR_12);
  return -VAR_9;
 }

 VAR_16 = 0xF << VAR_17 | VAR_19;
 switch (VAR_13) {
 case 48000:
  VAR_18 = 0x8 << VAR_17;
  break;
 case 44100:
  VAR_18 = 0x7 << VAR_17;
  break;
 case 32000:
  VAR_18 = 0x6 << VAR_17;
  break;
 case 24000:
  VAR_18 = 0x5 << VAR_17;
  break;
 case 22050:
  VAR_18 = 0x4 << VAR_17;
  break;
 case 16000:
  VAR_18 = 0x3 << VAR_17;
  break;
 case 12000:
  VAR_18 = 0x2 << VAR_17;
  break;
 case 11025:
  VAR_18 = 0x1 << VAR_17;
  break;
 case 8000:
  VAR_18 = 0x0 << VAR_17;
  break;
 default:
  FUNC_1(VAR_14->dev, "unsupported samplerate %d", VAR_13);
  return -VAR_9;
 }
 VAR_20 = FUNC_4(VAR_11->regmap, VAR_15,
     VAR_16, VAR_18 | VAR_19);
 if (VAR_20)
  return VAR_20;


 FUNC_2(VAR_0);

 VAR_20 = FUNC_3(VAR_11->regmap, VAR_15, &VAR_21);
 if (VAR_20)
  return VAR_20;

 if (VAR_21 & VAR_19) {
  FUNC_1(VAR_14->dev, "reset self-clear failed: %04x",
   VAR_21);
  return -VAR_10;
 }

 return 0;
}
