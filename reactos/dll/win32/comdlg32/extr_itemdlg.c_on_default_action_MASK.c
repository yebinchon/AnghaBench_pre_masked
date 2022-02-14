
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int options; scalar_t__ dlg_type; size_t filetypeindex; char const* default_ext; int * psia_results; int custom_title; int dlg_hwnd; int peb; TYPE_1__* filterspecs; scalar_t__ filterspec_count; scalar_t__ psi_folder; } ;
struct TYPE_7__ {int pszSpec; } ;
typedef int SFGAOF ;
typedef int PCUITEMID_CHILD_ARRAY ;
typedef int * LPWSTR ;
typedef int LPITEMIDLIST ;
typedef int IUnknown ;
typedef int IShellItem ;
typedef int IShellFolder ;
typedef int HRESULT ;
typedef TYPE_2__ FileDialogImpl ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int **,int*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,int **,int ,int,int,int) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 () ;
 int * FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,int *) ;
 int FUNC_17 (int *,int,int **) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_20 (int ,int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_21 (int ,char*,int ,int) ;



 int FUNC_22 (char*) ;
 char* FUNC_23 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_24 (int *,int *,int,int ,int **) ;
 int FUNC_25 (int **) ;
 int FUNC_26 (int *,int *) ;
 int VAR_14 ;
 int FUNC_27 (int ) ;
 int VAR_15 ;
 int FUNC_28 (char*,int) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*,int *) ;
 int FUNC_31 (TYPE_2__*,int **) ;
 char* FUNC_32 (char*,int ) ;
 int FUNC_33 (char*,char const*) ;
 scalar_t__ FUNC_34 (char*,char*) ;
 int FUNC_35 (char*,char const*) ;
 scalar_t__ FUNC_36 (int *) ;
 int FUNC_37 (int *) ;

