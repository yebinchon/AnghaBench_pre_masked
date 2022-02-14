
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_6,
      int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (VAR_7 < 0 || VAR_7 > VAR_5 ||
     VAR_7 == VAR_4)
  return 0;


 if (VAR_7 < 4) {
  VAR_9 = VAR_1 + 2 * VAR_7;
  VAR_10 = VAR_0 + 2 * VAR_7;
  VAR_8 = FUNC_0(VAR_6, VAR_9) & 0x3;
 } else {
  VAR_9 = VAR_2 + VAR_7 - 4;
  VAR_10 = VAR_9;
  VAR_8 = FUNC_0(VAR_6, VAR_9) >> 6;
 }

 if (VAR_8 != VAR_3)
  return 0;

 return FUNC_0(VAR_6, VAR_10) & 0x07;
}
