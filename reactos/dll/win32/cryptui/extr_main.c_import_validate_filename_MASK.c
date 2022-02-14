
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hCertStore; } ;
struct TYPE_4__ {TYPE_1__ u; int dwSubjectChoice; } ;
struct ImportWizData {int * pwszWizardTitle; int dwFlags; void* freeSource; TYPE_2__ importSrc; int contentType; } ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int HWND ;
typedef scalar_t__ HCERTSTORE ;
typedef scalar_t__ HANDLE ;
typedef void* BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int *,int ,int ,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,int *,int *,int) ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_11 (int ,scalar_t__) ;
 int VAR_16 ;
 int FUNC_12 (int ,int ,int *,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_16(HWND VAR_17, struct ImportWizData *VAR_18,
 LPCWSTR VAR_19)
{
    HANDLE VAR_20;
    BOOL VAR_21 = VAR_1;

    VAR_20 = FUNC_2(VAR_19, VAR_5, VAR_2, ((void*)0),
     VAR_14, 0, ((void*)0));
    if (VAR_20 != VAR_10)
    {
        HCERTSTORE VAR_22 = FUNC_15(VAR_18->dwFlags, VAR_19,
         &VAR_18->contentType);
        int VAR_23 = 0;

        if (!VAR_22)
            VAR_23 = VAR_6;
        else if (!FUNC_11(VAR_18->dwFlags, VAR_22))
            VAR_23 = VAR_8;
        else
        {
            VAR_18->importSrc.dwSubjectChoice =
             VAR_0;
            VAR_18->importSrc.u.hCertStore = VAR_22;
            VAR_18->freeSource = VAR_15;
            VAR_21 = VAR_15;
        }
        if (VAR_23)
        {
            FUNC_12(VAR_18->dwFlags, VAR_17, VAR_18->pwszWizardTitle,
             VAR_23);
        }
        FUNC_1(VAR_20);
    }
    else
    {
        WCHAR VAR_24[VAR_11], VAR_25[VAR_11];
        LPCWSTR VAR_26;
        LPWSTR VAR_27, VAR_28;

        if (VAR_18->pwszWizardTitle)
            VAR_26 = VAR_18->pwszWizardTitle;
        else
        {
            FUNC_8(VAR_16, VAR_9, VAR_24, FUNC_0(VAR_24));
            VAR_26 = VAR_24;
        }
        FUNC_8(VAR_16, VAR_7, VAR_25, FUNC_0(VAR_25));
        FUNC_3(
         VAR_3 | VAR_4, ((void*)0),
         FUNC_4(), 0, (LPWSTR) &VAR_27, 0, ((void*)0));
        VAR_28 = FUNC_6(FUNC_5(), 0,
         (FUNC_14(VAR_25) + FUNC_14(VAR_19) + FUNC_14(VAR_27) + 3)
         * sizeof(WCHAR));
        if (VAR_28)
        {
            LPWSTR VAR_29 = VAR_28;

            FUNC_13(VAR_29, VAR_25);
            VAR_29 += FUNC_14(VAR_25);
            FUNC_13(VAR_29, VAR_19);
            VAR_29 += FUNC_14(VAR_19);
            *VAR_29++ = ':';
            *VAR_29++ = '\n';
            FUNC_13(VAR_29, VAR_27);
            FUNC_10(VAR_17, VAR_28, VAR_26, VAR_12 | VAR_13);
            FUNC_7(FUNC_5(), 0, VAR_28);
        }
        FUNC_9(VAR_27);
    }
    return VAR_21;
}
