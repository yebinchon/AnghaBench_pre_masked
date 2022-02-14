
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int ICreateTypeLib2 ;
typedef int ICreateTypeInfo ;
typedef scalar_t__ HRESULT ;
typedef int HREFTYPE ;
typedef TYPE_2__ GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int **) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__ const*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,char*,int ,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,TYPE_2__ const*) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 TYPE_2__ const VAR_1 ;
 scalar_t__ FUNC_13 (int *,int ,int **) ;
 scalar_t__ FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,TYPE_2__ const*,int **) ;
 int FUNC_17 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_18 (char*,int ,int **) ;
 int VAR_3 ;
 int FUNC_19 (int ,int ,char const*,int,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_20 (int) ;
 char* FUNC_21 (int) ;
 int FUNC_22 (int,char*,scalar_t__) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void FUNC_24(void) {
    HRESULT VAR_11;
    const char *VAR_12;
    WCHAR VAR_13[VAR_3];
    ITypeLib *VAR_14;
    ITypeInfo *VAR_15;
    char VAR_16[VAR_3];
    WCHAR VAR_17[VAR_3];
    ICreateTypeLib2 *VAR_18;
    ICreateTypeInfo *VAR_19;
    ITypeLib *VAR_20;
    ITypeInfo *VAR_21;
    ITypeInfo *VAR_22 = ((void*)0);
    HREFTYPE VAR_23;

    static WCHAR VAR_24[] = {'I','T','e','s','t','D','e','p',0};

    static const GUID VAR_25 = {0xe0228f26,0x2946,0x478c,{0xb6,0x4a,0x93,0xfe,0xef,0xa5,0x05,0x32}};
    static const GUID VAR_26 = {0x394376dd,0x3bb8,0x4804,{0x8c,0xcc,0x95,0x59,0x43,0x40,0x04,0xf3}};

    FUNC_23("Starting typelib dependency tests\n");

    VAR_12 = FUNC_21(2);
    FUNC_19(VAR_0, 0, VAR_12, -1, VAR_13, VAR_3);

    VAR_11 = FUNC_18(VAR_13, VAR_4, &VAR_14);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_16(VAR_14, &VAR_1, &VAR_15);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    FUNC_2(".", "tlb", 0, VAR_16);
    FUNC_19(VAR_0, 0, VAR_16, -1, VAR_17, VAR_3);

    if(sizeof(void*) == 8) {
        VAR_11 = FUNC_0(VAR_6, VAR_17, &VAR_18);
        FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);
    } else {
        VAR_11 = FUNC_0(VAR_5, VAR_17, &VAR_18);
        FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);
    }

    VAR_11 = FUNC_11(VAR_18, &VAR_25);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_12(VAR_18, VAR_2);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_8(VAR_18, VAR_24, VAR_8, &VAR_19);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_6(VAR_19, &VAR_26);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_7(VAR_19, VAR_9);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_4(VAR_19, VAR_15, &VAR_23);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_19, 0, VAR_23);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    FUNC_5(VAR_19);

    VAR_11 = FUNC_10(VAR_18);
    FUNC_22(VAR_11 == VAR_7, "got %08x\n", VAR_11);

    FUNC_9(VAR_18);

    FUNC_15(VAR_15);
    FUNC_17(VAR_14);

    FUNC_1(VAR_13);

    VAR_11 = FUNC_18(VAR_17, VAR_4, &VAR_20);
    FUNC_22(VAR_11 == VAR_7, "got: %x\n", VAR_11);

    VAR_11 = FUNC_16(VAR_20, &VAR_26, &VAR_21);
    FUNC_22(VAR_11 == VAR_7, "got: %x\n", VAR_11);

    VAR_11 = FUNC_14(VAR_21, 0, &VAR_23);
    FUNC_22(VAR_11 == VAR_7, "got: %x\n", VAR_11);

    VAR_11 = FUNC_13(VAR_21, VAR_23, &VAR_22);
    FUNC_22(VAR_11 == VAR_7 || FUNC_20(VAR_11 == VAR_10) , "got: %x\n", VAR_11);

    FUNC_15(VAR_21);
    if(VAR_22)
        FUNC_15(VAR_22);
    FUNC_17(VAR_20);

    FUNC_1(VAR_17);
}
