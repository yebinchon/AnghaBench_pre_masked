
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {unsigned int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const* const) ;
 int FUNC_1 (int ,char const* const,int) ;
 int FUNC_2 (char const* const) ;

int FUNC_3(struct snd_ctl_elem_info *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, const char *const VAR_4[])
{
 VAR_1->type = VAR_0;
 VAR_1->count = VAR_2;
 VAR_1->value.enumerated.items = VAR_3;
 if (!VAR_3)
  return 0;
 if (VAR_1->value.enumerated.item >= VAR_3)
  VAR_1->value.enumerated.item = VAR_3 - 1;
 FUNC_0(FUNC_2(VAR_4[VAR_1->value.enumerated.item]) >= sizeof(VAR_1->value.enumerated.name),
      "ALSA: too long item name '%s'\n",
      VAR_4[VAR_1->value.enumerated.item]);
 FUNC_1(VAR_1->value.enumerated.name,
  VAR_4[VAR_1->value.enumerated.item],
  sizeof(VAR_1->value.enumerated.name));
 return 0;
}
