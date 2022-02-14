
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wm8776 {unsigned int switch_bits; } ;
struct snd_maya44 {int mutex; int ice; struct snd_wm8776* wm; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (struct snd_kcontrol*,int *) ;
 struct snd_maya44* FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (int ,struct snd_wm8776*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_maya44 *VAR_2 = FUNC_6(VAR_0);
 struct snd_wm8776 *VAR_3 =
  &VAR_2->wm[FUNC_5(VAR_0, &VAR_1->id)];
 unsigned int VAR_4 = FUNC_0(VAR_0->private_value);
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 FUNC_3(&VAR_2->mutex);
 VAR_5 = 1 << VAR_4;
 VAR_3->switch_bits &= ~VAR_5;
 VAR_6 = VAR_1->value.integer.value[0];
 if (VAR_6)
  VAR_3->switch_bits |= VAR_5;
 VAR_5 = FUNC_1(VAR_0->private_value);
 VAR_7 = FUNC_7(VAR_2->ice, VAR_3,
        FUNC_2(VAR_0->private_value),
        VAR_5, VAR_6 ? VAR_5 : 0);
 FUNC_4(&VAR_2->mutex);
 return VAR_7;
}
