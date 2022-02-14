
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int refs; TYPE_2__ IUnknown_iface; } ;
typedef TYPE_1__ Test_CallContext ;
typedef TYPE_2__ IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_3;
    ULONG VAR_4;
    IUnknown *VAR_5;
    Test_CallContext *VAR_6;

    if (!&FUNC_9)
    {
        FUNC_10("CoSwitchCallContext not present\n");
        return;
    }

    FUNC_1(((void*)0));

    VAR_6 = FUNC_4(FUNC_3(), 0, sizeof(Test_CallContext));
    VAR_6->IUnknown_iface.lpVtbl = &VAR_2;
    VAR_6->refs = 1;

    VAR_3 = FUNC_0(&VAR_0, (void**)&VAR_5);
    FUNC_7(VAR_3 == VAR_1, "Expected RPC_E_CALL_COMPLETE, got 0x%08x\n", VAR_3);

    VAR_5 = (IUnknown*)0xdeadbeef;
    VAR_3 = FUNC_9(&VAR_6->IUnknown_iface, &VAR_5);
    FUNC_8(VAR_3, "CoSwitchCallContext");
    FUNC_7(VAR_5 == ((void*)0), "expected NULL, got %p\n", VAR_5);
    VAR_4 = FUNC_5(&VAR_6->IUnknown_iface);
    FUNC_7(VAR_4 == 2, "Expected refcount 2, got %d\n", VAR_4);
    FUNC_6(&VAR_6->IUnknown_iface);

    VAR_5 = (IUnknown*)0xdeadbeef;
    VAR_3 = FUNC_0(&VAR_0, (void**)&VAR_5);
    FUNC_8(VAR_3, "CoGetCallContext");
    FUNC_7(VAR_5 == &VAR_6->IUnknown_iface, "expected %p, got %p\n",
       &VAR_6->IUnknown_iface, VAR_5);
    VAR_4 = FUNC_5(&VAR_6->IUnknown_iface);
    FUNC_7(VAR_4 == 3, "Expected refcount 3, got %d\n", VAR_4);
    FUNC_6(&VAR_6->IUnknown_iface);
    FUNC_6(VAR_5);

    VAR_5 = (IUnknown*)0xdeadbeef;
    VAR_3 = FUNC_9(((void*)0), &VAR_5);
    FUNC_8(VAR_3, "CoSwitchCallContext");
    FUNC_7(VAR_5 == &VAR_6->IUnknown_iface, "expected %p, got %p\n",
       &VAR_6->IUnknown_iface, VAR_5);
    VAR_4 = FUNC_5(&VAR_6->IUnknown_iface);
    FUNC_7(VAR_4 == 2, "Expected refcount 2, got %d\n", VAR_4);
    FUNC_6(&VAR_6->IUnknown_iface);

    VAR_3 = FUNC_0(&VAR_0, (void**)&VAR_5);
    FUNC_7(VAR_3 == VAR_1, "Expected RPC_E_CALL_COMPLETE, got 0x%08x\n", VAR_3);

    FUNC_6(&VAR_6->IUnknown_iface);

    FUNC_2();
}
