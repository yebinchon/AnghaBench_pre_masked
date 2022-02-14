
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_afs_sblock {int block_per_group; } ;
struct grub_afs_blockrun {int start; int group; } ;
typedef int grub_afs_off_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static grub_afs_off_t
FUNC_2 (struct grub_afs_sblock *VAR_0,
                     struct grub_afs_blockrun *VAR_1)
{
  return ((grub_afs_off_t) FUNC_1 (VAR_1->group)
   * VAR_0->block_per_group + FUNC_0 (VAR_1->start));
}
