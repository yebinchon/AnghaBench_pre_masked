
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;



 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_11,
  unsigned int VAR_12)
{
 unsigned int VAR_13;
 int VAR_14;
 struct snd_soc_component *VAR_15 = VAR_11->component;
 unsigned int VAR_16;
 int VAR_17;

 FUNC_0(VAR_15->dev, "set_bclk_ratio() id = %d ratio = %u\n",
   VAR_11->id, VAR_12);

 switch (VAR_11->id) {
 case 130:
  VAR_13 = VAR_4;
  VAR_17 = VAR_1;
  break;
 case 129:
  VAR_13 = VAR_5;
  VAR_17 = VAR_2;
  break;
 case 128:
  VAR_13 = VAR_6;
  VAR_17 = VAR_3;
  break;
 default:
  VAR_14 = -VAR_0;
  FUNC_1(VAR_15->dev, "Unknown audio interface (%d)\n", VAR_14);
  return VAR_14;
 }

 switch (VAR_12) {
 case 32:
  VAR_16 = VAR_7;
  break;
 case 40:
  VAR_16 = VAR_8;
  break;
 case 64:
  VAR_16 = VAR_9;
  break;
 default:
  VAR_14 = -VAR_0;
  FUNC_1(VAR_15->dev, "Unsupported bclk ratio (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_15,
   VAR_10, VAR_13, VAR_16 << VAR_17);
 if (VAR_14 < 0) {
  FUNC_1(VAR_15->dev,
    "Failed to set DAI BCLK ratio (%d)\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
