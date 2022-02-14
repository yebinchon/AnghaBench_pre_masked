
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int l_i_blocks_hi; } ;
struct TYPE_7__ {TYPE_1__ linux2; } ;
struct ext2_inode {int i_flags; int i_blocks; TYPE_2__ osd2; } ;
typedef TYPE_3__* ext2_filsys ;
typedef int errcode_t ;
typedef int blk64_t ;
struct TYPE_8__ {int blocksize; int super; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

errcode_t FUNC_2(ext2_filsys VAR_2, struct ext2_inode *VAR_3, blk64_t VAR_4)
{
 if (!FUNC_1(VAR_2->super) ||
     !(VAR_3->i_flags & VAR_1))
  VAR_4 *= VAR_2->blocksize / 512;
 VAR_4 *= FUNC_0(VAR_2);

 VAR_3->i_blocks = VAR_4 & 0xFFFFFFFF;
 if (FUNC_1(VAR_2->super))
  VAR_3->osd2.linux2.l_i_blocks_hi = VAR_4 >> 32;
 else if (VAR_4 >> 32)
  return VAR_0;
 return 0;
}
