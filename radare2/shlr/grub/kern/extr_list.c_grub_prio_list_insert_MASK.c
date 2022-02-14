
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct grub_prio_list_insert_closure {scalar_t__ inactive; } ;
typedef TYPE_1__* grub_prio_list_t ;
typedef int grub_list_test_t ;
struct TYPE_6__ {int prio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,struct grub_prio_list_insert_closure*) ;
 scalar_t__ VAR_1 ;

void
FUNC_3 (grub_prio_list_t *VAR_2, grub_prio_list_t VAR_3)
{
  struct grub_prio_list_insert_closure VAR_4;

  VAR_4.inactive = 0;
  FUNC_2 (FUNC_1 (VAR_2), FUNC_0 (VAR_3),
      (grub_list_test_t) VAR_1, &VAR_4);
  if (! VAR_4.inactive)
    VAR_3->prio |= VAR_0;
}
