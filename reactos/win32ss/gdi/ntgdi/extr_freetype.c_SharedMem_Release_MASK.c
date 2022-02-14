
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ RefCount; struct TYPE_7__* Buffer; scalar_t__ IsMapping; } ;
typedef TYPE_1__* PSHARED_MEM ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,TYPE_1__*,scalar_t__,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(PSHARED_MEM VAR_1)
{
    FUNC_1();
    FUNC_0(VAR_1->RefCount > 0);

    if (VAR_1->RefCount <= 0)
        return;

    --VAR_1->RefCount;
    if (VAR_1->RefCount == 0)
    {
        FUNC_2("Releasing SharedMem for %p (%i, %p)\n", VAR_1->Buffer, VAR_1->IsMapping, VAR_1);
        if (VAR_1->IsMapping)
            FUNC_4(VAR_1->Buffer);
        else
            FUNC_3(VAR_1->Buffer, VAR_0);
        FUNC_3(VAR_1, VAR_0);
    }
}
