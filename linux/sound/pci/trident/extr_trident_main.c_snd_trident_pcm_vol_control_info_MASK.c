
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {scalar_t__ device; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_trident* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_info *VAR_3)
{
 struct snd_trident *VAR_4 = FUNC_0(VAR_2);

 VAR_3->type = VAR_0;
 VAR_3->count = 1;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = 255;
 if (VAR_4->device == VAR_1)
  VAR_3->value.integer.max = 1023;
 return 0;
}
