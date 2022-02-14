
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cmipci_sb_reg {int left_shift; int mask; int right_shift; scalar_t__ invert; int right_reg; scalar_t__ stereo; int left_reg; } ;
struct cmipci {int reg_lock; } ;


 int FUNC_0 (struct cmipci_sb_reg*,int ) ;
 int FUNC_1 (struct cmipci*,int ) ;
 struct cmipci* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct cmipci *VAR_2 = FUNC_2(VAR_0);
 struct cmipci_sb_reg VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, VAR_0->private_value);
 FUNC_3(&VAR_2->reg_lock);
 VAR_4 = (FUNC_1(VAR_2, VAR_3.left_reg) >> VAR_3.left_shift) & VAR_3.mask;
 if (VAR_3.invert)
  VAR_4 = VAR_3.mask - VAR_4;
 VAR_1->value.integer.value[0] = VAR_4;
 if (VAR_3.stereo) {
  VAR_4 = (FUNC_1(VAR_2, VAR_3.right_reg) >> VAR_3.right_shift) & VAR_3.mask;
  if (VAR_3.invert)
   VAR_4 = VAR_3.mask - VAR_4;
  VAR_1->value.integer.value[1] = VAR_4;
 }
 FUNC_4(&VAR_2->reg_lock);
 return 0;
}
