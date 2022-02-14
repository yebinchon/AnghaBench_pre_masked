
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct ext2_inode {scalar_t__ i_blocks; int i_links_count; int i_mode; int i_size; int i_size_high; int i_block; scalar_t__ i_ctime; scalar_t__ i_mtime; int i_flags; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef unsigned long long blk_t ;
typedef unsigned long long blk64_t ;
struct TYPE_14__ {int s_jnl_backup_type; int * s_jnl_blocks; } ;
struct TYPE_13__ {TYPE_9__* super; int io; scalar_t__ now; scalar_t__ blocksize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,struct ext2_inode*,int *,int ,int ,int *,unsigned long long*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned long long,int,char**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,struct ext2_inode*,unsigned long long,int ,unsigned long long) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct ext2_inode*,unsigned long long) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,struct ext2_inode*) ;
 unsigned long long FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,unsigned long long,int,char*) ;
 int FUNC_12 (int *,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static errcode_t FUNC_14(ext2_filsys VAR_8, ext2_ino_t VAR_9,
         blk_t VAR_10, blk64_t VAR_11, int VAR_12)
{
 char *VAR_13;
 errcode_t VAR_14;
 struct ext2_inode VAR_15;
 unsigned long long VAR_16;
 int VAR_17 = VAR_1;
 blk64_t VAR_18;

 if ((VAR_14 = FUNC_1(VAR_8, VAR_10, VAR_12,
             &VAR_13)))
  return VAR_14;

 if ((VAR_14 = FUNC_7(VAR_8)))
  goto out2;

 if ((VAR_14 = FUNC_8(VAR_8, VAR_9, &VAR_15)))
  goto out2;

 if (VAR_15.i_blocks > 0) {
  VAR_14 = VAR_0;
  goto out2;
 }

 if (VAR_11 == ~0ULL)
  VAR_11 = FUNC_10(VAR_8);

 if (FUNC_4(VAR_8->super))
  VAR_15.i_flags |= VAR_6;

 if (!(VAR_12 & VAR_3))
  VAR_17 |= VAR_2;

 VAR_16 = (unsigned long long)VAR_8->blocksize * VAR_10;
 VAR_15.i_mtime = VAR_15.i_ctime = VAR_8->now ? VAR_8->now : FUNC_13(0);
 VAR_15.i_links_count = 1;
 VAR_15.i_mode = VAR_7 | 0600;
 VAR_14 = FUNC_5(VAR_8, &VAR_15, VAR_16);
 if (VAR_14)
  goto out2;

 VAR_14 = FUNC_2(VAR_8, VAR_17, VAR_9,
      &VAR_15, VAR_11, 0, VAR_10);
 if (VAR_14)
  goto out2;

 if ((VAR_14 = FUNC_9(VAR_8, VAR_9, &VAR_15)))
  goto out2;

 VAR_14 = FUNC_0(VAR_8, VAR_9, &VAR_15, ((void*)0), 0, 0, ((void*)0), &VAR_18);
 if (VAR_14)
  goto out2;

 VAR_14 = FUNC_11(VAR_8->io, VAR_18, 1, VAR_13);
 if (VAR_14)
  goto out2;

 FUNC_12(VAR_8->super->s_jnl_blocks, VAR_15.i_block, VAR_4*4);
 VAR_8->super->s_jnl_blocks[15] = VAR_15.i_size_high;
 VAR_8->super->s_jnl_blocks[16] = VAR_15.i_size;
 VAR_8->super->s_jnl_backup_type = VAR_5;
 FUNC_6(VAR_8);

out2:
 FUNC_3(&VAR_13);
 return VAR_14;
}
