
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ext2_inode {int i_flags; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_5__ {int super; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_inode*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct ext2_inode*,int ,scalar_t__,scalar_t__*) ;

errcode_t FUNC_4(ext2_filsys VAR_1, ext2_ino_t VAR_2,
       struct ext2_inode *VAR_3, blk64_t VAR_4,
       blk64_t *VAR_5)
{
 ext2_extent_handle_t VAR_6;
 errcode_t VAR_7;


 *VAR_5 = 0;
 if (!FUNC_2(VAR_1->super) ||
     !(VAR_3->i_flags & VAR_0))
  return 0;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6, VAR_4, VAR_5);
 if (VAR_7)
  goto out2;

out2:
 FUNC_0(VAR_6);
out:
 return VAR_7;
}
