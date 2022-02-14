
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef unsigned int ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ dgrp_t ;
typedef unsigned int blk64_t ;
struct TYPE_21__ {unsigned int blocksize; char* block_map; char* inode_map; int flags; scalar_t__ group_desc_count; int io; int image_io; TYPE_14__* super; TYPE_1__* image_header; int device_name; int write_bitmaps; } ;
struct TYPE_20__ {int offset_blockmap; int offset_inodemap; } ;
struct TYPE_19__ {unsigned int s_inodes_count; int s_first_data_block; } ;


 unsigned int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_14__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_3 (TYPE_14__*,scalar_t__) ;
 int FUNC_4 (TYPE_14__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,char**) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,char**) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,char*,int) ;
 unsigned int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char**) ;
 scalar_t__ FUNC_13 (scalar_t__,char**) ;
 scalar_t__ FUNC_14 (TYPE_2__*,scalar_t__) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,scalar_t__,char*,int) ;
 unsigned int FUNC_17 (TYPE_2__*,scalar_t__) ;
 unsigned int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (char*,unsigned int,unsigned int,char*) ;
 scalar_t__ FUNC_20 (char*,unsigned int,unsigned int,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_21 (int ,int ,char**) ;
 scalar_t__ FUNC_22 (int ,unsigned int,int,char*) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (char*,int ,int) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,char*) ;
 scalar_t__ FUNC_27 (int ) ;

