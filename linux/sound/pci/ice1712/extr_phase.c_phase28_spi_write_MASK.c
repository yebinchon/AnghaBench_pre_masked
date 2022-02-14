
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, ~(VAR_3|VAR_1|
     VAR_0|VAR_2));
 VAR_8 |= VAR_3;
 VAR_8 &= ~VAR_5;
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(1);

 for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--) {
  VAR_8 &= ~VAR_0;
  FUNC_2(VAR_4, VAR_8);
  FUNC_3(1);
  if (VAR_6 & (1 << VAR_9))
   VAR_8 |= VAR_1;
  else
   VAR_8 &= ~VAR_1;
  FUNC_2(VAR_4, VAR_8);
  FUNC_3(1);
  VAR_8 |= VAR_0;
  FUNC_2(VAR_4, VAR_8);
  FUNC_3(1);
 }

 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_5;
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(1);
 VAR_8 |= VAR_0;
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(1);
}
