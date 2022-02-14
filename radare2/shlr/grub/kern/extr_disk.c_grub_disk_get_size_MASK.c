
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int grub_uint64_t ;
typedef TYPE_1__* grub_disk_t ;
struct TYPE_3__ {int total_sectors; scalar_t__ partition; } ;


 int FUNC_0 (scalar_t__) ;

grub_uint64_t
FUNC_1 (grub_disk_t VAR_0)
{
  if (VAR_0->partition)
    return FUNC_0 (VAR_0->partition);
  else
    return VAR_0->total_sectors;
}
