
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int id; TYPE_3__* vd; int (* put ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci {int mixer_insensitive; scalar_t__* mixer_res_status; int card; struct snd_kcontrol** mixer_res_ctl; } ;
struct TYPE_8__ {scalar_t__ toggle_on; } ;
struct TYPE_7__ {int access; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_0 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_ctl_elem_value*,int ,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_6(struct cmipci *VAR_7)
{
 if (! VAR_7->mixer_insensitive) {
  struct snd_ctl_elem_value *VAR_8;
  unsigned int VAR_9;

  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   struct snd_kcontrol *VAR_10 = VAR_7->mixer_res_ctl[VAR_9];
   if (VAR_10) {
    int VAR_11;
    FUNC_2(VAR_8, 0, sizeof(*VAR_8));
    VAR_10->get(VAR_10, VAR_8);
    VAR_7->mixer_res_status[VAR_9] = VAR_8->value.integer.value[0];
    VAR_8->value.integer.value[0] = VAR_6[VAR_9].toggle_on;
    VAR_11 = VAR_4;
    if (VAR_7->mixer_res_status[VAR_9] != VAR_8->value.integer.value[0]) {
     VAR_10->put(VAR_10, VAR_8);
     VAR_11 |= VAR_5;
    }
    VAR_10->vd[0].access |= VAR_3;
    FUNC_3(VAR_7->card, VAR_11, &VAR_10->id);
   }
  }
  FUNC_0(VAR_8);
  VAR_7->mixer_insensitive = 1;
 }
 return 0;
}
