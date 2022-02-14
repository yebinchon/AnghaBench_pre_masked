
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int i_flags; } ;
struct ext2_inline_data {size_t ea_size; int ea_data; int ino; int fs; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ext2_inline_data*) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_inode*) ;

errcode_t FUNC_3(ext2_filsys VAR_3, ext2_ino_t VAR_4, size_t *VAR_5)
{
 struct ext2_inode VAR_6;
 struct ext2_inline_data VAR_7;
 errcode_t VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (!(VAR_6.i_flags & VAR_1))
  return VAR_0;

 VAR_7.fs = VAR_3;
 VAR_7.ino = VAR_4;
 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_2 + VAR_7.ea_size;
 return FUNC_0(&VAR_7.ea_data);
}
