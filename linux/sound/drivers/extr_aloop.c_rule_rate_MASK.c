
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_hw_rule {int var; struct loopback_pcm* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {scalar_t__ integer; scalar_t__ openmax; scalar_t__ openmin; int max; int min; } ;
struct loopback_pcm {TYPE_2__* loopback; struct loopback_cable* cable; } ;
struct TYPE_3__ {int rate_max; int rate_min; } ;
struct loopback_cable {TYPE_1__ hw; } ;
struct TYPE_4__ {int cable_lock; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct snd_interval*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_0,
       struct snd_pcm_hw_rule *VAR_1)
{
 struct loopback_pcm *VAR_2 = VAR_1->private;
 struct loopback_cable *VAR_3 = VAR_2->cable;
 struct snd_interval VAR_4;

 FUNC_1(&VAR_2->loopback->cable_lock);
 VAR_4.min = VAR_3->hw.rate_min;
 VAR_4.max = VAR_3->hw.rate_max;
 FUNC_2(&VAR_2->loopback->cable_lock);
        VAR_4.openmin = VAR_4.openmax = 0;
        VAR_4.integer = 0;
 return FUNC_3(FUNC_0(VAR_0, VAR_1->var), &VAR_4);
}
