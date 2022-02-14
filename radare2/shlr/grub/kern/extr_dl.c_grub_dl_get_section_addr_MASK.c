
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_segment_t ;
struct TYPE_5__ {unsigned int section; void* addr; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* segment; } ;



__attribute__((used)) static void *
FUNC_0 (grub_dl_t VAR_0, unsigned VAR_1)
{
  grub_dl_segment_t VAR_2;

  for (VAR_2 = VAR_0->segment; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->section == VAR_1)
      return VAR_2->addr;

  return 0;
}
