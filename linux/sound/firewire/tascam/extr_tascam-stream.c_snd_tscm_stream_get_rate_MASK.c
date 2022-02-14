
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tscm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_tscm*,int*) ;

int FUNC_1(struct snd_tscm *VAR_1, unsigned int *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = (VAR_3 & 0xff000000) >> 24;


 if ((VAR_3 & 0x0f) == 0x01)
  *VAR_2 = 44100;
 else if ((VAR_3 & 0x0f) == 0x02)
  *VAR_2 = 48000;
 else
  return -VAR_0;


 if ((VAR_3 & 0xf0) == 0x80)
  *VAR_2 *= 2;
 else if ((VAR_3 & 0xf0) != 0x00)
  return -VAR_0;

 return VAR_4;
}
