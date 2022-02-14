
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct set_badblock_record {int max_ind_blocks; int bad_block_count; struct set_badblock_record* block_buf; struct set_badblock_record* ind_blocks; scalar_t__ err; int bb_iter; } ;
struct ext2_inode {void* i_ctime; void* i_mtime; void* i_atime; } ;
typedef int rec ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ ext2_badblocks_list ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
struct TYPE_9__ {int blocksize; void* now; int block_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ,int ,struct set_badblock_record*) ;
 int FUNC_4 (struct set_badblock_record**) ;
 scalar_t__ FUNC_5 (int,int,struct set_badblock_record**) ;
 scalar_t__ FUNC_6 (int,struct set_badblock_record**) ;
 int FUNC_7 (TYPE_1__*,struct ext2_inode*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,struct ext2_inode*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,struct ext2_inode*) ;
 int FUNC_11 (struct set_badblock_record*,int ,int) ;
 int VAR_6 ;
 void* FUNC_12 (int ) ;

errcode_t FUNC_13(ext2_filsys VAR_7, ext2_badblocks_list VAR_8)
{
 errcode_t VAR_9;
 struct set_badblock_record VAR_10;
 struct ext2_inode VAR_11;

 FUNC_0(VAR_7, VAR_3);

 if (!VAR_7->block_map)
  return VAR_4;

 FUNC_11(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.max_ind_blocks = 10;
 VAR_9 = FUNC_5(VAR_10.max_ind_blocks, sizeof(blk_t),
    &VAR_10.ind_blocks);
 if (VAR_9)
  return VAR_9;
 FUNC_11(VAR_10.ind_blocks, 0, VAR_10.max_ind_blocks * sizeof(blk_t));
 VAR_9 = FUNC_6(VAR_7->blocksize, &VAR_10.block_buf);
 if (VAR_9)
  goto cleanup;
 FUNC_11(VAR_10.block_buf, 0, VAR_7->blocksize);
 VAR_10.err = 0;




 VAR_9 = FUNC_3(VAR_7, VAR_2,
           VAR_1, 0,
           VAR_5, &VAR_10);
 if (VAR_9)
  goto cleanup;
 if (VAR_10.err) {
  VAR_9 = VAR_10.err;
  goto cleanup;
 }
 if (VAR_8) {
  VAR_9 = FUNC_1(VAR_8,
            &VAR_10.bb_iter);
  if (VAR_9)
   goto cleanup;
  VAR_9 = FUNC_3(VAR_7, VAR_2,
            VAR_0, 0,
            VAR_6, &VAR_10);
  FUNC_2(VAR_10.bb_iter);
  if (VAR_9)
   goto cleanup;
  if (VAR_10.err) {
   VAR_9 = VAR_10.err;
   goto cleanup;
  }
 }





 VAR_9 = FUNC_9(VAR_7, VAR_2, &VAR_11);
 if (VAR_9)
  goto cleanup;

 VAR_11.i_atime = VAR_11.i_mtime = VAR_7->now ? VAR_7->now : FUNC_12(0);
 if (!VAR_11.i_ctime)
  VAR_11.i_ctime = VAR_7->now ? VAR_7->now : FUNC_12(0);
 FUNC_7(VAR_7, &VAR_11, VAR_10.bad_block_count);
 VAR_9 = FUNC_8(VAR_7, &VAR_11,
           VAR_10.bad_block_count * VAR_7->blocksize);
 if (VAR_9)
  goto cleanup;

 VAR_9 = FUNC_10(VAR_7, VAR_2, &VAR_11);
 if (VAR_9)
  goto cleanup;

cleanup:
 FUNC_4(&VAR_10.ind_blocks);
 FUNC_4(&VAR_10.block_buf);
 return VAR_9;
}
