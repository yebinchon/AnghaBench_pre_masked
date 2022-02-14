
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* grub_disk_dev_t ;
struct TYPE_3__ {scalar_t__ (* iterate ) (int (*) (char const*,void*),void*) ;struct TYPE_3__* next; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (char const*,void*),void*) ;

int
FUNC_1 (int (*VAR_1) (const char *VAR_2, void *VAR_3),
         void *VAR_4)
{
  grub_disk_dev_t VAR_5;

  for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->iterate && (VAR_5->iterate) (VAR_1, VAR_4))
      return 1;

  return 0;
}
