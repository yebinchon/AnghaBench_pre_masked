
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_hw_rule {int var; int * deps; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;
struct TYPE_3__ {int max; } ;


 TYPE_1__* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (TYPE_1__*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
         struct snd_pcm_hw_rule *VAR_1)
{
 struct snd_interval VAR_2 = {
  .min = 8000,
  .max = 24576000 / FUNC_0(VAR_0, VAR_1->deps[0])->max,
 };

 return FUNC_1(FUNC_0(VAR_0, VAR_1->var),
       &VAR_2);
}
