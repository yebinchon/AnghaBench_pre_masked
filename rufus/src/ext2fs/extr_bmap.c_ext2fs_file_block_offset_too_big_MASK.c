
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2_inode {int i_flags; } ;
typedef TYPE_1__* ext2_filsys ;
typedef unsigned long long blk64_t ;
struct TYPE_3__ {int blocksize; } ;


 int VAR_0 ;

int FUNC_0(ext2_filsys VAR_1,
         struct ext2_inode *VAR_2,
         blk64_t VAR_3)
{
 blk64_t VAR_4, VAR_5;


 if (VAR_3 >= (1ULL << 32) - 1)
  return 1;

 if (VAR_2->i_flags & VAR_0)
  return 0;

 VAR_4 = VAR_1->blocksize >> 2;
 VAR_5 = VAR_4;
 VAR_5 += VAR_4 * VAR_4;
 VAR_5 += VAR_4 * VAR_4 * VAR_4;
 VAR_5 += 12;

 return VAR_3 >= VAR_5;
}
