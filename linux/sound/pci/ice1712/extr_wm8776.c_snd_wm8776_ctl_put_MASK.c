
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct snd_wm8776 {int* regs; TYPE_3__* ctl; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int flags; int max; int min; size_t reg1; int mask1; size_t reg2; int mask2; int (* set ) (struct snd_wm8776*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct snd_wm8776* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_wm8776*,size_t,int) ;
 int FUNC_3 (struct snd_wm8776*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_wm8776 *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_4->private_value;
 u16 VAR_8, VAR_9, VAR_10;


 VAR_9 = VAR_5->value.integer.value[0];
 VAR_10 = VAR_5->value.integer.value[1];
 if (VAR_6->ctl[VAR_7].flags & VAR_0) {
  VAR_9 = VAR_6->ctl[VAR_7].max - (VAR_9 - VAR_6->ctl[VAR_7].min);
  VAR_10 = VAR_6->ctl[VAR_7].max - (VAR_10 - VAR_6->ctl[VAR_7].min);
 }
 if (VAR_6->ctl[VAR_7].set)
  VAR_6->ctl[VAR_7].set(VAR_6, VAR_9, VAR_10);
 else {
  VAR_8 = VAR_6->regs[VAR_6->ctl[VAR_7].reg1] & ~VAR_6->ctl[VAR_7].mask1;
  VAR_8 |= VAR_9 << FUNC_0(VAR_6->ctl[VAR_7].mask1);

  if (VAR_6->ctl[VAR_7].flags & VAR_1 &&
    VAR_6->ctl[VAR_7].reg1 == VAR_6->ctl[VAR_7].reg2) {
   VAR_8 &= ~VAR_6->ctl[VAR_7].mask2;
   VAR_8 |= VAR_10 << FUNC_0(VAR_6->ctl[VAR_7].mask2);
  }
  FUNC_2(VAR_6, VAR_6->ctl[VAR_7].reg1, VAR_8);

  if (VAR_6->ctl[VAR_7].flags & VAR_1 &&
    VAR_6->ctl[VAR_7].reg1 != VAR_6->ctl[VAR_7].reg2) {
   VAR_8 = VAR_6->regs[VAR_6->ctl[VAR_7].reg2] & ~VAR_6->ctl[VAR_7].mask2;
   VAR_8 |= VAR_10 << FUNC_0(VAR_6->ctl[VAR_7].mask2);
   if (VAR_6->ctl[VAR_7].flags & VAR_2)
    VAR_8 |= VAR_3;
   FUNC_2(VAR_6, VAR_6->ctl[VAR_7].reg2, VAR_8);
  }
 }

 return 0;
}
