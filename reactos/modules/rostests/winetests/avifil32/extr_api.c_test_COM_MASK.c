
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * member_0; } ;
struct unk_impl {int member_1; int ref; int inner_unk; int IUnknown_iface; int * member_2; TYPE_1__ member_0; } ;
typedef int LONG ;
typedef int IUnknown ;
typedef int IPersistFile ;
typedef int IAVIFile ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int,char*,...) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(void)
{
    struct unk_impl VAR_9 = {VAR_8, 19, ((void*)0)};
    IAVIFile *VAR_10 = ((void*)0);
    IPersistFile *VAR_11;
    IUnknown *VAR_12;
    LONG VAR_13;
    HRESULT VAR_14;


    VAR_14 = FUNC_0(&VAR_1, &VAR_9.IUnknown_iface, VAR_0,
            &VAR_6, (void**)&VAR_9.inner_unk);
    FUNC_9(VAR_14 == VAR_7, "COM aggregation failed: %08x, expected S_OK\n", VAR_14);
    VAR_14 = FUNC_7(&VAR_9.IUnknown_iface, &VAR_3, (void**)&VAR_10);
    FUNC_9(VAR_14 == VAR_7, "QueryInterface for IID_IAVIFile failed: %08x\n", VAR_14);
    VAR_13 = FUNC_1(VAR_10);
    FUNC_9(VAR_13 == VAR_9.ref, "AVIFile just pretends to support COM aggregation\n");
    VAR_13 = FUNC_3(VAR_10);
    FUNC_9(VAR_13 == VAR_9.ref, "AVIFile just pretends to support COM aggregation\n");
    VAR_14 = FUNC_2(VAR_10, &VAR_5, (void**)&VAR_11);
    FUNC_9(VAR_14 == VAR_7, "QueryInterface for IID_IPersistFile failed: %08x\n", VAR_14);
    VAR_13 = FUNC_5(VAR_11);
    FUNC_9(VAR_13 == VAR_9.ref, "AVIFile just pretends to support COM aggregation\n");
    VAR_13 = FUNC_3(VAR_10);
    FUNC_9(VAR_13 == 19, "Outer ref count should be back at 19 but is %d\n", VAR_13);
    VAR_13 = FUNC_8(VAR_9.inner_unk);
    FUNC_9(VAR_13 == 0, "Inner ref count should be 0 but is %u\n", VAR_13);


    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_4,
            (void**)&VAR_10);
    FUNC_9(VAR_14 == VAR_2, "AVIFile create failed: %08x, expected E_NOINTERFACE\n", VAR_14);


    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void**)&VAR_10);
    FUNC_9(VAR_14 == VAR_7, "AVIFile create failed: %08x, expected S_OK\n", VAR_14);
    VAR_13 = FUNC_1(VAR_10);
    FUNC_9(VAR_13 == 2, "refcount == %u, expected 2\n", VAR_13);
    VAR_14 = FUNC_2(VAR_10, &VAR_6, (void**)&VAR_12);
    FUNC_9(VAR_14 == VAR_7, "QueryInterface for IID_IUnknown failed: %08x\n", VAR_14);
    VAR_13 = FUNC_6(VAR_12);
    FUNC_9(VAR_13 == 4, "refcount == %u, expected 4\n", VAR_13);
    VAR_14 = FUNC_2(VAR_10, &VAR_5, (void**)&VAR_11);
    FUNC_9(VAR_14 == VAR_7, "QueryInterface for IID_IPersistFile failed: %08x\n", VAR_14);
    VAR_13 = FUNC_4(VAR_11);
    FUNC_9(VAR_13 == 6, "refcount == %u, expected 6\n", VAR_13);

    while (FUNC_3(VAR_10));
}
