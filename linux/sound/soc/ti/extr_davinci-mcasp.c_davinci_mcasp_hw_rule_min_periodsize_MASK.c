
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int integer; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(
  struct snd_pcm_hw_params *VAR_1, struct snd_pcm_hw_rule *VAR_2)
{
 struct snd_interval *VAR_3 = FUNC_0(VAR_1,
      VAR_0);
 struct snd_interval VAR_4;

 FUNC_1(&VAR_4);
 VAR_4.min = 64;
 VAR_4.integer = 1;

 return FUNC_2(VAR_3, &VAR_4);
}
