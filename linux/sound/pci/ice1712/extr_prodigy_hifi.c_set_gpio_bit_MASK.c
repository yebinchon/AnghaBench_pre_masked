
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_0, unsigned int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_3 |= VAR_1;
 else
  VAR_3 &= ~VAR_1;
 FUNC_1(VAR_0, VAR_3);
}
