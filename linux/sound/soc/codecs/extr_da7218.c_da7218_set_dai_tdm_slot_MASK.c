
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_18,
       unsigned int VAR_19, unsigned int VAR_20,
       int VAR_21, int VAR_22)
{
 struct snd_soc_component *VAR_23 = VAR_18->component;
 u8 VAR_24;
 u32 VAR_25;


 if (!VAR_19) {
  FUNC_2(VAR_23, VAR_14,
        VAR_12 |
        VAR_16, 0);
  FUNC_2(VAR_23, VAR_9,
        VAR_8,
        VAR_7);
  return 0;
 }


 if (FUNC_1(VAR_19) > VAR_15) {
  FUNC_0(VAR_23->dev, "Invalid number of slots, max = %d\n",
   VAR_15);
  return -VAR_17;
 }


 if (VAR_20 >> VAR_1) {
  FUNC_0(VAR_23->dev, "Invalid slot offset, max = %d\n",
   VAR_0);
  return -VAR_17;
 }


 VAR_25 = VAR_21 * VAR_22;
 switch (VAR_25) {
 case 32:
  VAR_24 = VAR_6;
  break;
 case 64:
  VAR_24 = VAR_7;
  break;
 case 128:
  VAR_24 = VAR_4;
  break;
 case 256:
  VAR_24 = VAR_5;
  break;
 default:
  FUNC_0(VAR_23->dev, "Invalid frame size\n");
  return -VAR_17;
 }

 FUNC_2(VAR_23, VAR_9,
       VAR_8,
       VAR_24);
 FUNC_3(VAR_23, VAR_10,
        (VAR_20 & VAR_2));
 FUNC_3(VAR_23, VAR_11,
        ((VAR_20 >> VAR_3) & VAR_2));
 FUNC_2(VAR_23, VAR_14,
       VAR_12 |
       VAR_16,
       (VAR_19 << VAR_13) |
       VAR_16);

 return 0;
}
