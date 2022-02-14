
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_11,
  unsigned int VAR_12, unsigned int VAR_13, int VAR_14,
  int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_11->component;
 unsigned int VAR_17;
 int VAR_18;

 if (!VAR_14)
  return 0;

 if (VAR_12 >= (1 << VAR_14) || VAR_13 >= (1 << VAR_14)) {
  VAR_18 = -VAR_0;
  FUNC_0(VAR_16->dev, "Invalid TDM slot mask (%d)\n", VAR_18);
  return VAR_18;
 }

 switch (VAR_14) {
 case 2:
  VAR_17 = VAR_7 | VAR_4;
  break;
 case 4:
  VAR_17 = VAR_8 | VAR_5;
  break;
 case 6:
  VAR_17 = VAR_9 | VAR_6;
  break;
 default:
  VAR_18 = -VAR_0;
  FUNC_0(VAR_16->dev, "Invalid number of slots (%d)\n", VAR_18);
  return VAR_18;
 }

 switch (VAR_15) {
 case 16:
  VAR_17 = VAR_17 | VAR_1;
  break;
 case 24:
  VAR_17 = VAR_17 | VAR_2;
  break;
 case 32:
  VAR_17 = VAR_17 | VAR_3;
  break;
 default:
  VAR_18 = -VAR_0;
  FUNC_0(VAR_16->dev, "Invalid TDM slot width (%d)\n", VAR_18);
  return VAR_18;
 }
 VAR_18 = FUNC_1(VAR_16, VAR_10, VAR_17);
 if (VAR_18 < 0) {
  FUNC_0(VAR_16->dev, "Failed to set slots (%d)\n", VAR_18);
  return VAR_18;
 }

 return 0;
}
