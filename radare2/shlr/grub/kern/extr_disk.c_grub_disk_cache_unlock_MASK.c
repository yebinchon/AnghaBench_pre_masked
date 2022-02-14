
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_disk_cache {unsigned long dev_id; unsigned long disk_id; scalar_t__ sector; scalar_t__ lock; } ;
typedef scalar_t__ grub_disk_addr_t ;


 unsigned int FUNC_0 (unsigned long,unsigned long,scalar_t__) ;
 struct grub_disk_cache* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (unsigned long VAR_1, unsigned long VAR_2,
   grub_disk_addr_t VAR_3)
{
  struct grub_disk_cache *VAR_4;
  unsigned VAR_5;

  VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  VAR_4 = VAR_0 + VAR_5;

  if (VAR_4->dev_id == VAR_1 && VAR_4->disk_id == VAR_2
      && VAR_4->sector == VAR_3)
    VAR_4->lock = 0;
}
