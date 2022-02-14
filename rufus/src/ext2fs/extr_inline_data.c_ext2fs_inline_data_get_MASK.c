
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {scalar_t__ i_block; } ;
struct ext2_inline_data {size_t ea_size; int ea_data; int ino; int fs; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ext2_inline_data*) ;
 scalar_t__ FUNC_2 (int ,int ,struct ext2_inode*) ;
 int FUNC_3 (char*,void*,size_t) ;

errcode_t FUNC_4(ext2_filsys VAR_1, ext2_ino_t VAR_2,
     struct ext2_inode *VAR_3,
     void *VAR_4, size_t *VAR_5)
{
 struct ext2_inode VAR_6;
 struct ext2_inline_data VAR_7;
 errcode_t VAR_8;

 if (!VAR_3) {
  VAR_8 = FUNC_2(VAR_1, VAR_2, &VAR_6);
  if (VAR_8)
   return VAR_8;
  VAR_3 = &VAR_6;
 }

 VAR_7.fs = VAR_1;
 VAR_7.ino = VAR_2;
 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_4, (void *)VAR_3->i_block, VAR_0);
 if (VAR_7.ea_size > 0)
  FUNC_3((char *) VAR_4 + VAR_0,
         VAR_7.ea_data, VAR_7.ea_size);

 if (VAR_5)
  *VAR_5 = VAR_0 + VAR_7.ea_size;
 FUNC_0(&VAR_7.ea_data);
 return 0;
}
