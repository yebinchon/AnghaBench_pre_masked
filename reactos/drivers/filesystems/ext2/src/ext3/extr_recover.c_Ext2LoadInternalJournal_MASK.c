
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {int * i_sb; int i_ino; } ;
struct TYPE_12__ {TYPE_6__ Inode; } ;
struct TYPE_11__ {int sb; } ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_6__*) ;

PEXT2_MCB
FUNC_4(
    PEXT2_VCB VAR_0,
    ULONG VAR_1
)
{
    PEXT2_MCB VAR_2 = ((void*)0);

    VAR_2 = FUNC_1(VAR_0, ((void*)0), ((void*)0), 0);
    if (!VAR_2) {
        goto errorout;
    }

    VAR_2->Inode.i_ino = VAR_1;
    VAR_2->Inode.i_sb = &VAR_0->sb;
    if (!FUNC_3(VAR_0, &VAR_2->Inode)) {
        FUNC_0();
        FUNC_2(VAR_0, VAR_2);
        goto errorout;
    }

errorout:

    return VAR_2;
}
