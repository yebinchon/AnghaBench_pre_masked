
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_4__ {int lcid; int wMajorVerNum; int wMinorVerNum; int wLibFlags; } ;
typedef TYPE_1__ TLIBATTR ;
typedef int LCID ;
typedef int ITypeLib ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int * BSTR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int,int,int ,int **) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int,int,int ,int **) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int,char*) ;

__attribute__((used)) static void FUNC_19(void)
{
    LCID VAR_13 = FUNC_7(FUNC_6(VAR_0, VAR_7), VAR_6);
    LCID VAR_14 = FUNC_7(FUNC_6(VAR_1, VAR_8), VAR_6);
    ULONG_PTR VAR_15;
    TLIBATTR *VAR_16;
    HANDLE VAR_17;
    ITypeLib *VAR_18;
    HRESULT VAR_19;
    BSTR VAR_20;
    BOOL VAR_21;

    if (!&FUNC_14)
    {
        FUNC_17("Activation contexts not supported, skipping LoadRegTypeLib tests\n");
        return;
    }

    FUNC_12("testdep.manifest", VAR_11);
    FUNC_12("main.manifest", VAR_12);

    VAR_17 = FUNC_11("main.manifest");
    FUNC_0("testdep.manifest");
    FUNC_0("main.manifest");


    FUNC_18(1, "test_actctx_tlb.tlb");
    FUNC_18(3, "test_actctx_tlb2.tlb");

    VAR_19 = FUNC_5(&VAR_3, 1, 0, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);

    VAR_19 = FUNC_5(&VAR_4, 1, 0, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);

    VAR_19 = FUNC_8(&VAR_3, 2, 0, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);

    VAR_21 = FUNC_14(VAR_17, &VAR_15);
    FUNC_13(VAR_21, "ActivateActCtx failed: %u\n", FUNC_1());

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 2, 0, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 2, 0, VAR_13, &VAR_20);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 2, 0, VAR_14, &VAR_20);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);

    VAR_19 = FUNC_8(&VAR_3, 2, 8, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_10 || FUNC_10(VAR_19 == VAR_9) , "got 0x%08x\n", VAR_19);

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 2, 7, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 1, 0, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_10 || FUNC_10(VAR_19 == VAR_9) , "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);

    VAR_20 = ((void*)0);
    VAR_19 = FUNC_8(&VAR_3, 0xffff, 0xffff, VAR_5, &VAR_20);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    FUNC_9(VAR_20);


    VAR_19 = FUNC_5(&VAR_4, 1, 0, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10 || FUNC_10(VAR_19 == VAR_9) , "got 0x%08x\n", VAR_19);
    if (VAR_19 == VAR_9) FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_4, 2, 0, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);


    VAR_19 = FUNC_5(&VAR_3, 2, 0, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    if (VAR_19 == VAR_9) FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_3, 2, 1, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    if (VAR_19 == VAR_9) FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_3, 2, 0, VAR_13, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    if (VAR_19 == VAR_9) FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_3, 2, 0, VAR_14, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);
    if (VAR_19 == VAR_9) FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_3, 2, 7, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);

    VAR_19 = FUNC_5(&VAR_3, 2, 5, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);

    VAR_19 = FUNC_2(VAR_18, &VAR_16);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);

    FUNC_13(VAR_16->lcid == 0, "got %x\n", VAR_16->lcid);
    FUNC_13(VAR_16->wMajorVerNum == 2, "got %d\n", VAR_16->wMajorVerNum);
    FUNC_13(VAR_16->wMinorVerNum == 5, "got %d\n", VAR_16->wMinorVerNum);
    FUNC_13(VAR_16->wLibFlags == VAR_2, "got %x\n", VAR_16->wLibFlags);

    FUNC_4(VAR_18, VAR_16);
    FUNC_3(VAR_18);

    VAR_19 = FUNC_5(&VAR_3, 1, 7, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_10, "got 0x%08x\n", VAR_19);

    VAR_18 = ((void*)0);
    VAR_19 = FUNC_5(&VAR_3, 0xffff, 0xffff, VAR_5, &VAR_18);
    FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);

    if (VAR_18)
    {
        VAR_19 = FUNC_2(VAR_18, &VAR_16);
        FUNC_13(VAR_19 == VAR_9, "got 0x%08x\n", VAR_19);

        FUNC_13(VAR_16->lcid == 0, "got %x\n", VAR_16->lcid);
        FUNC_13(VAR_16->wMajorVerNum == 2, "got %d\n", VAR_16->wMajorVerNum);
        FUNC_13(VAR_16->wMinorVerNum == 5, "got %d\n", VAR_16->wMinorVerNum);
        FUNC_13(VAR_16->wLibFlags == VAR_2, "got %x\n", VAR_16->wLibFlags);

        FUNC_4(VAR_18, VAR_16);
        FUNC_3(VAR_18);
    }

    FUNC_0("test_actctx_tlb.tlb");
    FUNC_0("test_actctx_tlb2.tlb");

    VAR_21 = FUNC_15(0, VAR_15);
    FUNC_13(VAR_21, "DeactivateActCtx failed: %u\n", FUNC_1());

    FUNC_16(VAR_17);
}
