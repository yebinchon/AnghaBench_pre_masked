
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pcxhr_mgr {int capture_chips; int sample_rate_real; int mixer_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcxhr_mgr*,int,int*) ;
 struct pcxhr_mgr* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct pcxhr_mgr *VAR_3 = FUNC_3(VAR_1);
 int VAR_4, VAR_5, VAR_6;

 FUNC_0(&VAR_3->mixer_mutex);
 for(VAR_4 = 0; VAR_4 < 3 + VAR_3->capture_chips; VAR_4++) {
  if (VAR_4 == VAR_0)
   VAR_6 = VAR_3->sample_rate_real;
  else {
   VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_6);
   if (VAR_5)
    break;
  }
  VAR_2->value.integer.value[VAR_4] = VAR_6;
 }
 FUNC_1(&VAR_3->mixer_mutex);
 return 0;
}
