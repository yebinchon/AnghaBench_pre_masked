
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log2_inop; int log2_inode; } ;
struct grub_xfs_data {TYPE_1__ sblock; } ;
typedef int grub_uint64_t ;


 int FUNC_0 (struct grub_xfs_data*,int ) ;

__attribute__((used)) static inline int
FUNC_1 (struct grub_xfs_data *VAR_0,
         grub_uint64_t VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_0, VAR_1);
  return ((VAR_2 & ((1 << VAR_0->sblock.log2_inop) - 1)) <<
   VAR_0->sblock.log2_inode);
}
