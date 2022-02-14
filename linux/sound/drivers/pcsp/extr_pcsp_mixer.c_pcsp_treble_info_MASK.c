
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcsp {scalar_t__ max_treble; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__ items; scalar_t__ item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct snd_pcsp* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct snd_pcsp *VAR_3 = FUNC_1(VAR_1);
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_3->max_treble + 1;
 if (VAR_2->value.enumerated.item > VAR_3->max_treble)
  VAR_2->value.enumerated.item = VAR_3->max_treble;
 FUNC_2(VAR_2->value.enumerated.name, "%lu",
  (unsigned long)FUNC_0(VAR_2->value.enumerated.item));
 return 0;
}
