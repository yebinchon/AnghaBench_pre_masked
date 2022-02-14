
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RefCount; struct TYPE_4__* ParentObject; int * KeyHandle; } ;
typedef TYPE_1__* PLSA_DB_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;

NTSTATUS
FUNC_3(PLSA_DB_OBJECT VAR_1)
{
    PLSA_DB_OBJECT VAR_2 = ((void*)0);
    NTSTATUS VAR_3 = VAR_0;

    VAR_1->RefCount--;

    if (VAR_1->RefCount > 0)
        return VAR_0;

    if (VAR_1->KeyHandle != ((void*)0))
        FUNC_0(VAR_1->KeyHandle);

    if (VAR_1->ParentObject != ((void*)0))
        VAR_2 = VAR_1->ParentObject;

    FUNC_1(FUNC_2(), 0, VAR_1);

    if (VAR_2 != ((void*)0))
    {
        VAR_2->RefCount--;

        if (VAR_2->RefCount == 0)
            VAR_3 = FUNC_3(VAR_2);
    }

    return VAR_3;
}
