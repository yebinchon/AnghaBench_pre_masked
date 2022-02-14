
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_hw_rule {int var; struct snd_pcm_hardware* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_pcm_hardware {int rates; } ;
struct TYPE_2__ {int list; int count; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_1,
    struct snd_pcm_hw_rule *VAR_2)
{
 struct snd_pcm_hardware *VAR_3 = VAR_2->private;
 return FUNC_1(FUNC_0(VAR_1, VAR_2->var),
     VAR_0.count,
     VAR_0.list, VAR_3->rates);
}
