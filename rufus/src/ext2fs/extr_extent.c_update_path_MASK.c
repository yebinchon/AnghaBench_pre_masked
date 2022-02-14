
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext3_extent_idx {int ei_leaf_hi; int ei_leaf; } ;
struct ext3_extent_header {int dummy; } ;
typedef TYPE_2__* ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
typedef int __u64 ;
struct TYPE_8__ {int io; } ;
struct TYPE_7__ {int level; TYPE_1__* path; TYPE_4__* fs; int ino; int inode; } ;
struct TYPE_6__ {scalar_t__ buf; struct ext3_extent_idx* curr; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ,struct ext3_extent_header*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static errcode_t FUNC_5(ext2_extent_handle_t VAR_0)
{
 blk64_t VAR_1;
 errcode_t VAR_2;
 struct ext3_extent_idx *VAR_3;
 struct ext3_extent_header *VAR_4;

 if (VAR_0->level == 0) {
  VAR_2 = FUNC_3(VAR_0->fs, VAR_0->ino,
         VAR_0->inode);
 } else {
  VAR_3 = VAR_0->path[VAR_0->level - 1].curr;
  VAR_1 = FUNC_2(VAR_3->ei_leaf) +
   ((__u64) FUNC_1(VAR_3->ei_leaf_hi) << 32);


  VAR_4 = (struct ext3_extent_header *)
    VAR_0->path[VAR_0->level].buf;
  VAR_2 = FUNC_0(VAR_0->fs, VAR_0->ino,
            VAR_4);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_4(VAR_0->fs->io,
          VAR_1, 1, VAR_0->path[VAR_0->level].buf);
 }
 return VAR_2;
}
