
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct find_func_closure {scalar_t__ partnum; TYPE_1__* p; } ;
typedef TYPE_1__* grub_partition_t ;
typedef int grub_disk_t ;
struct TYPE_5__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__* const,int) ;

__attribute__((used)) static int
FUNC_2 (grub_disk_t VAR_0 ,
    const grub_partition_t VAR_1, void *VAR_2)
{
  struct find_func_closure *VAR_3 = VAR_2;
  if (VAR_3->partnum == VAR_1->number)
    {
      VAR_3->p = (grub_partition_t) FUNC_0 (sizeof (*VAR_3->p));
      if (! VAR_3->p)
 return 1;

      FUNC_1 (VAR_3->p, VAR_1, sizeof (*VAR_3->p));
      return 1;
    }

  return 0;
}
