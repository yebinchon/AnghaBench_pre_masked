
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int CompartmentMgr; int pTextLayoutSink; int pTextEditSink; int pStatusSink; int pEditTransactionSink; int pContextKeyEventSink; scalar_t__ defaultCookie; scalar_t__ pITfContextOwnerCompositionSink; scalar_t__ pITextStoreACP; } ;
typedef TYPE_1__ EditCookie ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(Context *VAR_0)
{
    EditCookie *VAR_1;
    FUNC_5("destroying %p\n", VAR_0);

    if (VAR_0->pITextStoreACP)
        FUNC_3(VAR_0->pITextStoreACP);

    if (VAR_0->pITfContextOwnerCompositionSink)
        FUNC_4(VAR_0->pITfContextOwnerCompositionSink);

    if (VAR_0->defaultCookie)
    {
        VAR_1 = FUNC_7(VAR_0->defaultCookie);
        FUNC_2(FUNC_1(),0,VAR_1);
        VAR_0->defaultCookie = 0;
    }

    FUNC_6(&VAR_0->pContextKeyEventSink);
    FUNC_6(&VAR_0->pEditTransactionSink);
    FUNC_6(&VAR_0->pStatusSink);
    FUNC_6(&VAR_0->pTextEditSink);
    FUNC_6(&VAR_0->pTextLayoutSink);

    FUNC_0(VAR_0->CompartmentMgr);
    FUNC_2(FUNC_1(),0,VAR_0);
}
