
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct extent_path {scalar_t__ entries; scalar_t__ max_entries; int left; scalar_t__ buf; struct ext3_extent_idx* curr; } ;
struct ext3_extent_idx {int dummy; } ;
struct ext3_extent_header {int eh_entries; } ;
struct ext2fs_extent {int dummy; } ;
typedef TYPE_2__* ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_10__ {int ino; int level; struct extent_path* path; TYPE_1__* fs; } ;
struct TYPE_9__ {int flags; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ext3_extent_idx* FUNC_1 (struct ext3_extent_header*) ;
 int FUNC_2 (int ,struct ext2fs_extent*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (struct ext3_extent_idx*,struct ext3_extent_idx*,int) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

errcode_t FUNC_10(ext2_extent_handle_t VAR_7, int VAR_8,
          struct ext2fs_extent *VAR_9)
{
 struct extent_path *VAR_10;
 struct ext3_extent_idx *VAR_11;
 struct ext3_extent_header *VAR_12;
 errcode_t VAR_13;

 FUNC_0(VAR_7, VAR_1);

 if (!(VAR_7->fs->flags & VAR_6))
  return VAR_3;

 if (!VAR_7->path)
  return VAR_2;






 VAR_10 = VAR_7->path + VAR_7->level;

 if (VAR_10->entries >= VAR_10->max_entries) {
  if (VAR_8 & VAR_5) {
   return VAR_0;
  } else {




   VAR_13 = FUNC_6(VAR_7, 1);
   if (VAR_13)
    return VAR_13;
   VAR_10 = VAR_7->path + VAR_7->level;
  }
 }

 VAR_12 = (struct ext3_extent_header *) VAR_10->buf;
 if (VAR_10->curr) {
  VAR_11 = VAR_10->curr;
  if (VAR_8 & VAR_4) {
   VAR_11++;
   VAR_10->left--;
  }
 } else {
  VAR_11 = FUNC_1(VAR_12);
  VAR_10->left = -1;
 }

 VAR_10->curr = VAR_11;

 if (VAR_10->left >= 0)
  FUNC_7(VAR_11 + 1, VAR_11,
   (VAR_10->left+1) * sizeof(struct ext3_extent_idx));
 VAR_10->left++;
 VAR_10->entries++;

 VAR_12 = (struct ext3_extent_header *) VAR_10->buf;
 VAR_12->eh_entries = FUNC_3(VAR_10->entries);

 VAR_13 = FUNC_5(VAR_7, 0, VAR_9);
 if (VAR_13)
  goto errout;

 VAR_13 = FUNC_9(VAR_7);
 if (VAR_13)
  goto errout;

 return 0;

errout:
 FUNC_4(VAR_7, 0);
 return VAR_13;
}
