
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_disk_cache {unsigned long dev_id; unsigned long disk_id; scalar_t__ sector; int lock; char* data; } ;
typedef scalar_t__ grub_disk_addr_t ;


 unsigned int FUNC_0 (unsigned long,unsigned long,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct grub_disk_cache* VAR_2 ;

__attribute__((used)) static char *
FUNC_1 (unsigned long VAR_3, unsigned long VAR_4,
         grub_disk_addr_t VAR_5)
{
  struct grub_disk_cache *VAR_6;
  unsigned VAR_7;

  VAR_7 = FUNC_0 (VAR_3, VAR_4, VAR_5);
  VAR_6 = VAR_2 + VAR_7;

  if (VAR_6->dev_id == VAR_3 && VAR_6->disk_id == VAR_4
      && VAR_6->sector == VAR_5)
    {
      VAR_6->lock = 1;



      return VAR_6->data;
    }





  return 0;
}
