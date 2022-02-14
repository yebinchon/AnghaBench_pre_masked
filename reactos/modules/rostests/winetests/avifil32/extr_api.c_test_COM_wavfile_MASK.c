
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * member_0; } ;
struct unk_impl {int member_1; int ref; int * inner_unk; int IUnknown_iface; int * member_2; TYPE_1__ member_0; } ;
typedef int ULONG ;
typedef int IUnknown ;
typedef int IPersistFile ;
typedef int IAVIStream ;
typedef int IAVIFile ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (int,char*,...) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_12(void)
{
    struct unk_impl VAR_10 = {VAR_9, 19, ((void*)0)};
    IAVIFile *VAR_11 = ((void*)0);
    IPersistFile *VAR_12;
    IAVIStream *VAR_13;
    IUnknown *VAR_14;
    ULONG VAR_15;
    HRESULT VAR_16;


    VAR_16 = FUNC_0(&VAR_1, &VAR_10.IUnknown_iface, VAR_0,
            &VAR_7, (void**)&VAR_10.inner_unk);
    FUNC_11(VAR_16 == VAR_8, "COM aggregation failed: %08x, expected S_OK\n", VAR_16);
    VAR_16 = FUNC_9(&VAR_10.IUnknown_iface, &VAR_3, (void**)&VAR_11);
    FUNC_11(VAR_16 == VAR_8, "QueryInterface for IID_IAVIFile failed: %08x\n", VAR_16);
    VAR_15 = FUNC_1(VAR_11);
    FUNC_11(VAR_15 == VAR_10.ref, "WAVFile just pretends to support COM aggregation\n");
    VAR_15 = FUNC_3(VAR_11);
    FUNC_11(VAR_15 == VAR_10.ref, "WAVFile just pretends to support COM aggregation\n");
    VAR_16 = FUNC_2(VAR_11, &VAR_6, (void**)&VAR_12);
    FUNC_11(VAR_16 == VAR_8, "QueryInterface for IID_IPersistFile failed: %08x\n", VAR_16);
    VAR_15 = FUNC_7(VAR_12);
    FUNC_11(VAR_15 == VAR_10.ref, "WAVFile just pretends to support COM aggregation\n");
    VAR_15 = FUNC_3(VAR_11);
    FUNC_11(VAR_15 == 19, "Outer ref count should be back at 19 but is %d\n", VAR_15);
    VAR_15 = FUNC_10(VAR_10.inner_unk);
    FUNC_11(VAR_15 == 0, "Inner ref count should be 0 but is %u\n", VAR_15);


    VAR_16 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_5,
            (void**)&VAR_11);
    FUNC_11(VAR_16 == VAR_2, "WAVFile create failed: %08x, expected E_NOINTERFACE\n", VAR_16);


    VAR_16 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void**)&VAR_11);
    FUNC_11(VAR_16 == VAR_8, "WAVFile create failed: %08x, expected S_OK\n", VAR_16);
    VAR_15 = FUNC_1(VAR_11);
    FUNC_11(VAR_15 == 2, "refcount == %u, expected 2\n", VAR_15);

    VAR_16 = FUNC_2(VAR_11, &VAR_6, (void**)&VAR_12);
    FUNC_11(VAR_16 == VAR_8, "QueryInterface for IID_IPersistFile failed: %08x\n", VAR_16);
    VAR_15 = FUNC_6(VAR_12);
    FUNC_11(VAR_15 == 4, "refcount == %u, expected 4\n", VAR_15);
    VAR_15 = FUNC_7(VAR_12);

    VAR_16 = FUNC_2(VAR_11, &VAR_4, (void**)&VAR_13);
    FUNC_11(VAR_16 == VAR_8, "QueryInterface for IID_IAVIStream failed: %08x\n", VAR_16);
    VAR_15 = FUNC_4(VAR_13);
    FUNC_11(VAR_15 == 5, "refcount == %u, expected 5\n", VAR_15);
    VAR_15 = FUNC_5(VAR_13);

    VAR_16 = FUNC_2(VAR_11, &VAR_7, (void**)&VAR_14);
    FUNC_11(VAR_16 == VAR_8, "QueryInterface for IID_IUnknown failed: %08x\n", VAR_16);
    VAR_15 = FUNC_8(VAR_14);
    FUNC_11(VAR_15 == 6, "refcount == %u, expected 6\n", VAR_15);
    VAR_15 = FUNC_10(VAR_14);

    while (FUNC_3(VAR_11));
}
