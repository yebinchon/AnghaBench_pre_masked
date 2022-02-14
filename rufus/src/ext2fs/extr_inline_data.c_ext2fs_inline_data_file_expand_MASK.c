
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ext2_inode {scalar_t__ i_size; int i_flags; int i_block; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int ext2_file_t ;
typedef int ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_6__ {int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_inode*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,size_t,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,struct ext2_inode*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static errcode_t
FUNC_8(ext2_filsys VAR_3, ext2_ino_t VAR_4,
          struct ext2_inode *VAR_5, char *VAR_6, size_t VAR_7)
{
 ext2_file_t VAR_8;
 errcode_t VAR_9;


 FUNC_7(VAR_5->i_block, 0, sizeof(VAR_5->i_block));
 if (FUNC_5(VAR_3->super)) {
  ext2_extent_handle_t VAR_10;

  VAR_5->i_flags &= ~VAR_1;
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_10);
  if (VAR_9)
   return VAR_9;
  FUNC_0(VAR_10);
 }
 VAR_5->i_flags &= ~VAR_2;
 VAR_5->i_size = 0;
 VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_7, 0);
 FUNC_2(VAR_8);
 return VAR_9;
}
