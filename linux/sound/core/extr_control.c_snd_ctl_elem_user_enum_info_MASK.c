
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int item; int name; scalar_t__ items; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int id; } ;
struct user_element {char* priv_data; struct snd_ctl_elem_info info; } ;
struct snd_kcontrol {struct user_element* private_data; } ;


 unsigned int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int *,struct snd_kcontrol*,unsigned int) ;
 unsigned int FUNC_2 (struct snd_kcontrol*,int *) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_info *VAR_1)
{
 struct user_element *VAR_2 = VAR_0->private_data;
 const char *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = VAR_1->value.enumerated.item;

 VAR_5 = FUNC_2(VAR_0, &VAR_1->id);
 *VAR_1 = VAR_2->info;
 FUNC_1(&VAR_1->id, VAR_0, VAR_5);

 VAR_4 = FUNC_0(VAR_4, VAR_1->value.enumerated.items - 1);
 VAR_1->value.enumerated.item = VAR_4;

 VAR_3 = VAR_2->priv_data;
 for (; VAR_4 > 0; --VAR_4)
  VAR_3 += FUNC_4(VAR_3) + 1;
 FUNC_3(VAR_1->value.enumerated.name, VAR_3);

 return 0;
}
