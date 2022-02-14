
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cpcap_audio {int codec_clk_id; int codec_freq; int regmap; TYPE_1__* component; } ;
typedef enum cpcap_dai { ____Placeholder_cpcap_dai } cpcap_dai ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct cpcap_audio *VAR_10, enum cpcap_dai VAR_11,
       int VAR_12, int VAR_13)
{
 u16 VAR_14, VAR_15;
 u16 VAR_16, VAR_17;
 u16 VAR_18, VAR_19;
 u16 VAR_20, VAR_21;
 int VAR_22;

 switch (VAR_11) {
 case 129:
  VAR_14 = VAR_7;
  VAR_15 = VAR_3;
  VAR_18 = VAR_8;
  VAR_19 = VAR_4;
  break;
 case 128:
  VAR_14 = VAR_5;
  VAR_15 = VAR_0;
  VAR_18 = VAR_6;
  VAR_19 = VAR_2;
  break;
 default:
  FUNC_1(VAR_10->component->dev, "invalid DAI: %d", VAR_11);
  return -VAR_9;
 }


 if (VAR_12 < 0 || VAR_12 > 1) {
  FUNC_1(VAR_10->component->dev, "invalid clk id %d", VAR_12);
  return -VAR_9;
 }
 VAR_22 = FUNC_2(VAR_10->regmap, VAR_18, FUNC_0(VAR_19),
     VAR_12 ? FUNC_0(VAR_19) : 0);
 if (VAR_22)
  return VAR_22;


 if (VAR_11 == 128) {
  VAR_20 = FUNC_0(VAR_1);
  VAR_21 = FUNC_0(VAR_1);
  VAR_22 = FUNC_2(VAR_10->regmap, VAR_6,
      VAR_20, VAR_21);
  if (VAR_22)
   return VAR_22;
 }


 VAR_16 = 0x7 << VAR_15;
 switch (VAR_13) {
 case 15360000:
  VAR_17 = 0x01 << VAR_15;
  break;
 case 16800000:
  VAR_17 = 0x02 << VAR_15;
  break;
 case 19200000:
  VAR_17 = 0x03 << VAR_15;
  break;
 case 26000000:
  VAR_17 = 0x04 << VAR_15;
  break;
 case 33600000:
  VAR_17 = 0x05 << VAR_15;
  break;
 case 38400000:
  VAR_17 = 0x06 << VAR_15;
  break;
 default:
  FUNC_1(VAR_10->component->dev, "unsupported freq %u", VAR_13);
  return -VAR_9;
 }

 VAR_22 = FUNC_2(VAR_10->regmap, VAR_14,
     VAR_16, VAR_17);
 if (VAR_22)
  return VAR_22;

 if (VAR_11 == 128) {
  VAR_10->codec_clk_id = VAR_12;
  VAR_10->codec_freq = VAR_13;
 }

 return 0;
}
