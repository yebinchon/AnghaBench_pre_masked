
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int grub_size_t ;
typedef TYPE_1__* grub_mm_region_t ;
typedef TYPE_2__* grub_mm_header_t ;
struct TYPE_5__ {int size; int magic; struct TYPE_5__* next; } ;
struct TYPE_4__ {long addr; int size; struct TYPE_4__* next; TYPE_2__* first; } ;


 scalar_t__ FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,void*,void*) ;

void
FUNC_2 (void *VAR_4, grub_size_t VAR_5)
{
  grub_mm_header_t VAR_6;
  grub_mm_region_t VAR_7, *VAR_8, VAR_9;






  VAR_7 = (grub_mm_region_t) FUNC_0 ((long) VAR_4, VAR_0);
  VAR_5 -= (char *) VAR_7 - (char *) VAR_4 + sizeof (*VAR_7);


  if (VAR_5 < VAR_0)
    return;

  VAR_6 = (grub_mm_header_t) ((char *) VAR_7 + VAR_0);
  VAR_6->next = VAR_6;
  VAR_6->magic = VAR_2;
  VAR_6->size = (VAR_5 >> VAR_1);

  VAR_7->first = VAR_6;
  VAR_7->addr = (long) VAR_6;
  VAR_7->size = (VAR_6->size << VAR_1);



  for (VAR_8 = &VAR_3, VAR_9 = *VAR_8; VAR_9; VAR_8 = &(VAR_9->next), VAR_9 = *VAR_8)
    if (VAR_9->size > VAR_7->size)
      break;

  *VAR_8 = VAR_7;
  VAR_7->next = VAR_9;
}
