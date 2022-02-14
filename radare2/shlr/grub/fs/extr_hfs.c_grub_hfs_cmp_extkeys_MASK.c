
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_extent_key {int forktype; int first_block; int fileid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (struct grub_hfs_extent_key *VAR_0,
        struct grub_hfs_extent_key *VAR_1)
{
  int VAR_2 = VAR_0->forktype - VAR_1->forktype;
  if (VAR_2 == 0)
    VAR_2 = FUNC_1 (VAR_0->fileid) - FUNC_1 (VAR_1->fileid);
  if (VAR_2 == 0)
    VAR_2 = (FUNC_0 (VAR_0->first_block)
    - FUNC_0 (VAR_1->first_block));
  return VAR_2;
}
