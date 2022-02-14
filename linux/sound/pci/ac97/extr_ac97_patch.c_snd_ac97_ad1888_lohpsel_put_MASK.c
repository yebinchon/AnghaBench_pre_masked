
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {scalar_t__ lo_as_master; } ;
struct TYPE_8__ {TYPE_3__ ad18xx; } ;
struct snd_ac97 {TYPE_4__ spec; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ac97*,int ,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ac97 *VAR_5 = FUNC_1(VAR_3);
 unsigned short VAR_6;

 VAR_6 = !VAR_4->value.integer.value[0];
 if (VAR_5->spec.ad18xx.lo_as_master)
  VAR_6 = !VAR_6;
 VAR_6 = VAR_6 ? (VAR_1 | VAR_0) : 0;
 return FUNC_0(VAR_5, VAR_2,
        VAR_1 | VAR_0, VAR_6);
}
