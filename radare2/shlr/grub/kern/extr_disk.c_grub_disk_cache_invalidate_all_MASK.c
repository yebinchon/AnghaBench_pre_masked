
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_disk_cache {scalar_t__ data; int lock; } ;


 unsigned int VAR_0 ;
 struct grub_disk_cache* VAR_1 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1 (void)
{
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      struct grub_disk_cache *VAR_3 = VAR_1 + VAR_2;

      if (VAR_3->data && ! VAR_3->lock)
 {
   FUNC_0 (VAR_3->data);
   VAR_3->data = 0;
 }
    }
}
