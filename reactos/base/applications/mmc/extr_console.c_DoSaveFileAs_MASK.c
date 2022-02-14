
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int saveas ;
struct TYPE_11__ {int lStructSize; char* lpstrFilter; int nMaxFile; int Flags; char* lpstrDefExt; int * lpstrFile; int hInstance; int hwndOwner; } ;
struct TYPE_10__ {int hwnd; struct TYPE_10__* pFileName; } ;
typedef int TCHAR ;
typedef TYPE_1__* PCONSOLE_CHILDFRM_WND ;
typedef TYPE_2__ OPENFILENAME ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static BOOL
FUNC_9(
    HWND VAR_7,
    PCONSOLE_CHILDFRM_WND VAR_8)
{
    OPENFILENAME VAR_9;
    TCHAR VAR_10[VAR_1];

    FUNC_0("pChildInfo %p\n", VAR_8);
    FUNC_0("FileName %S\n", VAR_8->pFileName);

    FUNC_6(&VAR_9, sizeof(VAR_9));

    if (VAR_8->pFileName != ((void*)0))
    {
        FUNC_8(VAR_10, VAR_8->pFileName);
    }
    else
    {
        FUNC_3(VAR_8->hwnd, VAR_10, VAR_1);
        FUNC_7(VAR_10, FUNC_5(".msc"));
    }

    VAR_9.lStructSize = sizeof(OPENFILENAME);
    VAR_9.hwndOwner = VAR_7;
    VAR_9.hInstance = VAR_6;
    VAR_9.lpstrFilter = L"MSC Files\0*.msc\0";
    VAR_9.lpstrFile = VAR_10;
    VAR_9.nMaxFile = VAR_1;
    VAR_9.Flags = VAR_2 | VAR_4 | VAR_3;
    VAR_9.lpstrDefExt = L"msc";

    if (FUNC_2(&VAR_9))
    {



        FUNC_4(VAR_8, VAR_10);

        if (FUNC_1(VAR_7, VAR_8))
        {

            return VAR_5;
        }
        else
        {
            FUNC_4(VAR_8, ((void*)0));
            return VAR_0;
        }
    }
    else
    {
        return VAR_0;
    }
}
