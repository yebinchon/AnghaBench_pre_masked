
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int RefCount; int pPSFactory; int * pvServerObject; int * lpVtbl; } ;
struct TYPE_10__ {TYPE_2__ stub_buffer; int base_obj; int base_stub; } ;
typedef TYPE_3__ cstdstubbuffer_delegating_t ;
struct TYPE_8__ {int DispatchTableCount; int piid; } ;
struct TYPE_11__ {int Vtbl; TYPE_1__ header; } ;
typedef int REFIID ;
typedef int PCInterfaceName ;
typedef int LPUNKNOWN ;
typedef scalar_t__ LPRPCSTUBBUFFER ;
typedef int LPPSFACTORYBUFFER ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_4__ CInterfaceStubVtbl ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,int *,...) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

HRESULT FUNC_14(REFIID VAR_4,
                                            LPUNKNOWN VAR_5,
                                            PCInterfaceName VAR_6,
                                            CInterfaceStubVtbl *VAR_7,
                                            REFIID VAR_8,
                                            LPPSFACTORYBUFFER VAR_9,
                                            LPRPCSTUBBUFFER *VAR_10)
{
    cstdstubbuffer_delegating_t *VAR_11;
    IUnknown *VAR_12;
    HRESULT VAR_13;

    FUNC_9("(%p,%p,%p,%p) %s\n", &VAR_5, VAR_7, VAR_9, VAR_10, VAR_6);
    FUNC_9("iid=%s delegating to %s\n", FUNC_11(VAR_7->header.piid), FUNC_11(VAR_8));
    FUNC_9("vtbl=%p\n", &VAR_7->Vtbl);

    if (!FUNC_8(VAR_7->header.piid, VAR_4))
    {
        FUNC_0("IID mismatch during stub creation\n");
        return VAR_2;
    }

    VAR_13 = FUNC_6(VAR_5, VAR_4, (void**)&VAR_12);
    if(FUNC_1(VAR_13)) return VAR_13;

    VAR_11 = FUNC_3(FUNC_2(), VAR_1, sizeof(*VAR_11));
    if (!VAR_11)
    {
        FUNC_7(VAR_12);
        return VAR_0;
    }

    VAR_11->base_obj = FUNC_12( VAR_7->header.DispatchTableCount );
    VAR_13 = FUNC_10(VAR_8, (IUnknown*)&VAR_11->base_obj, &VAR_11->base_stub);
    if(FUNC_1(VAR_13))
    {
        FUNC_13(VAR_11->base_obj);
        FUNC_4(FUNC_2(), 0, VAR_11);
        FUNC_7(VAR_12);
        return VAR_13;
    }

    VAR_11->stub_buffer.lpVtbl = &VAR_7->Vtbl;
    VAR_11->stub_buffer.RefCount = 1;
    VAR_11->stub_buffer.pvServerObject = VAR_12;
    VAR_11->stub_buffer.pPSFactory = VAR_9;
    *VAR_10 = (LPRPCSTUBBUFFER)&VAR_11->stub_buffer;

    FUNC_5(VAR_9);
    return VAR_3;
}
