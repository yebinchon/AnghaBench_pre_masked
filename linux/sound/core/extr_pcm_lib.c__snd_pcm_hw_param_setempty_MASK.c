
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int cmask; int rmask; } ;
typedef int snd_pcm_hw_param_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_hw_params*,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct snd_pcm_hw_params *VAR_0,
    snd_pcm_hw_param_t VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_6(FUNC_3(VAR_0, VAR_1));
  VAR_0->cmask |= 1 << VAR_1;
  VAR_0->rmask |= 1 << VAR_1;
 } else if (FUNC_0(VAR_1)) {
  FUNC_5(FUNC_2(VAR_0, VAR_1));
  VAR_0->cmask |= 1 << VAR_1;
  VAR_0->rmask |= 1 << VAR_1;
 } else {
  FUNC_4();
 }
}
