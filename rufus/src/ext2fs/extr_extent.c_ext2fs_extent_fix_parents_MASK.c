
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct extent_path {int left; int entries; int curr; } ;
struct ext2fs_extent {scalar_t__ e_lblk; int e_len; } ;
struct ext2_extent_info {int max_depth; int curr_level; } ;
typedef TYPE_2__* ext2_extent_handle_t ;
typedef int errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_11__ {int level; struct extent_path* path; TYPE_1__* fs; } ;
struct TYPE_10__ {int flags; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 int FUNC_2 (TYPE_2__*,struct ext2_extent_info*) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 int FUNC_5 (TYPE_2__*) ;

errcode_t FUNC_6(ext2_extent_handle_t VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 blk64_t VAR_9;
 struct extent_path *VAR_10;
 struct ext2fs_extent VAR_11;
 struct ext2_extent_info VAR_12;

 FUNC_0(VAR_6, VAR_0);

 if (!(VAR_6->fs->flags & VAR_5))
  return VAR_2;

 if (!VAR_6->path)
  return VAR_1;

 VAR_10 = VAR_6->path + VAR_6->level;
 if (!VAR_10->curr)
  return VAR_1;

 VAR_7 = FUNC_1(VAR_6, VAR_3, &VAR_11);
 if (VAR_7)
  goto done;


 VAR_9 = VAR_11.e_lblk;

 if ((VAR_7 = FUNC_2(VAR_6, &VAR_12)))
  return VAR_7;
 VAR_8 = VAR_12.max_depth - VAR_12.curr_level;


 while (VAR_6->level > 0 &&
        (VAR_10->left == VAR_10->entries - 1)) {
  VAR_7 = FUNC_1(VAR_6, VAR_4, &VAR_11);
  if (VAR_7)
   goto done;
  if (VAR_11.e_lblk == VAR_9)
   break;
  VAR_10 = VAR_6->path + VAR_6->level;
  VAR_11.e_len += (VAR_11.e_lblk - VAR_9);
  VAR_11.e_lblk = VAR_9;
  VAR_7 = FUNC_4(VAR_6, 0, &VAR_11);
  if (VAR_7)
   goto done;
  FUNC_5(VAR_6);
 }


 VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_9);
done:
 return VAR_7;
}
