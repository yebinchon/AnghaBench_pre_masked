
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tscm {int dummy; } ;
typedef enum snd_tscm_clock { ____Placeholder_snd_tscm_clock } snd_tscm_clock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_tscm*,int*) ;

int FUNC_1(struct snd_tscm *VAR_2, enum snd_tscm_clock *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = ((VAR_4 & 0x00ff0000) >> 16) - 1;
 if (*VAR_3 < 0 || *VAR_3 > VAR_1)
  return -VAR_0;

 return 0;
}
