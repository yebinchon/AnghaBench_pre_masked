
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int name ;
struct TYPE_2__ {char* pszText; int cchTextMax; int * hItem; int mask; int member_0; } ;
typedef TYPE_1__ TVITEMA ;
typedef int LPARAM ;
typedef int HWND ;
typedef int * HTREEITEM ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(HWND VAR_6, HTREEITEM VAR_7, char *VAR_8)
{
    TVITEMA VAR_9 = { 0 };
    HTREEITEM VAR_10;
    char VAR_11[16];

    if (!VAR_7)
    {
        VAR_7 = (HTREEITEM)FUNC_0(VAR_6, VAR_5, VAR_2, 0);
        VAR_8[0] = 0;
    }

    VAR_10 = (HTREEITEM)FUNC_0(VAR_6, VAR_5, VAR_0, (LPARAM)VAR_7);

    VAR_9.mask = VAR_3;
    VAR_9.hItem = VAR_7;
    VAR_9.pszText = VAR_11;
    VAR_9.cchTextMax = sizeof(VAR_11);
    FUNC_0(VAR_6, VAR_4, 0, (LPARAM)&VAR_9);
    FUNC_1(VAR_8, VAR_9.pszText);

    while (VAR_10 != ((void*)0))
    {
        FUNC_2(VAR_6, VAR_10, VAR_8);
        VAR_10 = (HTREEITEM)FUNC_0(VAR_6, VAR_5, VAR_1, (LPARAM)VAR_10);
    }
}
