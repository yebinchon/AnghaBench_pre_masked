
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_disk_cache {int lock; unsigned long dev_id; unsigned long disk_id; int sector; scalar_t__ data; } ;
typedef int grub_err_t ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned long,unsigned long,int ) ;
 struct grub_disk_cache* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char const*,int) ;

__attribute__((used)) static grub_err_t
FUNC_4 (unsigned long VAR_5, unsigned long VAR_6,
         grub_disk_addr_t VAR_7, const char *VAR_8)
{
  unsigned VAR_9;
  struct grub_disk_cache *VAR_10;

  VAR_9 = FUNC_0 (VAR_5, VAR_6, VAR_7);
  VAR_10 = VAR_3 + VAR_9;

  VAR_10->lock = 1;
  FUNC_1 (VAR_10->data);
  VAR_10->data = 0;
  VAR_10->lock = 0;

  VAR_10->data = FUNC_2 (VAR_1 << VAR_0);
  if (! VAR_10->data)
    return VAR_4;

  FUNC_3 (VAR_10->data, VAR_8,
        VAR_1 << VAR_0);
  VAR_10->dev_id = VAR_5;
  VAR_10->disk_id = VAR_6;
  VAR_10->sector = VAR_7;

  return VAR_2;
}
