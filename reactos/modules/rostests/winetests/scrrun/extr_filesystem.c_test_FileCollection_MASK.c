
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int LONG ;
typedef int IUnknown ;
typedef int IFolder ;
typedef int IFileCollection ;
typedef int IFile ;
typedef int IEnumVARIANT ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int ,int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,void**) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int,int *,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,int **) ;
 int FUNC_14 (int ,int *,int **) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int **) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int **) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (int *,int *,void**) ;
 int FUNC_20 (int *) ;
 int VAR_10 ;
 int FUNC_21 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_22 (char*) ;
 int FUNC_23 (int *) ;
 int VAR_13 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int VAR_14 ;
 int FUNC_28 (char const*,char*) ;
 int FUNC_29 (char*,char const*) ;
 int FUNC_30 (int *,char const*) ;
 int FUNC_31 (char*,char*) ;
 int FUNC_32 (int,char*,int,...) ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static void FUNC_35(void)
{
    static const WCHAR VAR_15[] = {'\\','f','o','o',0};
    static const WCHAR VAR_16[] = {'\\','a',0};
    static const WCHAR VAR_17[] = {'\\','b',0};
    static const WCHAR VAR_18[] = {'\\','c',0};
    WCHAR VAR_19[VAR_10], VAR_20[VAR_10];
    IFolder *VAR_21;
    IFileCollection *VAR_22;
    IFile *VAR_23;
    IEnumVARIANT *VAR_24, *VAR_25;
    LONG VAR_26, VAR_27, VAR_28, VAR_29;
    IUnknown *VAR_30, *VAR_31;
    ULONG VAR_32;
    VARIANT VAR_33, VAR_34[2];
    HRESULT VAR_35;
    BSTR VAR_36;
    HANDLE VAR_37, VAR_38, VAR_39;
    int VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;

    FUNC_28(VAR_15, VAR_19);
    FUNC_1(VAR_19, ((void*)0));

    VAR_36 = FUNC_22(VAR_19);
    VAR_35 = FUNC_14(VAR_14, VAR_36, &VAR_21);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_23(VAR_36);

    VAR_35 = FUNC_18(VAR_21, ((void*)0));
    FUNC_32(VAR_35 == VAR_4, "got 0x%08x\n", VAR_35);

    FUNC_31(VAR_20, VAR_19);
    FUNC_29(VAR_20, VAR_16);
    VAR_37 = FUNC_2(VAR_20, VAR_6 | VAR_7, 0, ((void*)0), VAR_2,
                         VAR_5, 0);
    FUNC_31(VAR_20, VAR_19);
    FUNC_29(VAR_20, VAR_17);
    VAR_38 = FUNC_2(VAR_20, VAR_6 | VAR_7, 0, ((void*)0), VAR_2,
                         VAR_5, 0);

    VAR_35 = FUNC_18(VAR_21, &VAR_22);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_33(VAR_22, &VAR_1);
    FUNC_17(VAR_21);

    VAR_26 = 0;
    VAR_35 = FUNC_12(VAR_22, &VAR_26);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_26 == 2, "got %d\n", VAR_26);

    FUNC_31(VAR_20, VAR_19);
    FUNC_29(VAR_20, VAR_18);
    VAR_39 = FUNC_2(VAR_20, VAR_6 | VAR_7, 0, ((void*)0), VAR_2,
                         VAR_5, 0);


    VAR_26 = 0;
    VAR_35 = FUNC_12(VAR_22, &VAR_26);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_26 == 3, "got %d\n", VAR_26);

    VAR_35 = FUNC_13(VAR_22, ((void*)0));
    FUNC_32(VAR_35 == VAR_4, "got 0x%08x\n", VAR_35);

    VAR_35 = FUNC_10(VAR_22, &VAR_8, (void**)&VAR_30);
    FUNC_32(VAR_35 == VAR_3, "got 0x%08x\n", VAR_35);


    VAR_27 = FUNC_3(VAR_22);

    VAR_30 = ((void*)0);
    VAR_35 = FUNC_13(VAR_22, &VAR_30);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);

    VAR_28 = FUNC_3(VAR_22);
    FUNC_32(VAR_28 == VAR_27 + 1, "got %d, %d\n", VAR_28, VAR_27);

    VAR_31 = ((void*)0);
    VAR_35 = FUNC_13(VAR_22, &VAR_31);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_30 != VAR_31, "got %p, %p\n", *VAR_31, VAR_30);
    FUNC_20(VAR_31);


    VAR_27 = FUNC_3(VAR_22);
    VAR_35 = FUNC_19(VAR_30, &VAR_8, (void**)&VAR_24);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    VAR_28 = FUNC_3(VAR_22);
    FUNC_32(VAR_28 == VAR_27, "got %d, %d\n", VAR_28, VAR_27);


    VAR_35 = FUNC_5(VAR_24, &VAR_25);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_25 != VAR_24, "got %p, %p\n", *VAR_24, VAR_25);
    FUNC_7(VAR_25);

    VAR_35 = FUNC_8(VAR_24);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);

    for (VAR_29 = 0; VAR_29 < 3; VAR_29++)
    {
        FUNC_27(&VAR_33);
        VAR_32 = 0;
        VAR_35 = FUNC_6(VAR_24, 1, &VAR_33, &VAR_32);
        FUNC_32(VAR_35 == VAR_12, "%d: got 0x%08x\n", VAR_29, VAR_35);
        FUNC_32(VAR_32 == 1, "%d: got %d\n", VAR_29, VAR_32);
        FUNC_32(FUNC_25(&VAR_33) == VAR_13, "%d: got type %d\n", VAR_29, FUNC_25(&VAR_33));

        VAR_35 = FUNC_4(FUNC_24(&VAR_33), &VAR_9, (void **)&VAR_23);
        FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
        FUNC_33(VAR_23, &VAR_0);

        VAR_36 = ((void*)0);
        VAR_35 = FUNC_16(VAR_23, &VAR_36);
        FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
        if (!FUNC_30(VAR_36, VAR_16 + 1))
            VAR_40++;
        else if (!FUNC_30(VAR_36, VAR_17 + 1))
            VAR_41++;
        else if (!FUNC_30(VAR_36, VAR_18 + 1))
            VAR_42++;
        else
            FUNC_32(0, "unexpected file %s was found\n", FUNC_34(VAR_36));
        FUNC_23(VAR_36);

        FUNC_15(VAR_23);
        FUNC_26(&VAR_33);
    }

    FUNC_32(VAR_40 == 1 && VAR_41 == 1 && VAR_42 == 1,
       "each file should be found 1 time instead of %d/%d/%d\n",
       VAR_40, VAR_41, VAR_42);

    FUNC_27(&VAR_33);
    VAR_32 = -1;
    VAR_35 = FUNC_6(VAR_24, 1, &VAR_33, &VAR_32);
    FUNC_32(VAR_35 == VAR_11, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_32 == 0, "got %d\n", VAR_32);

    VAR_35 = FUNC_8(VAR_24);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    VAR_35 = FUNC_9(VAR_24, 2);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    VAR_35 = FUNC_9(VAR_24, 0);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);

    FUNC_27(&VAR_34[0]);
    FUNC_27(&VAR_34[1]);
    VAR_32 = -1;
    VAR_35 = FUNC_6(VAR_24, 0, VAR_34, &VAR_32);
    FUNC_32(VAR_35 == VAR_12, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_32 == 0, "got %d\n", VAR_32);
    VAR_32 = -1;
    VAR_35 = FUNC_6(VAR_24, 2, VAR_34, &VAR_32);
    FUNC_32(VAR_35 == VAR_11, "got 0x%08x\n", VAR_35);
    FUNC_32(VAR_32 == 1, "got %d\n", VAR_32);
    FUNC_32(FUNC_25(&VAR_34[0]) == VAR_13, "got type %d\n", FUNC_25(&VAR_34[0]));
    FUNC_26(&VAR_34[0]);
    FUNC_26(&VAR_34[1]);

    FUNC_7(VAR_24);
    FUNC_20(VAR_30);

    FUNC_0(VAR_37);
    FUNC_0(VAR_38);
    FUNC_0(VAR_39);
    FUNC_21(VAR_19);

    FUNC_11(VAR_22);
}
