
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {unsigned int mask; } ;
struct adau1977 {int sysclk_src; unsigned int sysclk; TYPE_1__ constraints; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct adau1977* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_9,
 int VAR_10, int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct adau1977 *VAR_14 = FUNC_2(VAR_9);
 unsigned int VAR_15 = 0;
 unsigned int VAR_16;
 unsigned int VAR_17;

 if (VAR_13 != VAR_8)
  return -VAR_7;

 if (VAR_10 != VAR_6)
  return -VAR_7;

 switch (VAR_11) {
 case 128:
  VAR_16 = 0;
  break;
 case 129:
  VAR_16 = VAR_0;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_12 != 0 && VAR_11 == 128) {
  if (VAR_12 < 4000000 || VAR_12 > 36864000)
   return -VAR_7;

  if (FUNC_0(VAR_12, 32000))
   VAR_15 |= VAR_1;
  if (FUNC_0(VAR_12, 44100))
   VAR_15 |= VAR_2;
  if (FUNC_0(VAR_12, 48000))
   VAR_15 |= VAR_3;

  if (VAR_15 == 0)
   return -VAR_7;
 } else if (VAR_11 == 129) {
  VAR_15 = VAR_4;
 }

 VAR_17 = FUNC_1(VAR_14->regmap, VAR_5,
  VAR_0, VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_14->constraints.mask = VAR_15;
 VAR_14->sysclk_src = VAR_11;
 VAR_14->sysclk = VAR_12;

 return 0;
}
