
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
typedef size_t ULONG ;
struct TYPE_7__ {scalar_t__ vt; } ;
struct TYPE_6__ {size_t cbSizeInstance; int cbAlignment; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int SYSKIND ;
typedef char OLECHAR ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int ICreateTypeLib2 ;
typedef int ICreateTypeInfo ;
typedef scalar_t__ HRESULT ;
typedef int HREFTYPE ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *,int **) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int ,int **) ;
 scalar_t__ FUNC_7 (int *,int *,void**) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int *,TYPE_1__**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int *,int ,int **) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int **) ;
 int VAR_4 ;
 int FUNC_16 (int ,int ,int *,int,int *,int) ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (int *,TYPE_2__*,int,int ,size_t,int,int ) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(SYSKIND VAR_10)
{
    CHAR VAR_11[VAR_4];
    WCHAR VAR_12[VAR_4];
    ITypeLib *VAR_13;
    ICreateTypeLib2 *VAR_14;
    ITypeInfo *VAR_15;
    ICreateTypeInfo *VAR_16;
    HREFTYPE VAR_17;
    TYPEATTR *VAR_18;
    ULONG VAR_19, VAR_20;
    WORD VAR_21, VAR_22;
    HRESULT VAR_23;

    static OLECHAR VAR_24[] = {'i','n','t','e','r','f','a','c','e',0};

    switch(VAR_10){
    case 129:
        FUNC_19("testing SYS_WIN32\n");
        VAR_22 = 4;
        break;
    case 128:
        FUNC_19("testing SYS_WIN64\n");
        VAR_22 = 8;
        break;
    default:
        return;
    }

    FUNC_2(".", "tlb", 0, VAR_11);
    FUNC_16(VAR_0, 0, VAR_11, -1, VAR_12, VAR_4);

    VAR_23 = FUNC_0(VAR_10, VAR_12, &VAR_14);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_6(VAR_14, VAR_24, VAR_8, &VAR_16);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_4(VAR_16, &VAR_2, (void**)&VAR_15);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_3(VAR_16, VAR_15, &VAR_17);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_10(VAR_15, &VAR_18);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_19 = VAR_18->cbSizeInstance;
    VAR_21 = VAR_18->cbAlignment;

    FUNC_12(VAR_15, VAR_18);

    FUNC_11(VAR_15);
    FUNC_5(VAR_16);

    VAR_23 = FUNC_7(VAR_14, &VAR_3, (void**)&VAR_13);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    for(VAR_20 = 0; VAR_7[VAR_20].vt; ++VAR_20)
        FUNC_18(VAR_13, &VAR_7[VAR_20], VAR_22, VAR_17, VAR_19, VAR_21, VAR_9);

    VAR_23 = FUNC_9(VAR_14);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    FUNC_14(VAR_13);
    FUNC_17(0 == FUNC_8(VAR_14), "typelib should have been released\n");

    FUNC_19("after save...\n");

    VAR_23 = FUNC_15(VAR_12, VAR_5, &VAR_13);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_13(VAR_13, 0, &VAR_15);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_23 = FUNC_10(VAR_15, &VAR_18);
    FUNC_17(VAR_23 == VAR_6, "got %08x\n", VAR_23);

    VAR_19 = VAR_18->cbSizeInstance;
    VAR_21 = VAR_18->cbAlignment;

    FUNC_12(VAR_15, VAR_18);
    FUNC_11(VAR_15);

    for(VAR_20 = 0; VAR_7[VAR_20].vt; ++VAR_20)
        FUNC_18(VAR_13, &VAR_7[VAR_20], VAR_22, VAR_17, VAR_19, VAR_21, VAR_1);

    FUNC_17(0 == FUNC_14(VAR_13), "typelib should have been released\n");

    FUNC_1(VAR_11);
}
