
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int s_priv; } ;
struct inode {int i_flags; struct super_block* i_sb; } ;
struct ext3_inode {int i_blocks; int i_blocks_high; } ;
typedef int blkcnt_t ;
typedef int PEXT2_VCB ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

blkcnt_t FUNC_3(struct ext3_inode *VAR_3,
                           struct inode *VAR_4)
{
    blkcnt_t VAR_5 ;
    struct super_block *VAR_6 = VAR_4->i_sb;
    PEXT2_VCB VAR_7 = (PEXT2_VCB)VAR_6->s_priv;

    if (FUNC_0(VAR_6,
                                   VAR_1)) {

        VAR_5 = ((u64)FUNC_1(VAR_3->i_blocks_high)) << 32 |
                   FUNC_2(VAR_3->i_blocks);
        if (VAR_4->i_flags & VAR_2) {

            return VAR_5 << (VAR_0 - 9);
        } else {
            return VAR_5;
        }
    } else {
        return FUNC_2(VAR_3->i_blocks);
    }
}
