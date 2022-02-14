
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_14__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int IUnknown ;
typedef TYPE_2__ IID ;
typedef int IHTMLDocument2 ;
typedef int HRESULT ;


 int VAR_0 ;
 TYPE_2__ const VAR_1 ;
 TYPE_2__ const VAR_2 ;
 TYPE_2__ const VAR_3 ;
 TYPE_2__ const VAR_4 ;
 TYPE_2__ const VAR_5 ;
 TYPE_2__ const VAR_6 ;
 TYPE_2__ const VAR_7 ;
 TYPE_2__ const VAR_8 ;
 TYPE_2__ const VAR_9 ;
 int FUNC_0 (int *,TYPE_2__ const*,void**) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(IHTMLDocument2 *VAR_11)
{
    IUnknown *VAR_12, *VAR_13 = (IUnknown*)VAR_11;
    HRESULT VAR_14;

    static const IID VAR_15 =
        {0x719c3050,0xf9d3,0x11cf,{0xa4,0x93,0x00,0x40,0x05,0x23,0xa8,0xa0}};

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_7, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qirunnable=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_3, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_4, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_6, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_15, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_5, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_2, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_8, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_14 = FUNC_0(VAR_13, &VAR_9, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_0, "QueryInterface returned %08x, expected E_NOINTERFACE\n", VAR_14);
    FUNC_2(VAR_12 == ((void*)0), "qi=%p, expected NULL\n", VAR_12);

    VAR_14 = FUNC_0(VAR_13, &VAR_1, (void**)&VAR_12);
    FUNC_2(VAR_14 == VAR_10, "Could not get IDispatch interface: %08x\n", VAR_14);
    FUNC_2(VAR_12 != (IUnknown*)VAR_13, "disp == doc\n");
    FUNC_1(VAR_12);
}
