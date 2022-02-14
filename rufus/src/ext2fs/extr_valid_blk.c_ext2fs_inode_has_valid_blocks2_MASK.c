
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {scalar_t__ i_blocks; int i_size; scalar_t__* i_block; int i_flags; int i_mode; } ;
typedef int ext2_filsys ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct ext2_inode*) ;

int FUNC_4(ext2_filsys VAR_2, struct ext2_inode *VAR_3)
{




 if (!FUNC_0(VAR_3->i_mode) && !FUNC_2(VAR_3->i_mode) &&
     !FUNC_1(VAR_3->i_mode))
  return 0;





 if (FUNC_1 (VAR_3->i_mode)) {
  if (FUNC_3(VAR_2, VAR_3) == 0) {

   if (VAR_3->i_blocks == 0)
    return 0;
  } else {

   if (VAR_3->i_size >= VAR_0*4)
    return 1;
   if (VAR_3->i_size > 4 && VAR_3->i_block[1] == 0)
    return 1;
   return 0;
  }
 }





 if (VAR_3->i_flags & VAR_1)
  return 0;
 return 1;
}
