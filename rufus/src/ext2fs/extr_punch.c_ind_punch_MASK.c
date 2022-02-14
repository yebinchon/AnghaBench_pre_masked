
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode {int dummy; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ blk_t ;
typedef int blk64_t ;
struct TYPE_7__ {int blocksize; int super; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,struct ext2_inode*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static errcode_t FUNC_7(ext2_filsys VAR_0, struct ext2_inode *VAR_1,
      char *VAR_2, blk_t *VAR_3, int VAR_4,
      blk64_t VAR_5, blk64_t VAR_6, int VAR_7)
{
 errcode_t VAR_8;
 blk_t VAR_9;
 int VAR_10;
 blk64_t VAR_11, VAR_12;
 int VAR_13 = 0;





 VAR_12 = 1ULL << ((FUNC_0(VAR_0->super) - 2) * VAR_4);
 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_7; VAR_10++, VAR_3++, VAR_11 += VAR_12) {
  if (VAR_11 >= VAR_5 + VAR_6)
   break;
  if (*VAR_3 == 0 || (VAR_11+VAR_12) <= VAR_5)
   continue;
  VAR_9 = *VAR_3;
  if (VAR_4 > 0) {
   blk_t VAR_14;



   VAR_8 = FUNC_4(VAR_0, VAR_9, VAR_2);
   if (VAR_8)
    return VAR_8;
   VAR_14 = (VAR_5 > VAR_11) ? VAR_5 - VAR_11 : 0;
   VAR_8 = FUNC_7(VAR_0, VAR_1, VAR_2 + VAR_0->blocksize,
        (blk_t *) VAR_2, VAR_4 - 1,
        VAR_14, VAR_6 - VAR_11,
        VAR_0->blocksize >> 2);
   if (VAR_8)
    return VAR_8;
   VAR_8 = FUNC_5(VAR_0, VAR_9, VAR_2);
   if (VAR_8)
    return VAR_8;
   if (!FUNC_1(VAR_2, VAR_0->blocksize))
    continue;
  }



  FUNC_2(VAR_0, VAR_9, -1);
  *VAR_3 = 0;
  VAR_13++;
 }



 return FUNC_3(VAR_0, VAR_1, VAR_13);
}
