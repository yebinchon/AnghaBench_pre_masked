
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct find_func_closure {int partnum; scalar_t__ p; } ;
typedef scalar_t__ grub_partition_t ;
typedef TYPE_1__* grub_partition_map_t ;
typedef int grub_disk_t ;
struct TYPE_3__ {int (* iterate ) (int ,int ,struct find_func_closure*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,struct find_func_closure*) ;

__attribute__((used)) static grub_partition_t
FUNC_2 (const grub_partition_map_t VAR_2,
     grub_disk_t VAR_3, int VAR_4)
{
  struct find_func_closure VAR_5;

  VAR_5.partnum = VAR_4;
  VAR_5.p = 0;
  VAR_2->iterate (VAR_3, VAR_0, &VAR_5);
  if (VAR_1)
    goto fail;

  return VAR_5.p;

 fail:
  FUNC_0 (VAR_5.p);
  return 0;
}
