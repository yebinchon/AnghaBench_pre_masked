
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RefCount; struct TYPE_4__* Name; int MembersKeyHandle; int KeyHandle; } ;
typedef TYPE_1__* PSAM_DB_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

NTSTATUS
FUNC_3(PSAM_DB_OBJECT VAR_1)
{
    NTSTATUS VAR_2 = VAR_0;

    VAR_1->RefCount--;

    if (VAR_1->RefCount > 0)
        return VAR_0;

    FUNC_2(&VAR_1->KeyHandle);
    FUNC_2(&VAR_1->MembersKeyHandle);

    if (VAR_1->Name != ((void*)0))
        FUNC_0(FUNC_1(), 0, VAR_1->Name);

    FUNC_0(FUNC_1(), 0, VAR_1);

    return VAR_2;
}
