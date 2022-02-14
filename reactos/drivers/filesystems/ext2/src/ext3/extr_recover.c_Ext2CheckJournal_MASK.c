
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext3_super_block {scalar_t__ s_journal_inum; scalar_t__ s_journal_dev; int s_feature_incompat; } ;
struct TYPE_4__ {int Flags; scalar_t__ SuperBlock; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PEXT2_VCB ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

INT
FUNC_3(
    PEXT2_VCB VAR_4,
    PULONG VAR_5
)
{
    struct ext3_super_block* VAR_6 = ((void*)0);


    VAR_6 = (struct ext3_super_block *)VAR_4->SuperBlock;
    if (FUNC_0(VAR_6->s_feature_incompat,
                 VAR_0)) {
        FUNC_2(VAR_4->Flags, VAR_3);
    }


    if (FUNC_1(VAR_4)) {
        goto errorout;
    }


    if (VAR_6->s_journal_inum == 0) {
        goto errorout;
    }


    if (VAR_6->s_journal_dev) {
        goto errorout;
    }


    *VAR_5 = VAR_6->s_journal_inum;

    return VAR_2;

errorout:

    return VAR_1;
}
