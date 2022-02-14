
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_hw_params *VAR_1,
           unsigned int VAR_2)
{
 struct snd_interval *VAR_3;
 int VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3->min = VAR_4;
 VAR_3->max = VAR_4;
}
