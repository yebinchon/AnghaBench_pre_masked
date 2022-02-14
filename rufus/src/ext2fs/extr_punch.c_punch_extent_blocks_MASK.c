
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int ,struct ext2_inode*,int,int*) ;

__attribute__((used)) static errcode_t FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1,
         struct ext2_inode *VAR_2,
         blk64_t VAR_3, blk64_t VAR_4,
         __u32 VAR_5, int *VAR_6)
{
 blk64_t VAR_7;
 int VAR_8 = 0;
 __u32 VAR_9;
 errcode_t VAR_10 = 0;


 if (FUNC_1(VAR_0) == 1) {
  *VAR_6 += VAR_5;
  while (VAR_5-- > 0)
   FUNC_2(VAR_0, VAR_4++, -1);
  return VAR_10;
 }






 if (VAR_4 & FUNC_0(VAR_0)) {
  VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2,
        VAR_3, &VAR_7);
  if (VAR_10)
   goto errout;
  if (!VAR_7) {
   FUNC_2(VAR_0, VAR_4, -1);
   VAR_8++;
  }
  VAR_9 = FUNC_1(VAR_0) -
   (VAR_4 & FUNC_0(VAR_0));
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_5;
  VAR_5 -= VAR_9;
  VAR_4 += VAR_9;
  VAR_3 += VAR_9;
 }


 while (VAR_5 > 0 && VAR_5 >= (unsigned) FUNC_1(VAR_0)) {
  FUNC_2(VAR_0, VAR_4, -1);
  VAR_8++;
  VAR_9 = FUNC_1(VAR_0);
  VAR_5 -= VAR_9;
  VAR_4 += VAR_9;
  VAR_3 += VAR_9;
 }


 if (VAR_5 > 0) {
  VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2,
        VAR_3, &VAR_7);
  if (VAR_10)
   goto errout;
  if (!VAR_7) {
   FUNC_2(VAR_0, VAR_4, -1);
   VAR_8++;
  }
 }

errout:
 *VAR_6 += VAR_8;
 return VAR_10;
}
