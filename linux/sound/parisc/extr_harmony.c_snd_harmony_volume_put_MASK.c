
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int gain; } ;
struct snd_harmony {TYPE_3__ st; int mixer_lock; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_harmony*) ;
 struct snd_harmony* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_harmony *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = (VAR_0->private_value) & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_7, VAR_8;
 int VAR_9 = VAR_2->st.gain;

 FUNC_2(&VAR_2->mixer_lock);

 VAR_7 = VAR_1->value.integer.value[0] & VAR_5;
 if (VAR_6)
  VAR_7 = VAR_5 - VAR_7;
 VAR_2->st.gain &= ~( (VAR_5 << VAR_3 ) );
  VAR_2->st.gain |= (VAR_7 << VAR_3);

 if (VAR_3 != VAR_4) {
  VAR_8 = VAR_1->value.integer.value[1] & VAR_5;
  if (VAR_6)
   VAR_8 = VAR_5 - VAR_8;
  VAR_2->st.gain &= ~( (VAR_5 << VAR_4) );
  VAR_2->st.gain |= (VAR_8 << VAR_4);
 }

 FUNC_0(VAR_2);

 FUNC_3(&VAR_2->mixer_lock);

 return VAR_2->st.gain != VAR_9;
}
