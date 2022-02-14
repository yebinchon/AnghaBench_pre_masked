
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ dgrp_t ;
typedef int blk64_t ;
typedef int __u64 ;
struct TYPE_18__ {scalar_t__ s_first_data_block; } ;
struct TYPE_17__ {int flags; int blocksize; scalar_t__ group_desc_count; int io; int inode_map; TYPE_7__* super; int block_map; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 unsigned int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,char*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (char**) ;
 scalar_t__ FUNC_11 (int ,int,int,char*) ;
 scalar_t__ FUNC_12 (int ,int,int,char*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,scalar_t__,char*,int) ;
 int FUNC_16 (TYPE_1__*,scalar_t__) ;
 int FUNC_17 (unsigned int,char*) ;
 scalar_t__ FUNC_18 (int ,int ,char**) ;
 scalar_t__ FUNC_19 (int ,int,int,char*) ;
 int FUNC_20 (char*,int,int) ;

__attribute__((used)) static errcode_t FUNC_21(ext2_filsys VAR_10, int VAR_11, int VAR_12)
{
 dgrp_t VAR_13;
 unsigned int VAR_14;
 int VAR_15, VAR_16;
 unsigned int VAR_17;
 errcode_t VAR_18;
 char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 int VAR_21;
 blk64_t VAR_22;
 blk64_t VAR_23 = FUNC_0(VAR_10, VAR_10->super->s_first_data_block);
 ext2_ino_t VAR_24 = 1;

 FUNC_3(VAR_10, VAR_4);

 if (!(VAR_10->flags & VAR_9))
  return VAR_5;

 VAR_21 = FUNC_14(VAR_10);

 VAR_16 = VAR_15 = 0;
 if (VAR_12) {
  VAR_15 = FUNC_4(VAR_10->super) / 8;
  VAR_18 = FUNC_18(VAR_10->io, 0, &VAR_19);
  if (VAR_18)
   goto errout;
  FUNC_20(VAR_19, 0xff, VAR_10->blocksize);
 }
 if (VAR_11) {
  VAR_16 = (size_t)
   ((FUNC_5(VAR_10->super)+7) / 8);
  VAR_18 = FUNC_18(VAR_10->io, 0, &VAR_20);
  if (VAR_18)
   goto errout;
  FUNC_20(VAR_20, 0xff, VAR_10->blocksize);
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->group_desc_count; VAR_13++) {
  if (!VAR_12)
   goto skip_block_bitmap;

  if (VAR_21 && FUNC_6(VAR_10, VAR_13, VAR_0)
      )
   goto skip_this_block_bitmap;

  VAR_18 = FUNC_11(VAR_10->block_map,
    VAR_23, VAR_15 << 3, VAR_19);
  if (VAR_18)
   goto errout;

  if (VAR_13 == VAR_10->group_desc_count - 1) {

   VAR_17 = FUNC_1(VAR_10,
    ((FUNC_9(VAR_10->super)
      - (__u64) VAR_10->super->s_first_data_block)
     % (__u64) FUNC_2(VAR_10->super)));
   if (VAR_17)
    for (VAR_14 = VAR_17; VAR_14 < VAR_10->blocksize * 8; VAR_14++)
     FUNC_17(VAR_14, VAR_19);
  }

  VAR_18 = FUNC_7(VAR_10, VAR_13, VAR_19,
            VAR_15);
  if (VAR_18)
   return VAR_18;
  FUNC_13(VAR_10, VAR_13);
  VAR_10->flags |= VAR_7;

  VAR_22 = FUNC_8(VAR_10, VAR_13);
  if (VAR_22) {
   VAR_18 = FUNC_19(VAR_10->io, VAR_22, 1,
       VAR_19);
   if (VAR_18) {
    VAR_18 = VAR_2;
    goto errout;
   }
  }
 skip_this_block_bitmap:
  VAR_23 += VAR_15 << 3;
 skip_block_bitmap:

  if (!VAR_11)
   continue;

  if (VAR_21 && FUNC_6(VAR_10, VAR_13, VAR_1)
      )
   goto skip_this_inode_bitmap;

  VAR_18 = FUNC_12(VAR_10->inode_map,
    VAR_24, VAR_16 << 3, VAR_20);
  if (VAR_18)
   goto errout;

  VAR_18 = FUNC_15(VAR_10, VAR_13, VAR_20,
            VAR_16);
  if (VAR_18)
   goto errout;
  FUNC_13(VAR_10, VAR_13);
  VAR_10->flags |= VAR_7;

  VAR_22 = FUNC_16(VAR_10, VAR_13);
  if (VAR_22) {
   VAR_18 = FUNC_19(VAR_10->io, VAR_22, 1,
            VAR_20);
   if (VAR_18) {
    VAR_18 = VAR_3;
    goto errout;
   }
  }
 skip_this_inode_bitmap:
  VAR_24 += VAR_16 << 3;

 }
 if (VAR_12) {
  VAR_10->flags &= ~VAR_6;
  FUNC_10(&VAR_19);
 }
 if (VAR_11) {
  VAR_10->flags &= ~VAR_8;
  FUNC_10(&VAR_20);
 }
 return 0;
errout:
 if (VAR_20)
  FUNC_10(&VAR_20);
 if (VAR_19)
  FUNC_10(&VAR_19);
 return VAR_18;
}
