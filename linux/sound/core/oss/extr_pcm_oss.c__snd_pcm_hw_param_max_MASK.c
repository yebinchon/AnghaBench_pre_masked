
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int cmask; int rmask; } ;
typedef int snd_pcm_hw_param_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_hw_params*,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*,int) ;
 int FUNC_4 (int ,unsigned int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_1,
     snd_pcm_hw_param_t VAR_2, unsigned int VAR_3,
     int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 if (VAR_4) {
  if (VAR_4 < 0) {
   VAR_6 = 1;
  } else if (VAR_4 > 0) {
   VAR_6 = 1;
   VAR_3++;
  }
 }
 if (FUNC_1(VAR_2)) {
  if (VAR_3 == 0 && VAR_6) {
   FUNC_5(FUNC_3(VAR_1, VAR_2));
   VAR_5 = -VAR_0;
  } else
   VAR_5 = FUNC_6(FUNC_3(VAR_1, VAR_2),
            VAR_3 - !!VAR_6);
 } else if (FUNC_0(VAR_2))
  VAR_5 = FUNC_4(FUNC_2(VAR_1, VAR_2),
        VAR_3, VAR_6);
 else
  return -VAR_0;
 if (VAR_5 > 0) {
  VAR_1->cmask |= 1 << VAR_2;
  VAR_1->rmask |= 1 << VAR_2;
 }
 return VAR_5;
}
