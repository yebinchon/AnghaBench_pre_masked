
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ (* grub_list_test_t ) (TYPE_1__*,TYPE_1__*,void*) ;
typedef TYPE_1__* grub_list_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;



void
FUNC_0 (grub_list_t *VAR_0, grub_list_t VAR_1,
    grub_list_test_t VAR_2, void *VAR_3)
{
  grub_list_t *VAR_4, VAR_5;

  for (VAR_4 = VAR_0, VAR_5 = *VAR_4; VAR_5; VAR_4 = &(VAR_5->next), VAR_5 = VAR_5->next)
    if (VAR_2 (VAR_1, VAR_5, VAR_3))
      break;

  *VAR_4 = VAR_1;
  VAR_1->next = VAR_5;
}
