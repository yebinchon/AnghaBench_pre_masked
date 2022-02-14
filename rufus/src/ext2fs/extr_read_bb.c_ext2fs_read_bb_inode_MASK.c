
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct read_bb_record {scalar_t__ err; scalar_t__ bb_list; } ;
struct ext2_inode {int i_blocks; int i_flags; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ ext2_badblocks_list ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
struct TYPE_6__ {int blocksize; int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int ,struct read_bb_record*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,struct ext2_inode*) ;
 int VAR_4 ;

errcode_t FUNC_5(ext2_filsys VAR_5, ext2_badblocks_list *VAR_6)
{
 errcode_t VAR_7;
 struct read_bb_record VAR_8;
 struct ext2_inode VAR_9;
 blk_t VAR_10;

 FUNC_0(VAR_5, VAR_2);

 if (!*VAR_6) {
  VAR_7 = FUNC_4(VAR_5, VAR_1, &VAR_9);
  if (VAR_7)
   return VAR_7;
  VAR_10 = VAR_9.i_blocks;
  if (!(FUNC_3(VAR_5->super) &&
        (VAR_9.i_flags & VAR_3)))
   VAR_10 = VAR_10 / (VAR_5->blocksize / 512);
  VAR_10 += 20;
  if (VAR_10 < 50)
   VAR_10 = 50;
  if (VAR_10 > 50000)
   VAR_10 = 500;
  VAR_7 = FUNC_1(VAR_6, VAR_10);
  if (VAR_7)
   return VAR_7;
 }

 VAR_8.bb_list = *VAR_6;
 VAR_8.err = 0;
 VAR_7 = FUNC_2(VAR_5, VAR_1, VAR_0,
           0, VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;

 return VAR_8.err;
}
