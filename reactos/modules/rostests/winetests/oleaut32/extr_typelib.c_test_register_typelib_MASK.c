
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid ;
typedef int WORD ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {scalar_t__ typekind; int wTypeFlags; int guid; } ;
typedef scalar_t__ TYPEKIND ;
typedef TYPE_1__ TYPEATTR ;
typedef int REGSAM ;
typedef int LONG ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef int HREFTYPE ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,TYPE_1__**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *,int ,int **) ;
 int VAR_10 ;
 int FUNC_12 (int ,int ,char const*,int,int *,int) ;
 int VAR_11 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int ,int,int *) ;
 int FUNC_15 (int *,int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (int *,int *,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int *,int,int ,int ,int ) ;
 int FUNC_18 (int ,int ,int *,int,char*,int,int *,int *) ;
 char* FUNC_19 (int) ;
 scalar_t__ VAR_22 ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 (int ,scalar_t__*) ;
 int FUNC_22 (int *,int *,int *) ;
 int FUNC_23 (int *,int,int ,int ,int ) ;
 int FUNC_24 (char*,char*,char*) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*) ;

__attribute__((used)) static void FUNC_27(BOOL VAR_23)
{
    HRESULT VAR_24;
    WCHAR VAR_25[VAR_10];
    const char *VAR_26;
    ITypeLib *VAR_27;
    WCHAR VAR_28[40];
    char VAR_29[VAR_10], VAR_30[40];
    LONG VAR_31, VAR_32;
    UINT VAR_33, VAR_34;
    HKEY VAR_35;
    REGSAM VAR_36 = (sizeof(void*) == 8 ? VAR_6 : VAR_7);
    BOOL VAR_37 = VAR_3;
    struct
    {
        TYPEKIND kind;
        WORD flags;
    } VAR_38[] =
    {
        { VAR_16, 0 },
        { VAR_16, VAR_18 },
        { VAR_16, VAR_20 },
        { VAR_16, VAR_18 | VAR_20 },
        { VAR_15, VAR_19 },
        { VAR_15, VAR_19 },
        { VAR_15, VAR_18 | VAR_19 },
        { VAR_15, VAR_18 | VAR_19 },
        { VAR_15, VAR_18 },
        { VAR_15, VAR_18 },
        { VAR_15, VAR_18 },
        { VAR_16, VAR_18 },
        { VAR_16, VAR_18 },
        { VAR_17, 0 }
    };

    FUNC_25("Starting %s typelib registration tests\n",
          VAR_23 ? "system" : "user");

    if (!VAR_23 && (!&FUNC_22 || !&FUNC_23))
    {
        FUNC_26("User typelib registration functions are not available\n");
        return;
    }

    if (&FUNC_21)
        FUNC_21(FUNC_2(), &VAR_37);

    VAR_26 = FUNC_19(3);
    FUNC_12(VAR_0, 0, VAR_26, -1, VAR_25, VAR_10);

    VAR_24 = FUNC_11(VAR_25, VAR_11, &VAR_27);
    FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

    if (VAR_23)
        VAR_24 = FUNC_15(VAR_27, VAR_25, ((void*)0));
    else
        VAR_24 = FUNC_22(VAR_27, VAR_25, ((void*)0));
    if (VAR_24 == VAR_21)
    {
        FUNC_26("Insufficient privileges to register typelib in the registry\n");
        FUNC_10(VAR_27);
        FUNC_1(VAR_26);
        return;
    }
    FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

    VAR_33 = FUNC_9(VAR_27);
    FUNC_20(VAR_33 == 14, "got %d\n", VAR_33);

    for(VAR_34 = 0; VAR_34 < VAR_33; VAR_34++)
    {
        ITypeInfo *VAR_39;
        TYPEATTR *VAR_40;

        VAR_24 = FUNC_8(VAR_27, VAR_34, &VAR_39);
        FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

        VAR_24 = FUNC_5(VAR_39, &VAR_40);
        FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

        FUNC_20(VAR_40->typekind == VAR_38[VAR_34].kind, "%d: got kind %d\n", VAR_34, VAR_40->typekind);
        FUNC_20(VAR_40->wTypeFlags == VAR_38[VAR_34].flags, "%d: got flags %04x\n", VAR_34, VAR_40->wTypeFlags);

        if(VAR_40->typekind == VAR_15 && (VAR_40->wTypeFlags & VAR_19))
        {
            HREFTYPE VAR_41;
            ITypeInfo *VAR_42;
            TYPEATTR *VAR_43;

            VAR_24 = FUNC_4(VAR_39, -1, &VAR_41);
            FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

            VAR_24 = FUNC_3(VAR_39, VAR_41, &VAR_42);
            FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

            VAR_24 = FUNC_5(VAR_42, &VAR_43);
            FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

            FUNC_20(VAR_43->typekind == VAR_16, "%d: got kind %d\n", VAR_34, VAR_43->typekind);
            FUNC_20(VAR_43->wTypeFlags == (VAR_38[VAR_34].flags | VAR_20),
                "%d: got flags %04x\n", VAR_34, VAR_43->wTypeFlags);

            FUNC_7(VAR_42, VAR_43);
            FUNC_6(VAR_42);

        }

        FUNC_16(&VAR_40->guid, VAR_28, FUNC_0(VAR_28));
        FUNC_18(VAR_0, 0, VAR_28, -1, VAR_30, sizeof(VAR_30), ((void*)0), ((void*)0));
        FUNC_24(VAR_29, "Interface\\%s", VAR_30);



        if((VAR_40->typekind == VAR_16 && (VAR_40->wTypeFlags & VAR_20)) ||
           VAR_40->typekind == VAR_15)
            VAR_32 = VAR_2;
        else
            VAR_32 = VAR_1;

        VAR_31 = FUNC_14(VAR_4, VAR_29, 0, VAR_5, &VAR_35);
        FUNC_20(VAR_31 == VAR_32, "%d: got %d\n", VAR_34, VAR_31);
        if(VAR_31 == VAR_2) FUNC_13(VAR_35);


        if (VAR_22 || VAR_37)
        {
            VAR_31 = FUNC_14(VAR_4, VAR_29, 0, VAR_5 | VAR_36, &VAR_35);
            FUNC_20(VAR_31 == VAR_32, "%d: got %d\n", VAR_34, VAR_31);
            if(VAR_31 == VAR_2) FUNC_13(VAR_35);
        }

        FUNC_7(VAR_39, VAR_40);
        FUNC_6(VAR_39);
    }

    if (VAR_23)
        VAR_24 = FUNC_17(&VAR_8, 1, 0, VAR_9, VAR_22 ? VAR_13 : VAR_12);
    else
        VAR_24 = FUNC_23(&VAR_8, 1, 0, VAR_9, VAR_22 ? VAR_13 : VAR_12);
    FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

    for(VAR_34 = 0; VAR_34 < VAR_33; VAR_34++)
    {
        ITypeInfo *VAR_44;
        TYPEATTR *VAR_45;

        VAR_24 = FUNC_8(VAR_27, VAR_34, &VAR_44);
        FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

        VAR_24 = FUNC_5(VAR_44, &VAR_45);
        FUNC_20(VAR_24 == VAR_14, "got %08x\n", VAR_24);

        if((VAR_45->typekind == VAR_16 && (VAR_45->wTypeFlags & VAR_20)) ||
           VAR_45->typekind == VAR_15)
        {
            FUNC_16(&VAR_45->guid, VAR_28, FUNC_0(VAR_28));
            FUNC_18(VAR_0, 0, VAR_28, -1, VAR_30, sizeof(VAR_30), ((void*)0), ((void*)0));
            FUNC_24(VAR_29, "Interface\\%s", VAR_30);

            VAR_31 = FUNC_14(VAR_4, VAR_29, 0, VAR_5, &VAR_35);
            FUNC_20(VAR_31 == VAR_1, "Interface registry remains in %s (%d)\n", VAR_29, VAR_34);
            if (VAR_22 || VAR_37)
            {
                VAR_31 = FUNC_14(VAR_4, VAR_29, 0, VAR_5 | VAR_36, &VAR_35);
                FUNC_20(VAR_31 == VAR_1, "Interface registry remains in %s (%d)\n", VAR_29, VAR_34);
            }
        }
        FUNC_7(VAR_44, VAR_45);
        FUNC_6(VAR_44);
    }

    FUNC_10(VAR_27);
    FUNC_1( VAR_26 );
}
