
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int name; scalar_t__ item; scalar_t__ items; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int ,scalar_t__,size_t*,size_t*) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_info *VAR_4)
{
 int VAR_5;
 u16 VAR_6, VAR_7;
 u32 VAR_8 = VAR_3->private_value;

 VAR_4->type = VAR_1;
 VAR_4->count = 1;
 VAR_4->value.enumerated.items =
     FUNC_1(VAR_3);

 if (VAR_4->value.enumerated.item >= VAR_4->value.enumerated.items)
  VAR_4->value.enumerated.item =
      VAR_4->value.enumerated.items - 1;

 VAR_5 =
     FUNC_0(VAR_8,
     VAR_4->value.enumerated.item,
     &VAR_6, &VAR_7);

 FUNC_2(VAR_4->value.enumerated.name, "%s %d",
  VAR_2[VAR_6 - VAR_0],
  VAR_7);
 return 0;
}
