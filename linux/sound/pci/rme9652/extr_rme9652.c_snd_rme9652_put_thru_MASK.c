
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_rme9652 {unsigned int ss_channels; int thru_bits; int lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rme9652*,unsigned int,int) ;
 struct snd_rme9652* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_rme9652*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_rme9652 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 unsigned int VAR_5;
 u32 VAR_6 = 0;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->ss_channels; ++VAR_5) {
  if (VAR_2->value.integer.value[VAR_5])
   VAR_6 |= 1 << VAR_5;
 }

 FUNC_3(&VAR_3->lock);
 VAR_4 = VAR_6 ^ VAR_3->thru_bits;
 if (VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_3->ss_channels; ++VAR_5) {
   if (!(VAR_4 & (1 << VAR_5)))
    continue;
   FUNC_0(VAR_3,VAR_5,VAR_6&(1<<VAR_5));
  }
 }
 FUNC_4(&VAR_3->lock);
 return !!VAR_4;
}
