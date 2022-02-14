
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {scalar_t__ i_block; } ;
struct ext2_inline_data {size_t ea_size; char* ea_data; int ino; int fs; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct ext2_inline_data*) ;
 scalar_t__ FUNC_1 (int ,int ,size_t*) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_3 (int ,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t*) ;
 int FUNC_5 (void*,void*,size_t) ;

errcode_t FUNC_6(ext2_filsys VAR_2, ext2_ino_t VAR_3,
     struct ext2_inode *VAR_4,
     void *VAR_5, size_t VAR_6)
{
 struct ext2_inode VAR_7;
 struct ext2_inline_data VAR_8 = {
  .fs = VAR_2,
  .ino = VAR_3,
 };
 errcode_t VAR_9;
 size_t VAR_10, VAR_11, VAR_12;

 if (!VAR_4) {
  VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_4 = &VAR_7;
 }

 if (VAR_6 <= VAR_1) {
  FUNC_5((void *)VAR_4->i_block, VAR_5, VAR_6);
 } else {
  VAR_9 = FUNC_4(VAR_2, VAR_3, &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_11);
  if (VAR_9)
   return VAR_9;

  if (VAR_11 < VAR_1) {
   VAR_12 = VAR_1 -
       VAR_11;
  } else {
   VAR_12 = 0;
  }

  if (VAR_6 != VAR_11 &&
      VAR_6 > VAR_11 + VAR_10 + VAR_12)
   return VAR_0;

  FUNC_5((void *)VAR_4->i_block, VAR_5, VAR_1);
  if (VAR_6 > VAR_1)
   VAR_8.ea_size = VAR_6 - VAR_1;
  VAR_8.ea_data = (char *) VAR_5 + VAR_1;
 }
 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;
 return FUNC_0(&VAR_8);
}
