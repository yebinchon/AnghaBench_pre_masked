
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {unsigned char* aes_bits; TYPE_3__* mgr; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {unsigned char* status; } ;
struct TYPE_5__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; scalar_t__ is_hr_stereo; } ;


 int FUNC_0 (struct snd_pcxhr*,int,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcxhr*,int,unsigned char*) ;
 struct snd_pcxhr* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_4(VAR_0);
 unsigned char VAR_3;
 int VAR_4, VAR_5;

 FUNC_1(&VAR_2->mgr->mixer_mutex);
 for(VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  if (VAR_0->private_value == 0)
   VAR_3 = VAR_2->aes_bits[VAR_4];
  else {
   if (VAR_2->mgr->is_hr_stereo)
    VAR_5 = FUNC_0(VAR_2, VAR_4,
        &VAR_3);
   else
    VAR_5 = FUNC_3(VAR_2, VAR_4,
        &VAR_3);
   if (VAR_5)
    break;
  }
  VAR_1->value.iec958.status[VAR_4] = VAR_3;
 }
 FUNC_2(&VAR_2->mgr->mixer_mutex);
        return 0;
}
