
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_dummy {int iobox; TYPE_6__* cd_switch_ctl; int card; TYPE_5__* cd_volume_ctl; } ;
struct TYPE_7__ {int* item; } ;
struct TYPE_8__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_12__ {int id; TYPE_4__* vd; } ;
struct TYPE_11__ {int id; TYPE_3__* vd; } ;
struct TYPE_10__ {int access; } ;
struct TYPE_9__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 struct snd_dummy* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct snd_dummy *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (VAR_4->value.enumerated.item[0] > 1)
  return -VAR_0;

 VAR_6 = VAR_4->value.enumerated.item[0] != VAR_5->iobox;
 if (VAR_6) {
  VAR_5->iobox = VAR_4->value.enumerated.item[0];

  if (VAR_5->iobox) {
   VAR_5->cd_volume_ctl->vd[0].access &=
    ~VAR_1;
   VAR_5->cd_switch_ctl->vd[0].access &=
    ~VAR_1;
  } else {
   VAR_5->cd_volume_ctl->vd[0].access |=
    VAR_1;
   VAR_5->cd_switch_ctl->vd[0].access |=
    VAR_1;
  }

  FUNC_0(VAR_5->card, VAR_2,
          &VAR_5->cd_volume_ctl->id);
  FUNC_0(VAR_5->card, VAR_2,
          &VAR_5->cd_switch_ctl->id);
 }

 return VAR_6;
}
