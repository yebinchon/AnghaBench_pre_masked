
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode {int* i_block; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_4__ {scalar_t__ blocksize; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int,scalar_t__,char**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct ext2_inode*,char*,int*,int,scalar_t__,int,int) ;
 int FUNC_3 (char*,int,scalar_t__,int,scalar_t__,int) ;

__attribute__((used)) static errcode_t FUNC_4(ext2_filsys VAR_2, struct ext2_inode *VAR_3,
      char *VAR_4, blk64_t VAR_5, blk64_t VAR_6)
{
 errcode_t VAR_7;
 char *VAR_8 = 0;
 int VAR_9;
 int VAR_10 = VAR_1;
 blk_t *VAR_11 = VAR_3->i_block;
 blk_t VAR_12;
 blk64_t VAR_13 = VAR_1;
 blk_t VAR_14;


 if (VAR_5 > VAR_0)
  return 0;
 if (VAR_6 >= VAR_0 || VAR_6 - VAR_5 + 1 >= VAR_0)
  VAR_14 = VAR_0 - VAR_5;
 else
  VAR_14 = VAR_6 - VAR_5 + 1;

 if (!VAR_4) {
  VAR_7 = FUNC_1(3, VAR_2->blocksize, &VAR_8);
  if (VAR_7)
   return VAR_7;
  VAR_4 = VAR_8;
 }

 VAR_12 = (blk_t)VAR_2->blocksize >> 2;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_13 *= (blk64_t)VAR_12) {




  if (VAR_5 < VAR_13) {
   VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_11, VAR_9,
        VAR_5, VAR_14, VAR_10);
   if (VAR_7)
    goto errout;
   if (VAR_14 > VAR_13)
    VAR_14 -= VAR_13 - VAR_5;
   else
    break;
   VAR_5 = 0;
  } else
   VAR_5 -= VAR_13;
  VAR_11 += VAR_10;
  if (VAR_9 == 0) {
   VAR_10 = 1;
   VAR_13 = 1;
  }
 }
 VAR_7 = 0;
errout:
 if (VAR_8)
  FUNC_0(&VAR_8);
 return VAR_7;
}
