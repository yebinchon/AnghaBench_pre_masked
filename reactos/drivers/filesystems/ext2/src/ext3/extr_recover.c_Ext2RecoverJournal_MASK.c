
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext3_super_block {int dummy; } ;
struct block_device {int dummy; } ;
typedef int journal_t ;
typedef int ULONG ;
struct TYPE_15__ {struct inode Inode; } ;
struct TYPE_14__ {int MainResource; int Flags; TYPE_1__* SuperBlock; struct super_block sb; struct block_device bd; } ;
struct TYPE_13__ {int s_feature_incompat; } ;
typedef TYPE_2__* PEXT2_VCB ;
typedef TYPE_3__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int INT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct block_device*) ;

INT
FUNC_16(
    PEXT2_IRP_CONTEXT VAR_3,
    PEXT2_VCB VAR_4
)
{
    INT VAR_5 = 0;
    ULONG VAR_6 = 0;
    PEXT2_MCB VAR_7 = ((void*)0);
    struct block_device * VAR_8 = &VAR_4->bd;

    struct super_block * VAR_9 = &VAR_4->sb;

    struct inode * VAR_10 = ((void*)0);
    journal_t * VAR_11 = ((void*)0);
    struct ext3_super_block *VAR_12;

    FUNC_2(&VAR_4->MainResource, VAR_1);


    if (!FUNC_4(VAR_4, &VAR_6)) {
        VAR_5 = -1;
        goto errorout;
    }


    VAR_7 = FUNC_6(VAR_4, VAR_6);
    if (!VAR_7) {
        VAR_5 = -6;
        goto errorout;
    }


    VAR_10 = &VAR_7->Inode;


    VAR_11 = FUNC_12(VAR_10);


    if (!VAR_11) {
        FUNC_10(VAR_10);
        VAR_5 = -8;
        goto errorout;
    }


    VAR_5 = FUNC_13(VAR_11);
    if (0 != VAR_5) {
        VAR_5 = -9;
        FUNC_1("Ext2Fsd: recover_journal: failed "
                 "to recover journal data.\n");
    }


    FUNC_8(VAR_3, VAR_4);
    FUNC_7(VAR_3, VAR_4);


    if (VAR_5 == 0) {
        FUNC_14(VAR_11);
        FUNC_0(
            VAR_4->SuperBlock->s_feature_incompat,
            VAR_0 );
        FUNC_9(VAR_3, VAR_4);
        FUNC_15(VAR_8);
        FUNC_0(VAR_4->Flags, VAR_2);
    }

errorout:


    if (VAR_11) {
        FUNC_11(VAR_11);
    }


    if (VAR_7) {
        FUNC_5(VAR_4, VAR_7);
    }

    FUNC_3(&VAR_4->MainResource);

    return VAR_5;
}
