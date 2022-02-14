
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int header; int bsc; } ;
typedef TYPE_1__ task_navigate_bsc_t ;
typedef scalar_t__ WCHAR ;
typedef int const VARIANT ;
typedef int ULONG ;
struct TYPE_10__ {int * url; scalar_t__ doc_navigate; int ready_state; } ;
typedef int SAFEARRAY ;
typedef int * PBYTE ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef TYPE_2__ DocHost ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_10 (int const*) ;
 int ** FUNC_11 (int const*) ;
 scalar_t__* FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_2__*,scalar_t__*,scalar_t__*,int *,int,int ) ;
 int FUNC_17 (TYPE_2__*,scalar_t__*,int *,int,scalar_t__*) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (scalar_t__*) ;
 TYPE_1__* FUNC_20 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_21 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_22 (TYPE_2__*,int ) ;

HRESULT FUNC_23(DocHost *VAR_13, LPCWSTR VAR_14, const VARIANT *VAR_15,
                     const VARIANT *VAR_16, VARIANT *VAR_17, VARIANT *VAR_18)
{
    SAFEARRAY *VAR_19 = ((void*)0);
    PBYTE VAR_20 = ((void*)0);
    ULONG VAR_21 = 0;
    LPWSTR VAR_22 = ((void*)0);
    HRESULT VAR_23 = VAR_2;

    FUNC_8("navigating to %s\n", FUNC_19(VAR_14));

    if((VAR_15 && FUNC_14(VAR_15) != VAR_9 && FUNC_14(VAR_15) != VAR_10)
       || (VAR_16 && FUNC_14(VAR_16) != VAR_9 && FUNC_14(VAR_16) != VAR_10))
        FUNC_2("Unsupported args (Flags %s; TargetFrameName %s)\n", FUNC_18(VAR_15), FUNC_18(VAR_16));

    if(VAR_17) {
        if(FUNC_14(VAR_17) & VAR_7)
            VAR_19 = FUNC_13(VAR_17) ? *FUNC_11(VAR_17) : FUNC_10(VAR_17);
        else
            FUNC_15("Invalid post data %s\n", FUNC_18(VAR_17));
    }

    if(VAR_19) {
        LONG VAR_24;
        FUNC_4(VAR_19, (void**)&VAR_20);
        FUNC_6(VAR_19, 1, &VAR_24);
        VAR_21 = (VAR_24+1) * FUNC_5(VAR_19);
    }

    if(VAR_18 && FUNC_14(VAR_18) == VAR_8) {
        VAR_22 = FUNC_12(VAR_18);
        FUNC_8("Headers: %s\n", FUNC_19(VAR_22));
    }

    FUNC_22(VAR_13, VAR_1);
    VAR_13->ready_state = VAR_1;

    if(VAR_13->doc_navigate) {
        WCHAR VAR_25[VAR_0];

        if(FUNC_3(VAR_14)) {
            VAR_25[0] = 0;
        }else {
            DWORD VAR_26;

            VAR_26 = FUNC_0(VAR_25);
            VAR_23 = FUNC_9(VAR_14, VAR_25, &VAR_26,
                    VAR_6 | VAR_5 | VAR_4);
            if(FUNC_1(VAR_23)) {
                FUNC_15("UrlApplyScheme failed: %08x\n", VAR_23);
                VAR_25[0] = 0;
            }
        }

        VAR_23 = FUNC_16(VAR_13, *VAR_25 ? VAR_25 : VAR_14, VAR_22, VAR_20,
                VAR_21, VAR_3);
    }else {
        task_navigate_bsc_t *VAR_27;

        VAR_27 = FUNC_20(sizeof(*VAR_27));
        VAR_27->bsc = FUNC_17(VAR_13, VAR_14, VAR_20, VAR_21, VAR_22);
        FUNC_21(VAR_13, &VAR_27->header, VAR_11, VAR_12, VAR_13->url == ((void*)0));
    }

    if(VAR_20)
        FUNC_7(VAR_19);

    return VAR_23;
}
