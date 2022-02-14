
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int grub_size_t ;
typedef int grub_mm_region_t ;
typedef TYPE_1__* grub_mm_header_t ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,TYPE_1__**,int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;

void *
FUNC_4 (void *VAR_2, grub_size_t VAR_3)
{
  grub_mm_header_t VAR_4;
  grub_mm_region_t VAR_5;
  void *VAR_6;
  grub_size_t VAR_7;

  if (! VAR_2)
    return FUNC_2 (VAR_3);

  if (! VAR_3)
    {
      FUNC_1 (VAR_2);
      return 0;
    }


  VAR_7 = ((VAR_3 + VAR_0 - 1) >> VAR_1) + 1;
  FUNC_0 (VAR_2, &VAR_4, &VAR_5);

  if (VAR_4->size >= VAR_7)
    return VAR_2;

  VAR_6 = FUNC_2 (VAR_3);
  if (! VAR_6)
    return VAR_6;

  FUNC_3 (VAR_6, VAR_2, VAR_3);
  FUNC_1 (VAR_2);
  return VAR_6;
}
