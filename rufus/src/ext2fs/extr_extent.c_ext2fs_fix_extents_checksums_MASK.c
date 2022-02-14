
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2fs_extent {int e_flags; } ;
struct ext2_inode {int i_flags; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_4__ {int flags; int super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct ext2_inode*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

errcode_t FUNC_5(ext2_filsys VAR_9, ext2_ino_t VAR_10,
           struct ext2_inode *VAR_11)
{
 ext2_extent_handle_t VAR_12;
 struct ext2fs_extent VAR_13;
 errcode_t VAR_14;
 int VAR_15 = VAR_9->flags;

 if (!FUNC_3(VAR_9->super) ||
     (VAR_11 && !(VAR_11->i_flags & VAR_8)))
  return 0;

 VAR_14 = FUNC_2(VAR_9, VAR_10, VAR_11, &VAR_12);
 if (VAR_14) {
  if (VAR_14 == VAR_2)
   VAR_14 = 0;
  return VAR_14;
 }

 VAR_9->flags &= ~VAR_7;
 VAR_14 = FUNC_1(VAR_12, VAR_6, &VAR_13);
 if (VAR_14)
  goto out;

 do {

  if (VAR_13.e_flags & VAR_3) {
   VAR_14 = FUNC_1(VAR_12,
          VAR_4,
          &VAR_13);
   if (VAR_14)
    break;
  }

  VAR_14 = FUNC_1(VAR_12, VAR_5, &VAR_13);
  if (VAR_14 == VAR_0)
   VAR_14 = FUNC_4(VAR_12);
 } while (VAR_14 == 0);

out:

 if (VAR_14 == VAR_1)
  VAR_14 = 0;
 FUNC_0(VAR_12);
 VAR_9->flags = VAR_15;
 return VAR_14;
}
