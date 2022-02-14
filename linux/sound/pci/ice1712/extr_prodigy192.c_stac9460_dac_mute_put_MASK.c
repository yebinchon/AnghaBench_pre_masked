
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ice1712 {struct prodigy192_spec* spec; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct prodigy192_spec {int mute_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_ice1712*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_3(VAR_2);
 struct prodigy192_spec *VAR_5 = VAR_4->spec;
 int VAR_6, VAR_7;

 if (VAR_2->private_value)
  VAR_6 = VAR_1;
 else
  VAR_6 = FUNC_2(VAR_2, &VAR_3->id) + VAR_0;

 FUNC_0(&VAR_5->mute_mutex);




 VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_3->value.integer.value[0]);
 FUNC_1(&VAR_5->mute_mutex);
 return VAR_7;
}
