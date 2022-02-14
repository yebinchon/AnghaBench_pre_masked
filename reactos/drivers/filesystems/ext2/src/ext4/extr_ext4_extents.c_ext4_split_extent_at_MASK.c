
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent* p_ext; } ;
typedef int orig_ex ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_4 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (void*,int *,struct inode*,struct ext4_ext_path**,struct ext4_extent*,int) ;
 int FUNC_7 (struct ext4_extent*) ;
 int FUNC_8 (struct ext4_extent*) ;
 scalar_t__ FUNC_9 (struct ext4_extent*) ;
 int FUNC_10 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_11 (struct ext4_extent*,scalar_t__) ;
 int FUNC_12 (void*,int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_13 (struct inode*,struct ext4_extent*) ;
 unsigned int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct ext4_extent*,struct ext4_extent*,int) ;

__attribute__((used)) static int FUNC_17(void *VAR_7, handle_t *VAR_8,
  struct inode *VAR_9,
  struct ext4_ext_path **VAR_10,
  ext4_lblk_t VAR_11,
  int VAR_12,
  int VAR_13)
{
 struct ext4_ext_path *VAR_14 = *VAR_10;
 ext4_fsblk_t VAR_15;
 ext4_lblk_t VAR_16;
 struct ext4_extent *VAR_17, VAR_18, VAR_19, VAR_20;
 struct ext4_extent *VAR_21 = ((void*)0);
 unsigned int VAR_22, VAR_23;
 int VAR_24 = 0;

 FUNC_10(VAR_9, VAR_14);

 VAR_23 = FUNC_14(VAR_9);
 VAR_17 = VAR_14[VAR_23].p_ext;
 VAR_16 = FUNC_15(VAR_17->ee_block);
 VAR_22 = FUNC_5(VAR_17);
 VAR_15 = VAR_11 - VAR_16 + FUNC_9(VAR_17);

 FUNC_0(VAR_11 < VAR_16 || VAR_11 >= (VAR_16 + VAR_22));

 VAR_24 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_14 + VAR_23);
 if (VAR_24)
  goto out;

 if (VAR_11 == VAR_16) {





  if (VAR_12 & VAR_4)
   FUNC_8(VAR_17);
  else
   FUNC_7(VAR_17);

  if (!(VAR_13 & VAR_6))
   FUNC_12(VAR_7, VAR_8, VAR_9, VAR_14, VAR_17);

  VAR_24 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_14 + VAR_14->p_depth);
  goto out;
 }


 FUNC_16(&VAR_19, VAR_17, sizeof(VAR_19));
 VAR_17->ee_len = FUNC_1(VAR_11 - VAR_16);
 if (VAR_12 & VAR_3)
  FUNC_8(VAR_17);





 VAR_24 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_14 + VAR_23);
 if (VAR_24)
  goto fix_extent_len;

 VAR_21 = &VAR_18;
 VAR_21->ee_block = FUNC_2(VAR_11);
 VAR_21->ee_len = FUNC_1(VAR_22 - (VAR_11 - VAR_16));
 FUNC_11(VAR_21, VAR_15);
 if (VAR_12 & VAR_4)
  FUNC_8(VAR_21);

 VAR_24 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, &VAR_18, VAR_13);
 if (VAR_24 == -VAR_0 && (VAR_5 & VAR_12)) {
  if (VAR_12 & (VAR_1|VAR_2)) {
   if (VAR_12 & VAR_1) {
    VAR_24 = FUNC_13(VAR_9, VAR_21);
    VAR_20.ee_block = VAR_21->ee_block;
    VAR_20.ee_len = FUNC_1(
      FUNC_5(VAR_21));
    FUNC_11(&VAR_20,
      FUNC_9(VAR_21));
   } else {
    VAR_24 = FUNC_13(VAR_9, VAR_17);
    VAR_20.ee_block = VAR_17->ee_block;
    VAR_20.ee_len = FUNC_1(
      FUNC_5(VAR_17));
    FUNC_11(&VAR_20,
      FUNC_9(VAR_17));
   }
  } else {
   VAR_24 = FUNC_13(VAR_9, &VAR_19);
   VAR_20.ee_block = VAR_19.ee_block;
   VAR_20.ee_len = FUNC_1(
     FUNC_5(&VAR_19));
   FUNC_11(&VAR_20,
     FUNC_9(&VAR_19));
  }

  if (VAR_24)
   goto fix_extent_len;

  VAR_17->ee_len = FUNC_1(VAR_22);
  FUNC_12(VAR_7, VAR_8, VAR_9, VAR_14, VAR_17);
  VAR_24 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_14 + VAR_14->p_depth);
  if (VAR_24)
   goto fix_extent_len;

  goto out;
 } else if (VAR_24)
  goto fix_extent_len;

out:
 FUNC_10(VAR_9, VAR_14);
 return VAR_24;

fix_extent_len:
 VAR_17->ee_len = VAR_19.ee_len;
 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_14 + VAR_14->p_depth);
 return VAR_24;
}
