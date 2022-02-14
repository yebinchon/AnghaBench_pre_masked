
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int icc ;
typedef int WCHAR ;
struct TYPE_10__ {int unicode; int * initdir; void* filename; int customfilter; int filter; int defext; int title; TYPE_1__* ofnInfos; } ;
struct TYPE_9__ {int dwSize; int dwICC; } ;
struct TYPE_8__ {int nMaxFile; scalar_t__ lpstrInitialDir; scalar_t__ lpstrFile; int lpstrCustomFilter; int lpstrFilter; int lpstrDefExt; int lpstrTitle; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef TYPE_2__ INITCOMMONCONTROLSEX ;
typedef TYPE_3__ FileOpenDlgInfos ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_6(OPENFILENAMEW *VAR_2, FileOpenDlgInfos *VAR_3)
{
    INITCOMMONCONTROLSEX VAR_4;


    VAR_4.dwSize = sizeof(VAR_4);
    VAR_4.dwICC = VAR_0;
    FUNC_2(&VAR_4);


    FUNC_0(0);

    FUNC_5(VAR_3, 0, sizeof(*VAR_3));


    VAR_3->ofnInfos = VAR_2;

    VAR_3->title = VAR_2->lpstrTitle;
    VAR_3->defext = VAR_2->lpstrDefExt;
    VAR_3->filter = VAR_2->lpstrFilter;
    VAR_3->customfilter = VAR_2->lpstrCustomFilter;

    if (VAR_2->lpstrFile)
    {
        VAR_3->filename = FUNC_3(VAR_2->nMaxFile * sizeof(WCHAR));
        FUNC_4(VAR_3->filename, VAR_2->lpstrFile, VAR_2->nMaxFile);
    }

    if (VAR_2->lpstrInitialDir)
    {
        DWORD VAR_5 = FUNC_1(VAR_2->lpstrInitialDir, ((void*)0), 0);
        if (VAR_5)
        {
            VAR_3->initdir = FUNC_3(VAR_5 * sizeof(WCHAR));
            FUNC_1(VAR_2->lpstrInitialDir, VAR_3->initdir, VAR_5);
        }
    }

    VAR_3->unicode = VAR_1;
}
