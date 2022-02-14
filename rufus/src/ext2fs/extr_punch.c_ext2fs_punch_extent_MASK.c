
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_extent {int e_lblk; int e_len; int e_pblk; int e_flags; } ;
struct ext2_inode {int dummy; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef int ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct ext2fs_extent*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,struct ext2fs_extent*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_8 (int ,int ,struct ext2_inode*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_10 (int ,struct ext2_inode*,int) ;
 scalar_t__ FUNC_11 (int ,int ,struct ext2_inode*,int,int,int,int*) ;

__attribute__((used)) static errcode_t FUNC_12(ext2_filsys VAR_5, ext2_ino_t VAR_6,
         struct ext2_inode *VAR_7,
         blk64_t VAR_8, blk64_t VAR_9)
{
 ext2_extent_handle_t VAR_10 = 0;
 struct ext2fs_extent VAR_11;
 errcode_t VAR_12;
 blk64_t VAR_13, VAR_14, VAR_15;
 __u32 VAR_16, VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 VAR_12 = FUNC_8(VAR_5, VAR_6, VAR_7, &VAR_10);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_6(VAR_10, VAR_8);
 if (VAR_12)
  goto errout;
 VAR_12 = FUNC_5(VAR_10, VAR_2, &VAR_11);
 if (VAR_12 == VAR_1) {
  VAR_12 = 0;
  goto errout;
 } else if (VAR_12)
  goto errout;
 while (1) {
  VAR_19 = VAR_4;
  FUNC_0("main loop", &VAR_11);
  VAR_14 = VAR_11.e_lblk + VAR_11.e_len;
  FUNC_1("start %llu, end %llu, next %llu\n",
      (unsigned long long) VAR_8,
      (unsigned long long) VAR_9,
      (unsigned long long) VAR_14);
  if (VAR_8 <= VAR_11.e_lblk) {




   if (VAR_9 < VAR_11.e_lblk)
    break;
   FUNC_1("Case #%d\n", 1);


   VAR_13 = VAR_11.e_pblk;
   VAR_15 = VAR_11.e_lblk;
   if (VAR_14 > VAR_9)
    VAR_16 = VAR_9 - VAR_11.e_lblk + 1;
   else
    VAR_16 = VAR_11.e_len;
   VAR_11.e_len -= VAR_16;
   VAR_11.e_lblk += VAR_16;
   VAR_11.e_pblk += VAR_16;
  } else if (VAR_9 >= VAR_14-1) {





   if (VAR_8 >= VAR_14)
    goto next_extent;


   FUNC_1("Case #%d\n", 2);
   VAR_17 = VAR_8 - VAR_11.e_lblk;
   VAR_13 = VAR_11.e_pblk + VAR_17;
   VAR_15 = VAR_11.e_lblk + VAR_17;
   VAR_16 = VAR_11.e_len - VAR_17;
   VAR_11.e_len = VAR_17;
  } else {
   struct ext2fs_extent VAR_20;

   FUNC_1("Case #%d\n", 3);

   VAR_20.e_pblk = VAR_11.e_pblk +
    (VAR_9 + 1 - VAR_11.e_lblk);
   VAR_20.e_lblk = VAR_9 + 1;
   VAR_20.e_len = VAR_14 - VAR_9 - 1;
   VAR_20.e_flags = VAR_11.e_flags;

   VAR_11.e_len = VAR_8 - VAR_11.e_lblk;
   VAR_13 = VAR_11.e_pblk + VAR_11.e_len;
   VAR_15 = VAR_11.e_lblk + VAR_11.e_len;
   VAR_16 = VAR_9 - VAR_8 + 1;

   FUNC_0("inserting", &VAR_20);
   VAR_12 = FUNC_7(VAR_10,
     VAR_3, &VAR_20);
   if (VAR_12)
    goto errout;
   VAR_12 = FUNC_3(VAR_10);
   if (VAR_12)
    goto errout;






   VAR_12 = FUNC_6(VAR_10, VAR_11.e_lblk);
   if (VAR_12)
    goto errout;
  }
  if (VAR_11.e_len) {
   FUNC_0("replacing", &VAR_11);
   VAR_12 = FUNC_9(VAR_10, 0, &VAR_11);
   if (VAR_12)
    goto errout;
   VAR_12 = FUNC_3(VAR_10);
  } else {
   struct ext2fs_extent VAR_21;
   blk64_t VAR_22, VAR_23;
   FUNC_1("deleting current extent%s\n", "");





   VAR_12 = FUNC_5(VAR_10, VAR_2,
         &VAR_21);
   if (VAR_12)
    goto errout;
   VAR_22 = VAR_21.e_lblk;

   VAR_12 = FUNC_5(VAR_10,
         VAR_4,
         &VAR_21);
   if (VAR_12 == VAR_0)
    VAR_23 = VAR_22;
   else if (VAR_12)
    goto errout;
   else
    VAR_23 = VAR_21.e_lblk;

   VAR_12 = FUNC_6(VAR_10, VAR_22);
   if (VAR_12)
    goto errout;


   VAR_12 = FUNC_2(VAR_10, 0);
   if (VAR_12)
    goto errout;

   VAR_12 = FUNC_3(VAR_10);
   if (VAR_12 && VAR_12 != VAR_1)
    goto errout;
   VAR_12 = 0;






   (void)FUNC_6(VAR_10, VAR_23);
   VAR_19 = VAR_2;
  }
  if (VAR_12)
   goto errout;
  FUNC_1("Free start %llu, free count = %u\n",
         VAR_13, VAR_16);
  VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_15,
          VAR_13, VAR_16, &VAR_18);
  if (VAR_12)
   goto errout;
 next_extent:
  VAR_12 = FUNC_5(VAR_10, VAR_19,
        &VAR_11);
  if (VAR_12 == VAR_0 ||
      VAR_12 == VAR_1)
   break;
  if (VAR_12)
   goto errout;
 }
 FUNC_1("Freed %d blocks\n", VAR_18);
 VAR_12 = FUNC_10(VAR_5, VAR_7, VAR_18);
errout:
 FUNC_4(VAR_10);
 return VAR_12;
}
