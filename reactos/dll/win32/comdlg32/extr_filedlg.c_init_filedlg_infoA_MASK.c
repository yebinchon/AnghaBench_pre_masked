
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void WCHAR ;
struct TYPE_10__ {int unicode; TYPE_1__* ofnInfos; } ;
struct TYPE_9__ {int nMaxFile; scalar_t__* lpstrCustomFilter; scalar_t__* lpstrFilter; scalar_t__* lpstrFile; int lpstrTitle; int lpstrDefExt; int lpstrInitialDir; } ;
struct TYPE_8__ {void* lpstrFile; int nMaxFile; void* lpstrCustomFilter; void* lpstrInitialDir; void* lpstrFilter; void* lpstrTitle; void* lpstrDefExt; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef TYPE_2__ OPENFILENAMEA ;
typedef scalar_t__* LPCSTR ;
typedef TYPE_3__ FileOpenDlgInfos ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*,int,void*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6(OPENFILENAMEA *VAR_2, FileOpenDlgInfos *VAR_3)
{
    OPENFILENAMEW VAR_4;
    int VAR_5;

    VAR_4 = *(OPENFILENAMEW *)VAR_2;

    VAR_4.lpstrInitialDir = FUNC_3(VAR_2->lpstrInitialDir);
    VAR_4.lpstrDefExt = FUNC_3(VAR_2->lpstrDefExt);
    VAR_4.lpstrTitle = FUNC_3(VAR_2->lpstrTitle);

    if (VAR_2->lpstrFile)
    {
        VAR_5 = FUNC_0(VAR_0, 0, VAR_2->lpstrFile, VAR_2->nMaxFile, ((void*)0), 0);
        VAR_4.lpstrFile = FUNC_1(VAR_5 * sizeof(WCHAR));
        FUNC_0(VAR_0, 0, VAR_2->lpstrFile, VAR_2->nMaxFile, VAR_4.lpstrFile, VAR_5);
        VAR_4.nMaxFile = VAR_5;
    }

    if (VAR_2->lpstrFilter)
    {
        LPCSTR VAR_6;
        int VAR_7;


        VAR_6 = VAR_2->lpstrFilter;
        while (*VAR_6) VAR_6 = VAR_6+FUNC_5(VAR_6)+1;
        VAR_6++;
        VAR_7 = VAR_6 - VAR_2->lpstrFilter;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_2->lpstrFilter, VAR_7, ((void*)0), 0);
        VAR_4.lpstrFilter = FUNC_1(VAR_5 * sizeof(WCHAR));
        FUNC_0(VAR_0, 0, VAR_2->lpstrFilter, VAR_7, (WCHAR *)VAR_4.lpstrFilter, VAR_5);
    }


    if (VAR_2->lpstrCustomFilter)
    {
        int VAR_8, VAR_9;
        LPCSTR VAR_10;


        VAR_10 = VAR_2->lpstrCustomFilter;
        if (*VAR_10) VAR_10 = VAR_10+FUNC_5(VAR_10)+1;
        if (*VAR_10) VAR_10 = VAR_10+FUNC_5(VAR_10)+1;
        VAR_8 = VAR_10 - VAR_2->lpstrCustomFilter;
        VAR_9 = FUNC_0(VAR_0, 0, VAR_2->lpstrCustomFilter, VAR_8, ((void*)0), 0);
        VAR_4.lpstrCustomFilter = FUNC_1(VAR_9 * sizeof(WCHAR));
        FUNC_0(VAR_0, 0, VAR_2->lpstrCustomFilter, VAR_8, VAR_4.lpstrCustomFilter, VAR_9);
    }

    FUNC_4(&VAR_4, VAR_3);


    VAR_3->ofnInfos = (OPENFILENAMEW *)VAR_2;
    VAR_3->unicode = VAR_1;


    FUNC_2((void *)VAR_4.lpstrInitialDir);
    FUNC_2(VAR_4.lpstrFile);
}
