
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_9__ {int nMaxFile; int nMaxFileTitle; int Flags; scalar_t__ lStructSize; int FlagsEx; int dwReserved; int pvReserved; int lpTemplateName; void* lpstrDefExt; int nFileExtension; int nFileOffset; int lpstrTitle; int lpstrInitialDir; void* lpstrFileTitle; void* lpstrFile; int nFilterIndex; scalar_t__ nMaxCustFilter; void* lpstrCustomFilter; void* lpstrFilter; int hInstance; int hwndOwner; } ;
struct TYPE_8__ {int nMaxFile; int nMaxFileTitle; int Flags; int FlagsEx; int dwReserved; int pvReserved; scalar_t__ lpTemplateName; int lpstrDefExt; int nFileExtension; int nFileOffset; scalar_t__ lpstrTitle; scalar_t__ lpstrInitialDir; int lpstrFileTitle; int lpstrFile; int nFilterIndex; scalar_t__ nMaxCustFilter; scalar_t__* lpstrCustomFilter; scalar_t__* lpstrFilter; int hInstance; int hwndOwner; } ;
typedef TYPE_2__ OPENFILENAMEA ;
typedef int LPWSTR ;
typedef TYPE_3__* LPOPENFILENAMEW ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int) ;
 void* FUNC_2 (scalar_t__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int) ;

__attribute__((used)) static void FUNC_9(const OPENFILENAMEA *VAR_5, LPOPENFILENAMEW VAR_6, BOOL VAR_7)
{
    UNICODE_STRING VAR_8;

    VAR_6->hwndOwner = VAR_5->hwndOwner;
    VAR_6->hInstance = VAR_5->hInstance;
    if (VAR_5->lpstrFilter)
        VAR_6->lpstrFilter = FUNC_2(VAR_5->lpstrFilter, 0);

    if ((VAR_5->lpstrCustomFilter) && (*(VAR_5->lpstrCustomFilter)))
        VAR_6->lpstrCustomFilter = FUNC_2(VAR_5->lpstrCustomFilter, VAR_5->nMaxCustFilter);
    VAR_6->nMaxCustFilter = VAR_5->nMaxCustFilter;
    VAR_6->nFilterIndex = VAR_5->nFilterIndex;
    VAR_6->nMaxFile = VAR_5->nMaxFile;
    VAR_6->lpstrFile = FUNC_1(VAR_5->lpstrFile, VAR_6->nMaxFile);
    VAR_6->nMaxFileTitle = VAR_5->nMaxFileTitle;
    VAR_6->lpstrFileTitle = FUNC_1(VAR_5->lpstrFileTitle, VAR_6->nMaxFileTitle);
    if (VAR_5->lpstrInitialDir)
    {
        FUNC_5 (&VAR_8,VAR_5->lpstrInitialDir);
        VAR_6->lpstrInitialDir = VAR_8.Buffer;
    }
    if (VAR_5->lpstrTitle) {
        FUNC_5 (&VAR_8, VAR_5->lpstrTitle);
        VAR_6->lpstrTitle = VAR_8.Buffer;
    } else {
        WCHAR VAR_9[16];
        LPWSTR VAR_10;
        int VAR_11;
        FUNC_4(VAR_0, VAR_7 ? VAR_1 : VAR_2, VAR_9, FUNC_0(VAR_9));
        VAR_11 = FUNC_7(VAR_9)+1;
        VAR_10 = FUNC_6(VAR_11 * sizeof(WCHAR));
        FUNC_8(VAR_10, VAR_9, VAR_11 * sizeof(WCHAR));
        VAR_6->lpstrTitle = VAR_10;
    }
    VAR_6->Flags = VAR_5->Flags;
    VAR_6->nFileOffset = VAR_5->nFileOffset;
    VAR_6->nFileExtension = VAR_5->nFileExtension;
    VAR_6->lpstrDefExt = FUNC_1(VAR_5->lpstrDefExt, 3);
    if ((VAR_5->Flags & VAR_3) && (VAR_5->lpTemplateName))
    {
        if (!FUNC_3(VAR_5->lpTemplateName))
        {
            FUNC_5 (&VAR_8,VAR_5->lpTemplateName);
            VAR_6->lpTemplateName = VAR_8.Buffer;
        }
        else
            VAR_6->lpTemplateName = (LPCWSTR) VAR_5->lpTemplateName;
    }
    if (VAR_6->lStructSize > VAR_4)
    {
        VAR_6->pvReserved = VAR_5->pvReserved;
        VAR_6->dwReserved = VAR_5->dwReserved;
        VAR_6->FlagsEx = VAR_5->FlagsEx;
    }
}
