
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct grub_jfs_treehead {int flags; int count; } ;
struct TYPE_4__ {int length2; int blk2; int length; } ;
struct grub_jfs_tree_extent {TYPE_1__ extent; int offset2; } ;
struct getblk_closure {scalar_t__ blk; TYPE_3__* data; } ;
struct TYPE_5__ {int log2_blksz; } ;
struct TYPE_6__ {TYPE_2__ sblock; int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (struct grub_jfs_treehead *VAR_2,
 struct grub_jfs_tree_extent *VAR_3,
 struct getblk_closure *VAR_4)
{
  int VAR_5 = -1;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < FUNC_1 (VAR_2->count) - 2; VAR_6++)
    {
      if (VAR_2->flags & VAR_1)
 {

   if (FUNC_2 (VAR_3[VAR_6].offset2) <= VAR_4->blk
       && ((FUNC_1 (VAR_3[VAR_6].extent.length))
    + (VAR_3[VAR_6].extent.length2 << 8)
    + FUNC_2 (VAR_3[VAR_6].offset2)) > VAR_4->blk)
     return (VAR_4->blk - FUNC_2 (VAR_3[VAR_6].offset2)
      + FUNC_2 (VAR_3[VAR_6].extent.blk2));
 }
      else
 if (VAR_4->blk >= FUNC_2 (VAR_3[VAR_6].offset2))
   VAR_5 = VAR_6;
    }

  if (VAR_5 != -1)
    {
      struct
      {
 struct grub_jfs_treehead treehead;
 struct grub_jfs_tree_extent extents[254];
      } VAR_7;

      if (FUNC_0 (VAR_4->data->disk,
     FUNC_2 (VAR_3[VAR_5].extent.blk2)
     << (FUNC_1 (VAR_4->data->sblock.log2_blksz)
         - VAR_0), 0,
     sizeof (VAR_7), (char *) &VAR_7))
 return -1;

      return FUNC_3 (&VAR_7.treehead, &VAR_7.extents[0], VAR_4);
    }

  return -1;
}