__attribute__((used)) static HRESULT FUNC_38(FileDialogImpl *VAR_16)
{
    IShellFolder *VAR_17, *VAR_18;
    LPITEMIDLIST *VAR_19;
    LPITEMIDLIST VAR_20;
    LPWSTR VAR_21, VAR_22 = ((void*)0), VAR_23;
    UINT VAR_24 = 0, VAR_25, VAR_26;
    int VAR_27;
    HRESULT VAR_28, VAR_29 = VAR_1;

    VAR_25 = FUNC_31(VAR_16, &VAR_23);
    if(VAR_25)
    {
        UINT VAR_30;
        VAR_24 = FUNC_3(VAR_23, VAR_25, &VAR_22, &VAR_30);
        FUNC_4(VAR_23);
    }
    if(!VAR_24) return VAR_1;

    VAR_28 = FUNC_26((IUnknown*)VAR_16->psi_folder, &VAR_20);
    if(FUNC_6(VAR_28))
    {
        FUNC_5("Failed to get pidl for current directory.\n");
        FUNC_12(FUNC_10(), 0, VAR_22);
        return VAR_28;
    }

    FUNC_28("Acting on %d file(s).\n", VAR_24);

    VAR_19 = FUNC_11(FUNC_10(), 0, sizeof(LPITEMIDLIST) * VAR_24);
    VAR_27 = 129;
    VAR_21 = VAR_22;

    for(VAR_26 = 0; VAR_26 < VAR_24 && VAR_27 == 129; VAR_26++)
    {
        WCHAR VAR_31[VAR_9];
        VAR_17 = ((void*)0);

        FUNC_1(VAR_20, VAR_21, VAR_31);

        if( (VAR_16->options & VAR_3) &&
            !(VAR_16->options & VAR_2) )
            VAR_27 = 129;
        else
            VAR_27 = 130;

        VAR_27 = FUNC_8(VAR_31, &VAR_17, VAR_16->dlg_hwnd,
                                                   VAR_16->options & ~VAR_2,
                                                   (VAR_16->dlg_type == VAR_8),
                                                   VAR_27);


        if(VAR_27 == 129)
        {
            static const WCHAR VAR_32[] = {'.',0};

            if(VAR_16->dlg_type == VAR_8)
            {
                WCHAR VAR_33[VAR_9], *VAR_34 = ((void*)0);

                if(VAR_16->filterspec_count)
                {
                    VAR_34 = FUNC_32(VAR_33, VAR_16->filterspecs[VAR_16->filetypeindex].pszSpec);
                }
                else if(VAR_16->default_ext)
                {
                    FUNC_35(VAR_33, VAR_32);
                    FUNC_33(VAR_33, VAR_16->default_ext);
                    VAR_34 = VAR_33;
                }

                if(VAR_34)
                {
                    WCHAR *VAR_35 = FUNC_23(VAR_31);
                    if(FUNC_34(VAR_35, VAR_34))
                        FUNC_33(VAR_31, VAR_34);
                }
            }
            else
            {
                if( !(VAR_16->options & VAR_3) && (VAR_16->options & VAR_2) &&
                    !FUNC_22(VAR_31))
                {
                    if(VAR_16->default_ext)
                    {
                        FUNC_33(VAR_31, VAR_32);
                        FUNC_33(VAR_31, VAR_16->default_ext);

                        if(!FUNC_22(VAR_31))
                        {
                            FUNC_7(VAR_16->dlg_hwnd, 0, VAR_6);
                            VAR_27 = 130;
                        }
                    }
                    else
                    {
                        FUNC_7(VAR_16->dlg_hwnd, 0, VAR_6);
                        VAR_27 = 130;
                    }
                }
            }
        }

        VAR_19[VAR_26] = FUNC_2(VAR_31);

        if(VAR_17 && !(VAR_27 == 130))
            FUNC_15(VAR_17);

        VAR_21 += (WCHAR)FUNC_36(VAR_21) + 1;
    }

    FUNC_12(FUNC_10(), 0, VAR_22);
    FUNC_14(VAR_20);

    if((VAR_16->options & VAR_5) && VAR_27 == 130)
        VAR_27 = 129;

    switch(VAR_27)
    {
    case 128:
        FUNC_9("Filtering not implemented.\n");
        break;

    case 130:
        VAR_28 = FUNC_13(VAR_16->peb, (IUnknown*)VAR_17, VAR_12);
        if(FUNC_6(VAR_28))
            FUNC_5("Failed to browse to directory: %08x\n", VAR_28);

        FUNC_15(VAR_17);
        break;

    case 129:
        VAR_28 = FUNC_25(&VAR_18);
        if(FUNC_27(VAR_28))
        {
            if(VAR_16->psia_results)
            {
                FUNC_18(VAR_16->psia_results);
                VAR_16->psia_results = ((void*)0);
            }

            VAR_28 = FUNC_24(((void*)0), VAR_18, VAR_24, (PCUITEMID_CHILD_ARRAY)VAR_19,
                                        &VAR_16->psia_results);

            FUNC_15(VAR_18);

            if(FUNC_6(VAR_28))
                break;

            if(VAR_16->options & VAR_5)
            {
                SFGAOF VAR_36;
                VAR_28 = FUNC_16(VAR_16->psia_results, VAR_14, VAR_13, &VAR_36);
                if(VAR_28 != VAR_15)
                {
                    WCHAR VAR_37[64];
                    FUNC_20(VAR_0, VAR_7, VAR_37, FUNC_0(VAR_37));

                    FUNC_21(VAR_16->dlg_hwnd, VAR_37, VAR_16->custom_title, VAR_11 | VAR_10);

                    FUNC_18(VAR_16->psia_results);
                    VAR_16->psia_results = ((void*)0);
                    break;
                }
            }

            if((VAR_16->options & VAR_4) && VAR_16->dlg_type == VAR_8)
            {
                IShellItem *VAR_38;

                for (VAR_26=0; FUNC_27(VAR_28) && VAR_26<VAR_24; VAR_26++)
                {
                    VAR_28 = FUNC_17(VAR_16->psia_results, VAR_26, &VAR_38);
                    if (FUNC_27(VAR_28))
                    {
                        if (FUNC_37(VAR_38))
                            VAR_28 = FUNC_30(VAR_16, VAR_38);

                        FUNC_19(VAR_38);
                    }
                }

                if (FUNC_6(VAR_28))
                    break;
            }

            if(FUNC_29(VAR_16) == VAR_15)
                VAR_29 = VAR_15;
        }
        break;

    default:
        FUNC_5("Failed.\n");
        break;
    }


    for(VAR_26 = 0; VAR_26 < VAR_24; VAR_26++)
        FUNC_14(VAR_19[VAR_26]);
    FUNC_12(FUNC_10(), 0, VAR_19);


    return VAR_29;
}
