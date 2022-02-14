
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode_large {int i_flags; int i_block; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct ext2_inode_large *VAR_1)
{
 if (!(VAR_1->i_flags & VAR_0) ||
     FUNC_0(VAR_1->i_block,
     sizeof(VAR_1->i_block)) == 0)
  return 0;
 return 1;
}
