
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct snd_ac97 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_info *VAR_4)
{
 struct snd_ac97 *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = (VAR_3->private_value >> 16) & 0x0f;
 int VAR_7 = (VAR_3->private_value >> 8) & 0x0f;
 int VAR_8 = (VAR_3->private_value >> 12) & 0x0f;

 VAR_4->type = VAR_6 == 1 ? VAR_1 : VAR_2;
 if (VAR_7 != VAR_8 && (VAR_5->flags & VAR_0))
  VAR_4->count = 2;
 else
  VAR_4->count = 1;
 VAR_4->value.integer.min = 0;
 VAR_4->value.integer.max = VAR_6;
 return 0;
}
