
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
struct snd_pcm_hw_rule {int var; struct loopback_pcm* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {void** bits; } ;
struct loopback_pcm {TYPE_2__* loopback; struct loopback_cable* cable; } ;
struct TYPE_3__ {int formats; } ;
struct loopback_cable {TYPE_1__ hw; } ;
struct TYPE_4__ {int cable_lock; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_mask*) ;
 int FUNC_4 (int ,struct snd_mask*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_hw_params *VAR_0,
         struct snd_pcm_hw_rule *VAR_1)
{
 struct loopback_pcm *VAR_2 = VAR_1->private;
 struct loopback_cable *VAR_3 = VAR_2->cable;
 struct snd_mask VAR_4;

 FUNC_3(&VAR_4);
 FUNC_1(&VAR_2->loopback->cable_lock);
 VAR_4.bits[0] = (u_int32_t)VAR_3->hw.formats;
 VAR_4.bits[1] = (u_int32_t)(VAR_3->hw.formats >> 32);
 FUNC_2(&VAR_2->loopback->cable_lock);
 return FUNC_4(FUNC_0(VAR_0, VAR_1->var), &VAR_4);
}
