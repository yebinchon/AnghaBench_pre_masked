
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CompartmentMgr; int TransitoryExtensionSink; scalar_t__* contextStack; int ITfDocumentMgr_iface; } ;
typedef int ITfThreadMgr ;
typedef TYPE_1__ DocumentMgr ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(DocumentMgr *VAR_0)
{
    ITfThreadMgr *VAR_1 = ((void*)0);
    FUNC_6("destroying %p\n", VAR_0);

    FUNC_5(&VAR_1);
    if (VAR_1)
    {
        FUNC_7(VAR_1, &VAR_0->ITfDocumentMgr_iface);
        FUNC_4(VAR_1);
    }

    if (VAR_0->contextStack[0])
        FUNC_3(VAR_0->contextStack[0]);
    if (VAR_0->contextStack[1])
        FUNC_3(VAR_0->contextStack[1]);
    FUNC_8(&VAR_0->TransitoryExtensionSink);
    FUNC_0(VAR_0->CompartmentMgr);
    FUNC_2(FUNC_1(),0,VAR_0);
}
