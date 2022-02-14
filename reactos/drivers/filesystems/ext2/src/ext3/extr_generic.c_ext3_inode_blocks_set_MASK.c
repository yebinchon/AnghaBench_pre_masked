
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int s_priv; } ;
struct inode {int i_blocks; int i_flags; struct super_block* i_sb; } ;
struct ext3_inode {void* i_blocks_high; void* i_blocks; } ;
typedef void* __u32 ;
typedef void* __u16 ;
typedef int PEXT2_VCB ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct super_block*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int) ;

int FUNC_5(struct ext3_inode *VAR_3,
                          struct inode * VAR_4)
{
    u64 VAR_5 = VAR_4->i_blocks;
    struct super_block *VAR_6 = VAR_4->i_sb;
    PEXT2_VCB VAR_7 = (PEXT2_VCB)VAR_6->s_priv;

    if (VAR_5 < 0x100000000) {




        VAR_3->i_blocks = FUNC_4(VAR_5);
        VAR_3->i_blocks_high = 0;
        VAR_4->i_flags &= ~VAR_2;
        return 0;
    }

    if (!FUNC_0(VAR_6, VAR_1)) {
        FUNC_1(VAR_6, VAR_1);
        FUNC_2(((void*)0), VAR_7);
    }

    if (VAR_5 <= 0xffffffffffff) {




        VAR_3->i_blocks = (__u32)FUNC_4(VAR_5);
        VAR_3->i_blocks_high = (__u16)FUNC_3(VAR_5 >> 32);
        VAR_4->i_flags &= ~VAR_2;
    } else {
        VAR_4->i_flags |= VAR_2;

        VAR_5 = VAR_5 >> (VAR_0 - 9);
        VAR_3->i_blocks = (__u32)FUNC_4(VAR_5);
        VAR_3->i_blocks_high = (__u16)FUNC_3(VAR_5 >> 32);
    }
    return 0;
}
