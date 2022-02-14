
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_5__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;
struct TYPE_7__ {int name; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_info *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_1);

 VAR_3->type = VAR_0;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = VAR_4;
 if (VAR_3->value.enumerated.item >= VAR_4)
  VAR_3->value.enumerated.item = VAR_4 - 1;
 FUNC_1(VAR_3->value.enumerated.name,
  VAR_1[VAR_3->value.enumerated.item].name);
 return 0;
}
