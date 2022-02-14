
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int const REGSAM ;
typedef char OLECHAR ;
typedef scalar_t__ LONG ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int IRpcStubBuffer ;
typedef int IPSFactoryBuffer ;
typedef int ICreateTypeLib2 ;
typedef int ICreateTypeInfo ;
typedef scalar_t__ HRESULT ;
typedef int HREFTYPE ;
typedef int HKEY ;
typedef TYPE_2__ GUID ;
typedef int DWORD ;
typedef int CLSID ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,void**) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *,void**) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_2__ const*) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int *,char*,int ,int **) ;
 scalar_t__ FUNC_16 (int *,int *,void**) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,TYPE_2__ const*) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_21 (int *,TYPE_2__ const*,int *,int **) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *,int *,int **) ;
 int FUNC_26 (int *) ;
 int const VAR_11 ;


 int VAR_12 ;
 scalar_t__ FUNC_27 (int ,int **) ;
 int VAR_13 ;
 int FUNC_28 (int ,int ,char*,int,int *,int) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ,char*,int ,int const,int *) ;
 scalar_t__ FUNC_31 (int *,int *,int *) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_32 (TYPE_2__ const*,int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_33 (TYPE_2__ const*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_34 (int) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_35 (int ,int *,int const) ;
 int FUNC_36 (int,char*,...) ;
 int FUNC_37 (int ,scalar_t__*) ;
 int VAR_21 ;
 int FUNC_38 (char*) ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_39(void)
{
    BOOL VAR_23 = VAR_5;
    DWORD *VAR_24;
    HRESULT VAR_25;
    ITypeLib *VAR_26;
    ICreateTypeLib2 *VAR_27;
    ICreateTypeInfo *VAR_28;
    ITypeLib *VAR_29;
    ITypeInfo *VAR_30, *VAR_31;
    HREFTYPE VAR_32;
    char VAR_33[VAR_13];
    WCHAR VAR_34[VAR_13];
    int VAR_35;

    static const GUID VAR_36 = {0x3b9ff02e,0x9675,0x4861,{0xb7,0x81,0xce,0xae,0xa4,0x78,0x2a,0xcc}};
    static const GUID VAR_37 = {0x3b9ff02f,0x9675,0x4861,{0xb7,0x81,0xce,0xae,0xa4,0x78,0x2a,0xcc}};
    static const GUID VAR_38 = {0x3b9ff030,0x9675,0x4861,{0xb7,0x81,0xce,0xae,0xa4,0x78,0x2a,0xcc}};
    static OLECHAR VAR_39[] = {'i','n','t','e','r','f','a','c','e',0};
    static OLECHAR VAR_40[] = {'c','l','a','s','s',0};
    static DWORD VAR_41[] = { 0, ~0 };
    static DWORD VAR_42[] = { 0, 129, 128, ~0 };

    if (&FUNC_37)
        FUNC_37(FUNC_7(), &VAR_23);
    if (VAR_23 || VAR_20)
        VAR_24 = VAR_42;
    else
        VAR_24 = VAR_41;

    FUNC_3(((void*)0), VAR_1);

    VAR_25 = FUNC_27(VAR_22, &VAR_26);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_25(VAR_26, &VAR_10, &VAR_30);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    FUNC_8(".", "tlb", 0, VAR_33);
    FUNC_28(VAR_2, 0, VAR_33, -1, VAR_34, VAR_13);

    VAR_25 = FUNC_5(VAR_14, VAR_34, &VAR_27);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_19(VAR_27, &VAR_36);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_20(VAR_27, VAR_12);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_15(VAR_27, VAR_39, VAR_17, &VAR_28);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_13(VAR_28, &VAR_37);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_14(VAR_28, VAR_18);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_10(VAR_28, VAR_30, &VAR_32);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_28, 0, VAR_32);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_11(VAR_28, &VAR_8, (void**)&VAR_31);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    FUNC_12(VAR_28);
    FUNC_24(VAR_30);
    FUNC_26(VAR_26);

    VAR_25 = FUNC_15(VAR_27, VAR_40, VAR_16, &VAR_28);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_13(VAR_28, &VAR_38);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_10(VAR_28, VAR_31, &VAR_32);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_9(VAR_28, 0, VAR_32);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    FUNC_24(VAR_31);
    FUNC_12(VAR_28);

    VAR_25 = FUNC_18(VAR_27);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    VAR_25 = FUNC_16(VAR_27, &VAR_9, (void**)&VAR_29);
    FUNC_36(VAR_25 == VAR_15, "got %08x\n", VAR_25);

    for (VAR_35 = 0; VAR_24[VAR_35] != ~0; VAR_35++)
    {
        IPSFactoryBuffer *VAR_43;
        IRpcStubBuffer *VAR_44;
        REGSAM VAR_45 = VAR_24[VAR_35];
        CLSID VAR_46;
        HKEY VAR_47;
        LONG VAR_48;

        VAR_25 = FUNC_31(VAR_29, VAR_34, ((void*)0));
        if (VAR_25 == VAR_19)
        {
            FUNC_38("Insufficient privileges to register typelib in the registry\n");
            break;
        }
        FUNC_36(VAR_25 == VAR_15, "got %08x, side: %04x\n", VAR_25, VAR_45);


        VAR_48 = FUNC_30(VAR_6, "TypeLib\\{3b9ff02e-9675-4861-b781-ceaea4782acc}\\0.0\\0\\win64", 0, VAR_11 | VAR_45, &VAR_47);
        FUNC_36(VAR_48 == VAR_3, "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);

        VAR_48 = FUNC_30(VAR_6, "TypeLib\\{3b9ff02e-9675-4861-b781-ceaea4782acc}\\0.0\\0\\win32", 0, VAR_11 | VAR_45, &VAR_47);
        FUNC_36(VAR_48 == VAR_4, "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);
        FUNC_29(VAR_47);


        if (VAR_45 != 0)
        {
            WCHAR VAR_49[40];
            REGSAM VAR_50 = VAR_45 ^ (128 | 129);

            FUNC_32(&VAR_37, VAR_49, FUNC_0(VAR_49));


            VAR_48 = FUNC_30(VAR_6, "Interface", 0, VAR_11 | VAR_50, &VAR_47);
            FUNC_36(VAR_48 == VAR_4, "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);
            VAR_48 = FUNC_35(VAR_47, VAR_49, VAR_50);
            FUNC_36(VAR_48 == VAR_4, "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);
            FUNC_29(VAR_47);


            VAR_48 = FUNC_30(VAR_6, "Interface\\{3b9ff02f-9675-4861-b781-ceaea4782acc}", 0, VAR_11 | VAR_45, &VAR_47);
            FUNC_36(VAR_48 == VAR_4 || FUNC_34(VAR_48 == VAR_3), "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);
            if (VAR_48 == VAR_3)
            {

                FUNC_38("Registry reflection is enabled on this platform.\n");
                goto next;
            }
            FUNC_29(VAR_47);


            VAR_48 = FUNC_30(VAR_6, "TypeLib\\{3b9ff02e-9675-4861-b781-ceaea4782acc}\\0.0\\0\\win32", 0, VAR_11 | VAR_50, &VAR_47);
            FUNC_36(VAR_48 == VAR_4, "got wrong return code: %u, side: %04x\n", VAR_48, VAR_45);
            FUNC_29(VAR_47);
        }

        VAR_25 = FUNC_2(&VAR_37, &VAR_46);
        FUNC_36(VAR_25 == VAR_15, "got: %x, side: %04x\n", VAR_25, VAR_45);

        VAR_25 = FUNC_1(&VAR_46, VAR_0, ((void*)0),
                              &VAR_7, (void **)&VAR_43);
        FUNC_36(VAR_25 == VAR_15, "got: %x, side: %04x\n", VAR_25, VAR_45);

        VAR_25 = FUNC_21(VAR_43, &VAR_37, &VAR_21, &VAR_44);
        FUNC_36(VAR_25 == VAR_15, "got: %x, side: %04x\n", VAR_25, VAR_45);
        FUNC_23(VAR_44);

        FUNC_22(VAR_43);
    next:
        VAR_25 = FUNC_33(&VAR_36, 0, 0, 0, VAR_14);
        FUNC_36(VAR_25 == VAR_15, "got: %x, side: %04x\n", VAR_25, VAR_45);
    }

    FUNC_26(VAR_29);
    FUNC_36(0 == FUNC_17(VAR_27), "Typelib still has references\n");

    FUNC_6(VAR_34);

    FUNC_4();
}
