
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct opaque_ext2_group_desc {unsigned long s_state; int s_first_meta_bg; int s_feature_incompat; scalar_t__ s_block_group_nr; scalar_t__ s_wtime; } ;
struct ext2fs_numeric_progress_struct {int dummy; } ;
struct ext2_super_block {unsigned long s_state; int s_first_meta_bg; int s_feature_incompat; scalar_t__ s_block_group_nr; scalar_t__ s_wtime; } ;
struct ext2_group_desc {int dummy; } ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ dgrp_t ;
typedef int blk64_t ;
typedef int __u32 ;
struct TYPE_16__ {size_t desc_blocks; int blocksize; scalar_t__ group_desc_count; int flags; struct opaque_ext2_group_desc* super; int io; TYPE_1__* progress_ops; struct opaque_ext2_group_desc* group_desc; scalar_t__ (* write_bitmaps ) (TYPE_2__*) ;scalar_t__ now; } ;
struct TYPE_15__ {int (* close ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *) ;int (* update ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,scalar_t__) ;int (* init ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *,scalar_t__) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct opaque_ext2_group_desc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct opaque_ext2_group_desc*) ;
 int FUNC_3 (struct opaque_ext2_group_desc**) ;
 scalar_t__ FUNC_4 (size_t,int,struct opaque_ext2_group_desc**) ;
 scalar_t__ FUNC_5 (int ,struct opaque_ext2_group_desc**) ;
 struct ext2_group_desc* FUNC_6 (TYPE_2__*,struct opaque_ext2_group_desc*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct opaque_ext2_group_desc*) ;
 scalar_t__ FUNC_8 (struct opaque_ext2_group_desc*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int*,int*,int*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,struct opaque_ext2_group_desc*) ;
 int FUNC_11 (TYPE_2__*,struct ext2_group_desc*) ;
 int FUNC_12 (struct opaque_ext2_group_desc*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int,int,char*) ;
 int FUNC_15 (struct opaque_ext2_group_desc*,struct opaque_ext2_group_desc*,size_t) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *,scalar_t__) ;
 int FUNC_18 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,scalar_t__) ;
 int FUNC_19 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (TYPE_2__*,scalar_t__,int,struct opaque_ext2_group_desc*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,struct opaque_ext2_group_desc*) ;

errcode_t FUNC_23(ext2_filsys VAR_8, int VAR_9)
{
 dgrp_t VAR_10;
 errcode_t VAR_11;
 unsigned long VAR_12;
 __u32 VAR_13;
 struct ext2_super_block *VAR_14 = 0;
 struct opaque_ext2_group_desc *VAR_15 = 0;




 char *VAR_16;
 blk64_t VAR_17;
 struct ext2fs_numeric_progress_struct VAR_18;

 FUNC_0(VAR_8, VAR_0);

 VAR_12 = VAR_8->super->s_state;
 VAR_13 = VAR_8->super->s_feature_incompat;

 VAR_8->super->s_wtime = VAR_8->now ? VAR_8->now : FUNC_20(((void*)0));
 VAR_8->super->s_block_group_nr = 0;
 if (VAR_8->write_bitmaps) {
  VAR_11 = VAR_8->write_bitmaps(VAR_8);
  if (VAR_11)
   goto errout;
 }






 VAR_8->super->s_state &= ~VAR_6;
 FUNC_2(VAR_8->super);
 VAR_14 = VAR_8->super;
 VAR_15 = VAR_8->group_desc;






 if (FUNC_7(VAR_8->super))
  goto write_primary_superblock_only;





 VAR_16 = (char *) VAR_15;
 if (FUNC_8(VAR_8->super)) {
  VAR_17 = VAR_8->super->s_first_meta_bg;
  if (VAR_17 > VAR_8->desc_blocks)
   VAR_17 = VAR_8->desc_blocks;
 } else
  VAR_17 = VAR_8->desc_blocks;

 if (VAR_8->progress_ops && VAR_8->progress_ops->init)
  (VAR_8->progress_ops->init)(VAR_8, &VAR_18, ((void*)0),
      VAR_8->group_desc_count);


 for (VAR_10 = 0; VAR_10 < VAR_8->group_desc_count; VAR_10++) {
  blk64_t VAR_19, VAR_20, VAR_21;

  if (VAR_8->progress_ops && VAR_8->progress_ops->update)
   (VAR_8->progress_ops->update)(VAR_8, &VAR_18, VAR_10);
  FUNC_9(VAR_8, VAR_10, &VAR_19, &VAR_20,
      &VAR_21, 0);

  if (!(VAR_8->flags & VAR_4) &&VAR_10 && VAR_19) {
   VAR_11 = FUNC_21(VAR_8, VAR_10, VAR_19,
          VAR_14);
   if (VAR_11)
    goto errout;
  }
  if (VAR_8->flags & VAR_5)
   continue;
  if ((VAR_20) &&
      (!(VAR_8->flags & VAR_4) || (VAR_10 == 0))) {
   VAR_11 = FUNC_14(VAR_8->io,
         VAR_20, VAR_17, VAR_16);
   if (VAR_11)
    goto errout;
  }
  if (VAR_21) {
   int VAR_22 = VAR_10 / FUNC_1(VAR_8->super);

   VAR_11 = FUNC_14(VAR_8->io, VAR_21,
    1, VAR_16 + (VAR_22*VAR_8->blocksize));
   if (VAR_11)
    goto errout;
  }
 }

 if (VAR_8->progress_ops && VAR_8->progress_ops->close)
  (VAR_8->progress_ops->close)(VAR_8, &VAR_18, ((void*)0));

write_primary_superblock_only:
 VAR_8->super->s_block_group_nr = 0;
 VAR_8->super->s_state = VAR_12;
 VAR_8->super->s_feature_incompat = VAR_13;





 VAR_11 = FUNC_10(VAR_8, VAR_14);
 if (VAR_11)
  return VAR_11;

 if (!(VAR_9 & VAR_3)) {
  VAR_11 = FUNC_13(VAR_8->io);
  if (VAR_11)
   goto errout;
 }
 VAR_11 = FUNC_22(VAR_8, VAR_14);
 if (VAR_11)
  goto errout;

 VAR_8->flags &= ~VAR_2;

 if (!(VAR_9 & VAR_3)) {
  VAR_11 = FUNC_13(VAR_8->io);
  if (VAR_11)
   goto errout;
 }
errout:
 VAR_8->super->s_state = VAR_12;






 return VAR_11;
}
