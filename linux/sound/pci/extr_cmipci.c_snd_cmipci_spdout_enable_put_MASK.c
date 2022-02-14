
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci {scalar_t__ spdif_playback_enabled; scalar_t__ spdif_playback_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmipci*,int ,int ) ;
 int FUNC_2 (struct cmipci*,int ,int ) ;
 struct cmipci* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct cmipci *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;
 VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_2);
 VAR_7 |= FUNC_0(VAR_4, VAR_5, &VAR_3);
 if (VAR_7) {
  if (VAR_5->value.integer.value[0]) {
   if (VAR_6->spdif_playback_avail)
    FUNC_2(VAR_6, VAR_1, VAR_0);
  } else {
   if (VAR_6->spdif_playback_avail)
    FUNC_1(VAR_6, VAR_1, VAR_0);
  }
 }
 VAR_6->spdif_playback_enabled = VAR_5->value.integer.value[0];
 return VAR_7;
}
