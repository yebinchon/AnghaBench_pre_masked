
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_priv; } ;
struct inode {int i_priv; struct super_block* i_sb; } ;
typedef int ULONGLONG ;
struct TYPE_4__ {int Lba; } ;
typedef int PEXT2_VCB ;
typedef int PEXT2_MCB ;
typedef TYPE_1__* PEXT2_EXTENT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int ,int ,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

ULONGLONG FUNC_3(struct inode *VAR_3, ULONGLONG VAR_4)
{
    ULONGLONG VAR_5 = 0;
    struct super_block *VAR_6 = VAR_3->i_sb;

    PEXT2_MCB VAR_7 = (PEXT2_MCB)VAR_3->i_priv;
    PEXT2_VCB VAR_8 = (PEXT2_VCB)VAR_6->s_priv;
    PEXT2_EXTENT VAR_9 = ((void*)0);
    ULONGLONG VAR_10 = (ULONGLONG)VAR_4;
    NTSTATUS VAR_11;

    if (!VAR_7 || !VAR_8) {
        goto errorout;
    }

    VAR_10 <<= VAR_0;
    VAR_11 = FUNC_0(
                 ((void*)0),
                 VAR_8,
                 VAR_7,
                 VAR_10,
                 VAR_1,
                 VAR_2,
                 &VAR_9
             );

    if (!FUNC_2(VAR_11)) {
        goto errorout;
    }

    if (VAR_9 == ((void*)0)) {
        goto errorout;
    }

    VAR_5 = (unsigned long)(VAR_9->Lba >> VAR_0);

errorout:

    if (VAR_9) {
        FUNC_1(VAR_9);
    }

    return VAR_5;
}
