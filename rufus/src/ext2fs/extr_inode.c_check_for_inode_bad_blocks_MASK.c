
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2_inode_scan ;
typedef int errcode_t ;
typedef scalar_t__ blk64_t ;
typedef TYPE_3__* badblocks_list ;
struct TYPE_7__ {scalar_t__* list; size_t num; } ;
struct TYPE_6__ {scalar_t__ current_block; size_t bad_block_ptr; int scan_flags; TYPE_1__* fs; } ;
struct TYPE_5__ {TYPE_3__* badblocks; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static errcode_t FUNC_0(ext2_inode_scan VAR_2,
         blk64_t *VAR_3)
{
 blk64_t VAR_4 = VAR_2->current_block;
 badblocks_list VAR_5 = VAR_2->fs->badblocks;





 if (VAR_4 == 0)
  return 0;







 while (VAR_4 > VAR_5->list[VAR_2->bad_block_ptr]) {
  if (++VAR_2->bad_block_ptr >= VAR_5->num) {
   VAR_2->scan_flags &= ~VAR_1;
   return 0;
  }
 }
 if (VAR_4 == VAR_5->list[VAR_2->bad_block_ptr]) {
  VAR_2->scan_flags |= VAR_0;
  *VAR_3 = 1;
  if (++VAR_2->bad_block_ptr >= VAR_5->num)
   VAR_2->scan_flags &= ~VAR_1;
  return 0;
 }







 if ((VAR_4 + *VAR_3) > VAR_5->list[VAR_2->bad_block_ptr])
  *VAR_3 = (int) (VAR_5->list[VAR_2->bad_block_ptr] - VAR_4);

 return 0;
}
