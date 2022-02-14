
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Inode; } ;
typedef int PEXT2_VCB ;
typedef TYPE_1__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;

BOOLEAN
FUNC_3 (
    PEXT2_IRP_CONTEXT VAR_1,
    PEXT2_VCB VAR_2,
    PEXT2_MCB VAR_3
)
{
    if (!FUNC_0(VAR_3) || FUNC_1(VAR_3)) {
        return VAR_0;
    }

    return !!FUNC_2(VAR_1, &VAR_3->Inode);
}
