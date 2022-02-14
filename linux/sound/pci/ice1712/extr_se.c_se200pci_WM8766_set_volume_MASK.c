
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0, int VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 switch (VAR_1) {
 case 0:
  FUNC_0(VAR_0, 0x000, VAR_2);
  FUNC_0(VAR_0, 0x001, VAR_3 | 0x100);
  break;
 case 1:
  FUNC_0(VAR_0, 0x004, VAR_2);
  FUNC_0(VAR_0, 0x005, VAR_3 | 0x100);
  break;
 case 2:
  FUNC_0(VAR_0, 0x006, VAR_2);
  FUNC_0(VAR_0, 0x007, VAR_3 | 0x100);
  break;
 }
}
