
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct ext2_inode {int i_mode; int i_links_count; int i_size; int * i_block; int i_flags; scalar_t__ i_gid; scalar_t__ i_uid; } ;
typedef int parent_inode ;
typedef scalar_t__ ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_20__ {int umask; int super; int blocksize; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,struct ext2_inode*,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,struct ext2_inode*,int ) ;
 int FUNC_7 (char**) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,struct ext2_inode*,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (TYPE_1__*,scalar_t__,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*,scalar_t__,char const*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__,char**) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_18 (TYPE_1__*,scalar_t__,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*,scalar_t__,struct ext2_inode*) ;
 scalar_t__ FUNC_20 (TYPE_1__*,int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_21 (TYPE_1__*,scalar_t__,struct ext2_inode*) ;
 scalar_t__ FUNC_22 (TYPE_1__*,scalar_t__,struct ext2_inode*) ;
 int FUNC_23 (struct ext2_inode*,int ,int) ;
 int FUNC_24 (char const*) ;

errcode_t FUNC_25(ext2_filsys VAR_8, ext2_ino_t VAR_9, ext2_ino_t VAR_10,
         const char *VAR_11)
{
 ext2_extent_handle_t VAR_12;
 errcode_t VAR_13;
 struct ext2_inode VAR_14, VAR_15;
 ext2_ino_t VAR_16 = VAR_10;
 ext2_ino_t VAR_17;
 blk64_t VAR_18;
 char *VAR_19 = 0;
 int VAR_20 = 0;

 FUNC_0(VAR_8, VAR_2);





 if ((!VAR_16 || VAR_16 >= FUNC_1(VAR_8->super)) &&
     FUNC_9(VAR_8->super))
  VAR_20 = 1;




 if (!VAR_16) {
  VAR_13 = FUNC_18(VAR_8, VAR_9, VAR_7 | 0755,
       0, &VAR_16);
  if (VAR_13)
   goto cleanup;
 }




 FUNC_23(&VAR_15, 0, sizeof(struct ext2_inode));
 if (!VAR_20) {
  VAR_13 = FUNC_15(VAR_8, FUNC_6(VAR_8, VAR_16,
              &VAR_15,
              0),
        ((void*)0), &VAR_18);
  if (VAR_13)
   goto cleanup;
 }




 if (VAR_20)
  VAR_13 = FUNC_17(VAR_8, VAR_16, VAR_9,
          VAR_15.i_block);
 else
  VAR_13 = FUNC_16(VAR_8, VAR_16, VAR_9, &VAR_19);
 if (VAR_13)
  goto cleanup;




 if (VAR_9 != VAR_16) {
  VAR_13 = FUNC_19(VAR_8, VAR_9, &VAR_14);
  if (VAR_13)
   goto cleanup;
 } else
  FUNC_23(&VAR_14, 0, sizeof(VAR_14));




 VAR_15.i_mode = VAR_7 | (0777 & ~VAR_8->umask);
 VAR_15.i_uid = VAR_15.i_gid = 0;
 if (VAR_20) {
  VAR_15.i_flags |= VAR_5;
  VAR_15.i_size = VAR_6;
 } else {
  if (FUNC_8(VAR_8->super))
   VAR_15.i_flags |= VAR_4;
  else
   VAR_15.i_block[0] = VAR_18;
  VAR_15.i_size = VAR_8->blocksize;
  FUNC_10(VAR_8, &VAR_15, 1);
 }
 VAR_15.i_links_count = 2;






 VAR_13 = FUNC_22(VAR_8, VAR_16, &VAR_15);
 if (VAR_13)
  goto cleanup;
 if (VAR_20) {

  VAR_13 = FUNC_11(VAR_8, VAR_16);
 } else {
  VAR_13 = FUNC_20(VAR_8, VAR_18, VAR_19, 0, VAR_16);
  if (VAR_13)
   goto cleanup;

  if (FUNC_8(VAR_8->super)) {
   VAR_13 = FUNC_4(VAR_8, VAR_16, &VAR_15, &VAR_12);
   if (VAR_13)
    goto cleanup;
   VAR_13 = FUNC_5(VAR_12, 0, VAR_18, 0);
   FUNC_3(VAR_12);
   if (VAR_13)
    goto cleanup;
  }
 }




 if (VAR_11) {
  VAR_13 = FUNC_14(VAR_8, VAR_9, VAR_11, FUNC_24(VAR_11), 0,
           &VAR_17);
  if (!VAR_13) {
   VAR_13 = VAR_0;
   VAR_11 = 0;
   goto cleanup;
  }
  if (VAR_13 != VAR_1)
   goto cleanup;
  VAR_13 = FUNC_13(VAR_8, VAR_9, VAR_11, VAR_16, VAR_3);
  if (VAR_13)
   goto cleanup;
 }




 if (VAR_9 != VAR_16) {

  VAR_13 = FUNC_19(VAR_8, VAR_9, &VAR_14);
  if (VAR_13)
   goto cleanup;
  VAR_14.i_links_count++;
  VAR_13 = FUNC_21(VAR_8, VAR_9, &VAR_14);
  if (VAR_13)
   goto cleanup;
 }




 if (!VAR_20)
  FUNC_2(VAR_8, VAR_18, +1);
 FUNC_12(VAR_8, VAR_16, +1, 1);

cleanup:
 if (VAR_19)
  FUNC_7(&VAR_19);
 return VAR_13;

}
