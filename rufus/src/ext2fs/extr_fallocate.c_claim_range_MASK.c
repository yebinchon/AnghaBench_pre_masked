
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int dummy; } ;
typedef int ext2_filsys ;
typedef int errcode_t ;
typedef int blk64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,struct ext2_inode*,int) ;

__attribute__((used)) static errcode_t FUNC_3(ext2_filsys VAR_0, struct ext2_inode *VAR_1,
        blk64_t VAR_2, blk64_t VAR_3)
{
 blk64_t VAR_4;

 VAR_4 = (VAR_3 + FUNC_0(VAR_0) - 1) /
     FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_2,
   VAR_4 * FUNC_0(VAR_0), +1);
 return FUNC_2(VAR_0, VAR_1, VAR_4);
}
