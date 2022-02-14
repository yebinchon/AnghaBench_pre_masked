
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inline_data {char* ea_data; scalar_t__ ea_size; int ino; int fs; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef int errcode_t ;


 int FUNC_0 (struct ext2_inline_data*) ;

errcode_t FUNC_1(ext2_filsys VAR_0, ext2_ino_t VAR_1)
{
 struct ext2_inline_data VAR_2;
 char VAR_3[1] = { '\0' };

 VAR_2.fs = VAR_0;
 VAR_2.ino = VAR_1;
 VAR_2.ea_size = 0;
 VAR_2.ea_data = VAR_3;
 return FUNC_0(&VAR_2);
}
