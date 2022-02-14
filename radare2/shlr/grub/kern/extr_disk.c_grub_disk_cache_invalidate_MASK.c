
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_disk_cache {unsigned long dev_id; unsigned long disk_id; int sector; int lock; scalar_t__ data; } ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,unsigned long,int) ;
 struct grub_disk_cache* VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (unsigned long VAR_2, unsigned long VAR_3,
       grub_disk_addr_t VAR_4)
{
  unsigned VAR_5;
  struct grub_disk_cache *VAR_6;

  VAR_4 &= ~(VAR_0 - 1);
  VAR_5 = FUNC_0 (VAR_2, VAR_3, VAR_4);
  VAR_6 = VAR_1 + VAR_5;

  if (VAR_6->dev_id == VAR_2 && VAR_6->disk_id == VAR_3
      && VAR_6->sector == VAR_4 && VAR_6->data)
    {
      VAR_6->lock = 1;
      FUNC_1 (VAR_6->data);
      VAR_6->data = 0;
      VAR_6->lock = 0;
    }
}
