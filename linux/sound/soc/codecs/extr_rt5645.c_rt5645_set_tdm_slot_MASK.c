
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt5645_priv {int codec_type; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct rt5645_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5, unsigned int VAR_6,
   unsigned int VAR_7, int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_5->component;
 struct rt5645_priv *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18 = 0;

 switch (VAR_11->codec_type) {
 case 128:
  VAR_16 = 15;
  VAR_12 = 10;
  VAR_13 = 8;
  VAR_14 = 6;
  VAR_15 = 4;
  VAR_17 = 0x8ff0;
  break;
 default:
  VAR_16 = 14;
  VAR_12 = VAR_13 = 12;
  VAR_14 = VAR_15 = 10;
  VAR_17 = 0x7c00;
  break;
 }
 if (VAR_7 || VAR_6) {
  VAR_18 |= (1 << VAR_16);
  if (VAR_11->codec_type == VAR_0)
   FUNC_1(VAR_10, VAR_1,
    VAR_3, VAR_2);
 }

 switch (VAR_8) {
 case 4:
  VAR_18 |= (1 << VAR_12) | (1 << VAR_13);
  break;
 case 6:
  VAR_18 |= (2 << VAR_12) | (2 << VAR_13);
  break;
 case 8:
  VAR_18 |= (3 << VAR_12) | (3 << VAR_13);
  break;
 case 2:
 default:
  break;
 }

 switch (VAR_9) {
 case 20:
  VAR_18 |= (1 << VAR_14) | (1 << VAR_15);
  break;
 case 24:
  VAR_18 |= (2 << VAR_14) | (2 << VAR_15);
  break;
 case 32:
  VAR_18 |= (3 << VAR_14) | (3 << VAR_15);
  break;
 case 16:
 default:
  break;
 }

 FUNC_1(VAR_10, VAR_4, VAR_17, VAR_18);

 return 0;
}
