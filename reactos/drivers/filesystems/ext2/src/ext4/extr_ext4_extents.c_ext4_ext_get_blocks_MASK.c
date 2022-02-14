
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_extent {int ee_len; int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_bdev; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,int *,struct inode*,struct ext4_ext_path**,scalar_t__,unsigned long,int) ;
 int FUNC_7 (struct ext4_ext_path*) ;
 int FUNC_8 (struct inode*,struct ext4_ext_path*,scalar_t__) ;
 unsigned short FUNC_9 (struct ext4_extent*) ;
 int FUNC_10 (void*,int *,struct inode*,struct ext4_ext_path**,struct ext4_extent*,int) ;
 scalar_t__ FUNC_11 (struct ext4_extent*) ;
 int FUNC_12 (struct ext4_extent*) ;
 scalar_t__ FUNC_13 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_14 (struct ext4_extent*) ;
 int FUNC_15 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_16 (struct ext4_extent*,scalar_t__) ;
 struct ext4_ext_path* FUNC_17 (struct inode*,scalar_t__,int *,int ) ;
 int FUNC_18 (void*,int *,struct inode*,int *,scalar_t__,int ,int ) ;
 int FUNC_19 (void*,int *,struct inode*) ;
 scalar_t__ FUNC_20 (void*,int *,struct inode*,int,int ,unsigned long*,int*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct ext4_ext_path*) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct buffer_head*) ;
 int FUNC_27 (struct buffer_head*) ;

int FUNC_28(void *VAR_2, handle_t *VAR_3, struct inode *VAR_4, ext4_fsblk_t VAR_5,
  unsigned long VAR_6, struct buffer_head *VAR_7,
  int VAR_8, int VAR_9)
{
 struct ext4_ext_path *VAR_10 = ((void*)0);
 struct ext4_extent VAR_11, *VAR_12;
 int VAR_13, VAR_14 = 0, VAR_15;
 unsigned long VAR_16 = 0;
 ext4_fsblk_t VAR_17, VAR_18;

 FUNC_3(VAR_7);



 VAR_10 = FUNC_17(VAR_4, VAR_5, ((void*)0), 0);
 if (FUNC_1(VAR_10)) {
  VAR_14 = FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
  goto out2;
 }

 VAR_15 = FUNC_21(VAR_4);






 FUNC_0(VAR_10[VAR_15].p_ext == ((void*)0) && VAR_15 != 0);

 if ((VAR_12 = VAR_10[VAR_15].p_ext)) {
  ext4_lblk_t VAR_19 = FUNC_25(VAR_12->ee_block);
  ext4_fsblk_t VAR_20 = FUNC_14(VAR_12);
  unsigned short VAR_21 = FUNC_9(VAR_12);

  if (VAR_5 >= VAR_19 && VAR_5 < VAR_19 + VAR_21) {


   VAR_16 = VAR_21 + VAR_19 - VAR_5;

   if (FUNC_11(VAR_12)) {
    if (VAR_8) {
     VAR_18 = VAR_5 - VAR_19 + VAR_20;
     VAR_14 = FUNC_6 (
       VAR_2, VAR_3,
       VAR_4,
       &VAR_10,
       VAR_5,
       VAR_16,
       VAR_9);
     if (VAR_14)
      goto out2;

    } else {
     VAR_18 = 0;
    }
   } else {
    VAR_18 = VAR_5 - VAR_19 + VAR_20;
   }
   goto out;
  }
 }





 if (!VAR_8) {
  goto out2;
 }



 VAR_17 = FUNC_13(VAR_10);
 FUNC_0(VAR_17 <= VAR_5);
 VAR_16 = VAR_17 - VAR_5;
 if (VAR_9 & VAR_0 && VAR_6 > VAR_1)
  VAR_6 = VAR_1;
 if (VAR_16 > VAR_6)
  VAR_16 = VAR_6;


 VAR_13 = FUNC_8(VAR_4, VAR_10, VAR_5);

 VAR_18 = FUNC_20(VAR_2, VAR_3, VAR_4, VAR_13, 0,
   &VAR_16, &VAR_14);
 if (!VAR_18)
  goto out2;


 VAR_11.ee_block = FUNC_5(VAR_5);
 FUNC_16(&VAR_11, VAR_18);
 VAR_11.ee_len = FUNC_4(VAR_16);

 if (VAR_9 & VAR_0) {
  FUNC_12(&VAR_11);
 }
 VAR_14 = FUNC_10(VAR_2, VAR_3, VAR_4, &VAR_10, &VAR_11,
                                 VAR_9 & VAR_0);

 if (VAR_14) {

  FUNC_18(VAR_2, VAR_3, VAR_4, ((void*)0), FUNC_14(&VAR_11),
    FUNC_24(VAR_11.ee_len), FUNC_22(VAR_4));
  goto out2;
 }

 FUNC_19(VAR_2, VAR_3, VAR_4);


 if (FUNC_11(&VAR_11))
  VAR_18 = 0;
 else
  VAR_18 = FUNC_14(&VAR_11);

 FUNC_27(VAR_7);

out:
 if (VAR_16 > VAR_6)
  VAR_16 = VAR_6;

 FUNC_15(VAR_4, VAR_10);
 FUNC_26(VAR_7);
 VAR_7->b_bdev = VAR_4->i_sb->s_bdev;
 VAR_7->b_blocknr = VAR_18;
out2:
 if (VAR_10) {
  FUNC_7(VAR_10);
  FUNC_23(VAR_10);
 }


 return VAR_14 ? VAR_14 : VAR_16;
}
