
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rates; int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct TYPE_4__ {int * list; scalar_t__ count; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(struct snd_pcm_runtime *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < (int)VAR_0.count; VAR_2++) {
  if (VAR_1->hw.rates & (1 << VAR_2)) {
   VAR_1->hw.rate_min = VAR_0.list[VAR_2];
   break;
  }
 }
 for (VAR_2 = (int)VAR_0.count - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_1->hw.rates & (1 << VAR_2)) {
   VAR_1->hw.rate_max = VAR_0.list[VAR_2];
   break;
  }
 }
 return 0;
}