__attribute__((used)) static errcode_t FUNC_28(ext2_filsys VAR_11, int VAR_12, int VAR_13)
{
 dgrp_t VAR_14;
 char *VAR_15 = 0, *VAR_16 = 0;
 char *VAR_17;
 errcode_t VAR_18;
 int VAR_19 = FUNC_2(VAR_11->super) / 8;
 int VAR_20 = FUNC_4(VAR_11->super) / 8;
 int VAR_21;
 unsigned int VAR_22;
 blk64_t VAR_23;
 blk64_t VAR_24 = FUNC_0(VAR_11, VAR_11->super->s_first_data_block);
 blk64_t VAR_25;
 ext2_ino_t VAR_26 = 1;
 ext2_ino_t VAR_27;

 FUNC_1(VAR_11, VAR_7);

 if ((VAR_19 > (int) VAR_11->blocksize) ||
     (VAR_20 > (int) VAR_11->blocksize))
  return VAR_4;

 VAR_11->write_bitmaps = VAR_10;

 VAR_21 = FUNC_15(VAR_11);

 VAR_18 = FUNC_13(FUNC_27(VAR_11->device_name) + 80, &VAR_17);
 if (VAR_18)
  return VAR_18;
 if (VAR_13) {
  if (VAR_11->block_map)
   FUNC_10(VAR_11->block_map);
  FUNC_26(VAR_17, "block bitmap for ");
  FUNC_25(VAR_17, VAR_11->device_name);
  VAR_18 = FUNC_5(VAR_11, VAR_17, &VAR_11->block_map);
  if (VAR_18)
   goto cleanup;
  VAR_18 = FUNC_21(VAR_11->io, 0, &VAR_15);
  if (VAR_18)
   goto cleanup;
 } else
  VAR_19 = 0;
 if (VAR_12) {
  if (VAR_11->inode_map)
   FUNC_11(VAR_11->inode_map);
  FUNC_26(VAR_17, "inode bitmap for ");
  FUNC_25(VAR_17, VAR_11->device_name);
  VAR_18 = FUNC_6(VAR_11, VAR_17, &VAR_11->inode_map);
  if (VAR_18)
   goto cleanup;
  VAR_18 = FUNC_21(VAR_11->io, 0, &VAR_16);
  if (VAR_18)
   goto cleanup;
 } else
  VAR_20 = 0;
 FUNC_12(&VAR_17);

 if (VAR_11->flags & VAR_9) {
  VAR_23 = (FUNC_18(VAR_11->image_header->offset_inodemap) / VAR_11->blocksize);
  VAR_27 = VAR_11->super->s_inodes_count;
  while (VAR_16 && VAR_27 > 0) {
   VAR_18 = FUNC_22(VAR_11->image_io, VAR_23++,
           1, VAR_16);
   if (VAR_18)
    goto cleanup;
   VAR_22 = VAR_11->blocksize << 3;
   if (VAR_22 > VAR_27)
    VAR_22 = VAR_27;
   VAR_18 = FUNC_20(VAR_11->inode_map,
            VAR_26, VAR_22, VAR_16);
   if (VAR_18)
    goto cleanup;
   VAR_26 += VAR_22;
   VAR_27 -= VAR_22;
  }
  VAR_23 = (FUNC_18(VAR_11->image_header->offset_blockmap) /
         VAR_11->blocksize);
  VAR_25 = FUNC_3(VAR_11->super,
        VAR_11->group_desc_count);
  while (VAR_15 && VAR_25 > 0) {
   VAR_18 = FUNC_22(VAR_11->image_io, VAR_23++,
           1, VAR_15);
   if (VAR_18)
    goto cleanup;
   VAR_22 = VAR_11->blocksize << 3;
   if (VAR_22 > VAR_25)
    VAR_22 = VAR_25;
   VAR_18 = FUNC_19(VAR_11->block_map,
           VAR_24, VAR_22, VAR_15);
   if (VAR_18)
    goto cleanup;
   VAR_24 += VAR_22;
   VAR_25 -= VAR_22;
  }
  goto success_cleanup;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->group_desc_count; VAR_14++) {
  if (VAR_15) {
   VAR_23 = FUNC_9(VAR_11, VAR_14);
   if (VAR_21 &&
       FUNC_7(VAR_11, VAR_14, VAR_0) &&
       FUNC_14(VAR_11, VAR_14))
    VAR_23 = 0;
   if (VAR_23) {
    VAR_18 = FUNC_22(VAR_11->io, VAR_23,
              1, VAR_15);
    if (VAR_18) {
     VAR_18 = VAR_3;
     goto cleanup;
    }

    if (!(VAR_11->flags &
          VAR_8) &&
        !FUNC_8(VAR_11, VAR_14,
      VAR_15, VAR_19)) {
     VAR_18 =
     VAR_2;
     goto cleanup;
    }
   } else
    FUNC_24(VAR_15, 0, VAR_19);
   VAR_22 = VAR_19 << 3;
   VAR_18 = FUNC_19(VAR_11->block_map,
            VAR_24, VAR_22, VAR_15);
   if (VAR_18)
    goto cleanup;
   VAR_24 += VAR_19 << 3;
  }
  if (VAR_16) {
   VAR_23 = FUNC_17(VAR_11, VAR_14);
   if (VAR_21 &&
       FUNC_7(VAR_11, VAR_14, VAR_1) &&
       FUNC_14(VAR_11, VAR_14))
    VAR_23 = 0;
   if (VAR_23) {
    VAR_18 = FUNC_22(VAR_11->io, VAR_23,
              1, VAR_16);
    if (VAR_18) {
     VAR_18 = VAR_6;
     goto cleanup;
    }


    if (!(VAR_11->flags &
          VAR_8) &&
        !FUNC_16(VAR_11, VAR_14,
      VAR_16, VAR_20)) {
     VAR_18 =
     VAR_5;
     goto cleanup;
    }
   } else
    FUNC_24(VAR_16, 0, VAR_20);
   VAR_22 = VAR_20 << 3;
   VAR_18 = FUNC_20(VAR_11->inode_map,
            VAR_26, VAR_22, VAR_16);
   if (VAR_18)
    goto cleanup;
   VAR_26 += VAR_20 << 3;
  }
 }


 if (VAR_13) {
  VAR_18 = FUNC_23(VAR_11);
  if (VAR_18)
   goto cleanup;
 }

success_cleanup:
 if (VAR_16)
  FUNC_12(&VAR_16);
 if (VAR_15)
  FUNC_12(&VAR_15);
 return 0;

cleanup:
 if (VAR_13) {
  FUNC_12(&VAR_11->block_map);
  VAR_11->block_map = 0;
 }
 if (VAR_12) {
  FUNC_12(&VAR_11->inode_map);
  VAR_11->inode_map = 0;
 }
 if (VAR_16)
  FUNC_12(&VAR_16);
 if (VAR_15)
  FUNC_12(&VAR_15);
 if (VAR_17)
  FUNC_12(&VAR_17);
 return VAR_18;
}
