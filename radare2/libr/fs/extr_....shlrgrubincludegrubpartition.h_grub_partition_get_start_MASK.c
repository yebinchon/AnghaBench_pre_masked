
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int grub_uint64_t ;
typedef TYPE_1__* grub_partition_t ;
typedef int grub_disk_addr_t ;
struct TYPE_3__ {scalar_t__ start; struct TYPE_3__* parent; } ;



__attribute__((used)) static inline grub_disk_addr_t
FUNC_0 (const grub_partition_t VAR_0)
{
  grub_partition_t VAR_1;
  grub_uint64_t VAR_2 = 0;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->parent)
    VAR_2 += VAR_1->start;

  return VAR_2;
}
