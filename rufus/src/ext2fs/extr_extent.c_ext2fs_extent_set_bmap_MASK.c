
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct extent_path {scalar_t__ entries; } ;
struct ext2fs_extent {int e_len; scalar_t__ e_pblk; scalar_t__ e_lblk; int e_flags; } ;
struct ext2_extent_info {int max_depth; int curr_level; } ;
typedef int extent ;
typedef TYPE_2__* ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
typedef int __u32 ;
struct TYPE_14__ {int ino; int level; int max_depth; struct extent_path* path; TYPE_1__* fs; } ;
struct TYPE_13__ {int flags; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,struct ext2fs_extent*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct ext2_extent_info*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,struct ext2fs_extent*) ;
 int FUNC_10 (struct ext2fs_extent*,int ,int) ;
 int FUNC_11 (char*,...) ;

errcode_t FUNC_12(ext2_extent_handle_t VAR_16,
     blk64_t VAR_17, blk64_t VAR_18, int VAR_19)
{
 errcode_t VAR_20, VAR_21 = 0;
 int VAR_22 = 1;
 int VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = VAR_14;
 int VAR_29, VAR_30;
 blk64_t VAR_31;
 struct extent_path *VAR_32;
 struct ext2fs_extent VAR_33, VAR_34, VAR_35;
 struct ext2fs_extent VAR_36;
 struct ext2_extent_info VAR_37;

 FUNC_0(VAR_16, VAR_3);






 if (!(VAR_16->fs->flags & VAR_13))
  return VAR_5;

 if (!VAR_16->path)
  return VAR_4;

 VAR_32 = VAR_16->path + VAR_16->level;

 if (VAR_19 & VAR_12) {
  VAR_27 = 1;
  VAR_28 = VAR_15;
 }


 if (VAR_18) {
  VAR_36.e_len = 1;
  VAR_36.e_pblk = VAR_18;
  VAR_36.e_lblk = VAR_17;
  VAR_36.e_flags = VAR_7;
  if (VAR_27)
   VAR_36.e_flags |= VAR_8;
 }


 if ((VAR_16->max_depth == 0) && (VAR_32->entries == 0)) {
  VAR_21 = FUNC_8(VAR_16, 0, &VAR_36);
  return VAR_21;
 }


 if ((VAR_21 = FUNC_4(VAR_16, VAR_6,
     &VAR_33))) {
  if (VAR_21 != VAR_4)
   return VAR_21;
  FUNC_10(&VAR_33, 0, sizeof(VAR_33));
 }
 if ((VAR_21 = FUNC_5(VAR_16, &VAR_37)))
  return VAR_21;
 VAR_23 = VAR_37.max_depth - VAR_37.curr_level;
 VAR_31 = VAR_33.e_lblk;


 VAR_21 = FUNC_6(VAR_16, VAR_17);
 if (VAR_21) {
  if (VAR_21 == VAR_0) {
   VAR_21 = 0;
   VAR_22 = 0;
   if (!VAR_18) {




    goto done;
   }
  } else
   goto done;
 }







 VAR_21 = FUNC_4(VAR_16, VAR_6, &VAR_33);
 if (VAR_21)
  goto done;
 if (VAR_33.e_flags & VAR_8)
  VAR_24 = 1;
 VAR_21 = FUNC_4(VAR_16, VAR_10, &VAR_34);
 if (VAR_21) {
  VAR_30 = 0;
  if (VAR_21 != VAR_1)
   goto done;
 } else {
  FUNC_1("set_bmap: next_extent",
     &VAR_34);
  VAR_30 = 1;
  if (VAR_34.e_flags & VAR_8)
   VAR_26 = 1;
 }
 VAR_21 = FUNC_6(VAR_16, VAR_17);
 if (VAR_21 && VAR_21 != VAR_0)
  goto done;
 VAR_21 = FUNC_4(VAR_16, VAR_11, &VAR_35);
 if (VAR_21) {
  VAR_29 = 0;
  if (VAR_21 != VAR_2)
   goto done;
 } else {
  VAR_29 = 1;
  FUNC_1("set_bmap: prev_extent",
     &VAR_35);
  if (VAR_35.e_flags & VAR_8)
   VAR_25 = 1;
 }
 VAR_21 = FUNC_6(VAR_16, VAR_17);
 if (VAR_21 && VAR_21 != VAR_0)
  goto done;


 if (VAR_22 && (VAR_27 == VAR_24) &&
     (VAR_33.e_pblk + (VAR_17 - VAR_33.e_lblk) == VAR_18)) {



  goto done;
 }

 if (!VAR_22) {



  if ((VAR_17 == VAR_33.e_lblk + VAR_33.e_len) &&
      (VAR_18 == VAR_33.e_pblk + VAR_33.e_len) &&
      (VAR_27 == VAR_24) &&
      ((int) VAR_33.e_len < VAR_28-1)) {
   VAR_33.e_len++;
   VAR_21 = FUNC_9(VAR_16, 0, &VAR_33);
  } else if ((VAR_17 == VAR_33.e_lblk - 1) &&
      (VAR_18 == VAR_33.e_pblk - 1) &&
      (VAR_27 == VAR_24) &&
      ((int) VAR_33.e_len < VAR_28 - 1)) {
   VAR_33.e_len++;
   VAR_33.e_lblk--;
   VAR_33.e_pblk--;
   VAR_21 = FUNC_9(VAR_16, 0, &VAR_33);
  } else if (VAR_30 &&
      (VAR_17 == VAR_34.e_lblk - 1) &&
      (VAR_18 == VAR_34.e_pblk - 1) &&
      (VAR_27 == VAR_26) &&
      ((int) VAR_34.e_len < VAR_28 - 1)) {
   VAR_21 = FUNC_4(VAR_16,
         VAR_10,
         &VAR_34);
   if (VAR_21)
    goto done;
   VAR_34.e_len++;
   VAR_34.e_lblk--;
   VAR_34.e_pblk--;
   VAR_21 = FUNC_9(VAR_16, 0, &VAR_34);
  } else if (VAR_17 < VAR_33.e_lblk)
   VAR_21 = FUNC_8(VAR_16, 0, &VAR_36);
  else
   VAR_21 = FUNC_8(VAR_16,
          VAR_9, &VAR_36);
  if (VAR_21)
   goto done;
  VAR_21 = FUNC_3(VAR_16);
  if (VAR_21)
   goto done;
 } else if ((VAR_17 == VAR_33.e_lblk) && (VAR_33.e_len == 1)) {



  if (VAR_18) {
   VAR_21 = FUNC_9(VAR_16, 0, &VAR_36);
  } else {
   VAR_21 = FUNC_2(VAR_16, 0);
   if (VAR_21)
    goto done;
   VAR_20 = FUNC_3(VAR_16);
   if (VAR_20 != VAR_4)
    VAR_21 = VAR_20;
  }

  if (VAR_21)
   goto done;
 } else if (VAR_17 == VAR_33.e_lblk + VAR_33.e_len - 1) {



  if (VAR_18) {
   if (VAR_30 &&
       (VAR_17 == (VAR_34.e_lblk - 1)) &&
       (VAR_18 == (VAR_34.e_pblk - 1)) &&
       (VAR_27 == VAR_26) &&
       ((int) VAR_34.e_len < VAR_28 - 1)) {
    VAR_21 = FUNC_4(VAR_16,
     VAR_10, &VAR_34);
    if (VAR_21)
     goto done;
    VAR_34.e_len++;
    VAR_34.e_lblk--;
    VAR_34.e_pblk--;
    VAR_21 = FUNC_9(VAR_16, 0,
              &VAR_34);
    if (VAR_21)
     goto done;
   } else
    VAR_21 = FUNC_8(VAR_16,
          VAR_9, &VAR_36);
   if (VAR_21)
    goto done;
   VAR_21 = FUNC_3(VAR_16);
   if (VAR_21)
    goto done;






   VAR_21 = FUNC_6(VAR_16, VAR_17);
   if (VAR_21)
    goto done;
   VAR_21 = FUNC_4(VAR_16,
         VAR_6,
         &VAR_33);
   if (VAR_21)
    goto done;
  }
  VAR_33.e_len--;
  VAR_21 = FUNC_9(VAR_16, 0, &VAR_33);
  if (VAR_21)
   goto done;
 } else if (VAR_17 == VAR_33.e_lblk) {



  if (VAR_18) {
   if (VAR_29 &&
       (VAR_17 == (VAR_35.e_lblk +
      VAR_35.e_len)) &&
       (VAR_18 == (VAR_35.e_pblk +
       VAR_35.e_len)) &&
       (VAR_27 == VAR_25) &&
       ((int) VAR_35.e_len < VAR_28-1)) {
    VAR_21 = FUNC_4(VAR_16,
     VAR_11, &VAR_35);
    if (VAR_21)
     goto done;
    VAR_35.e_len++;
    VAR_21 = FUNC_9(VAR_16, 0,
              &VAR_35);
   } else
    VAR_21 = FUNC_8(VAR_16,
             0, &VAR_36);
   if (VAR_21)
    goto done;
   VAR_21 = FUNC_3(VAR_16);
   if (VAR_21)
    goto done;
   VAR_21 = FUNC_4(VAR_16,
         VAR_10,
         &VAR_33);
   if (VAR_21)
    goto done;
  }
  VAR_33.e_pblk++;
  VAR_33.e_lblk++;
  VAR_33.e_len--;
  VAR_21 = FUNC_9(VAR_16, 0, &VAR_33);
  if (VAR_21)
   goto done;
  VAR_21 = FUNC_3(VAR_16);
  if (VAR_21)
   goto done;
 } else {
  __u32 VAR_38;
  blk64_t VAR_39;
  struct ext2fs_extent VAR_40;
  errcode_t VAR_41;





  VAR_39 = VAR_33.e_lblk;
  VAR_38 = VAR_33.e_len;
  VAR_40 = VAR_33;


  VAR_33.e_len = (VAR_17 - VAR_33.e_lblk);
  VAR_21 = FUNC_9(VAR_16, 0, &VAR_33);
  if (VAR_21)
   goto done;

  if (VAR_18) {

   VAR_21 = FUNC_8(VAR_16,
     VAR_9, &VAR_36);
   if (VAR_21) {
    VAR_41 = FUNC_6(VAR_16, VAR_39);
    if (VAR_41 == 0)
     (void)FUNC_9(VAR_16, 0,
             &VAR_40);
    goto done;
   }
  }

  VAR_33.e_pblk += VAR_33.e_len + 1;
  VAR_33.e_lblk += VAR_33.e_len + 1;
  VAR_33.e_len = VAR_38 - VAR_33.e_len - 1;
  VAR_21 = FUNC_8(VAR_16,
    VAR_9, &VAR_33);
  if (VAR_21) {
   if (VAR_18) {
    VAR_41 = FUNC_6(VAR_16,
       VAR_36.e_lblk);
    if (VAR_41 == 0)
     (void)FUNC_2(VAR_16, 0);
   }
   VAR_41 = FUNC_6(VAR_16, VAR_39);
   if (VAR_41 == 0)
    (void)FUNC_9(VAR_16, 0,
           &VAR_40);
   goto done;
  }
 }

done:

 if (VAR_23 > VAR_16->max_depth)
  VAR_23 = VAR_16->max_depth;
 FUNC_7(VAR_16, VAR_23, VAR_31);
 return VAR_21;
}
