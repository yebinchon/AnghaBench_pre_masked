
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct sigmadsp {TYPE_1__ rate_constraints; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;

int FUNC_1(struct sigmadsp *VAR_1,
 struct snd_pcm_substream *VAR_2)
{
 if (VAR_1->rate_constraints.count == 0)
  return 0;

 return FUNC_0(VAR_2->runtime, 0,
  VAR_0, &VAR_1->rate_constraints);
}
