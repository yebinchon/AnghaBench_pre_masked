
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; struct snd_pcm_hw_constraint_ranges* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_pcm_hw_constraint_ranges {int mask; int ranges; int count; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
      struct snd_pcm_hw_rule *VAR_1)
{
 struct snd_pcm_hw_constraint_ranges *VAR_2 = VAR_1->private;
 return FUNC_1(FUNC_0(VAR_0, VAR_1->var),
       VAR_2->count, VAR_2->ranges, VAR_2->mask);
}
