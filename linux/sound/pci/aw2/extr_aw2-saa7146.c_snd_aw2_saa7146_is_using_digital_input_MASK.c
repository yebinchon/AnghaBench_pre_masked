
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_aw2_saa7146 {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

int FUNC_1(struct snd_aw2_saa7146 *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);
 if ((VAR_2 & 0xFF) == 0x40)
  return 1;
 else
  return 0;
}
