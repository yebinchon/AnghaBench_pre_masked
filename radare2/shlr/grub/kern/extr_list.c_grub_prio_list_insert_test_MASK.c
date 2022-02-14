
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct grub_prio_list_insert_closure {int inactive; } ;
typedef TYPE_1__* grub_prio_list_t ;
struct TYPE_4__ {int prio; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (grub_prio_list_t VAR_2, grub_prio_list_t VAR_3,
       void *VAR_4)
{
  struct grub_prio_list_insert_closure *VAR_5 = VAR_4;
  int VAR_6;

  VAR_6 = FUNC_0 (VAR_2->name, VAR_3->name);
  if (VAR_6)
    return (VAR_6 < 0);

  if (VAR_2->prio >= (VAR_3->prio & VAR_1))
    {
      VAR_3->prio &= ~VAR_0;
      return 1;
    }

  VAR_5->inactive = 1;
  return 0;
}
