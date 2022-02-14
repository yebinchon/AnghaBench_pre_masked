
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT_PTR ;
typedef int UINT ;
struct TYPE_3__ {int hTitleIcon; int * pszTitle; int hwndSelf; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LPCWSTR ;
typedef int LPCSTR ;
typedef int HICON ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int *,int) ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (scalar_t__) ;
 int * VAR_4 ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_8 (TOOLTIPS_INFO *VAR_5, UINT_PTR VAR_6, LPCWSTR VAR_7,
                    BOOL VAR_8)
{
    UINT VAR_9;

    FUNC_4("hwnd = %p, title = %s, icon = %p\n", VAR_5->hwndSelf, FUNC_5(VAR_7),
        (void*)VAR_6);

    FUNC_2(VAR_5->pszTitle);

    if (VAR_7)
    {
        if (VAR_8)
        {
            VAR_9 = (FUNC_7(VAR_7)+1)*sizeof(WCHAR);
            VAR_5->pszTitle = FUNC_0(VAR_9);
            if (!VAR_5->pszTitle)
                return VAR_1;
            FUNC_6(VAR_5->pszTitle, VAR_7, VAR_9);
        }
        else
        {
            VAR_9 = sizeof(WCHAR)*FUNC_3(VAR_0, 0, (LPCSTR)VAR_7, -1, ((void*)0), 0);
            VAR_5->pszTitle = FUNC_0(VAR_9);
            if (!VAR_5->pszTitle)
                return VAR_1;
            FUNC_3(VAR_0, 0, (LPCSTR)VAR_7, -1, VAR_5->pszTitle, VAR_9/sizeof(WCHAR));
        }
    }
    else
        VAR_5->pszTitle = ((void*)0);

    if (VAR_6 <= VAR_3)
        VAR_5->hTitleIcon = VAR_4[VAR_6];
    else
        VAR_5->hTitleIcon = FUNC_1((HICON)VAR_6);

    FUNC_4("icon = %p\n", VAR_5->hTitleIcon);

    return VAR_2;
}
