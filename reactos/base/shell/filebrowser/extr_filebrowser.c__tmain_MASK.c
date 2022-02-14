
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int _TCHAR ;
struct TYPE_4__ {scalar_t__ pidlRoot; scalar_t__ pidlPath; scalar_t__ strPath; int nCmdShow; int dwFlags; int member_0; } ;
typedef TYPE_1__ EXPLORER_CMDLINE_PARSE_RESULTS ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(int VAR_2, _TCHAR* VAR_3[])
{
    EXPLORER_CMDLINE_PARSE_RESULTS VAR_4 = { 0 };

    if (FUNC_2(&VAR_4))
    {
        VAR_4.dwFlags |= VAR_0;
        VAR_4.nCmdShow = VAR_1;
        return FUNC_1(&VAR_4);
    }

    if (VAR_4.strPath)
        FUNC_3(VAR_4.strPath);

    if (VAR_4.pidlPath)
        FUNC_0(VAR_4.pidlPath);

    if (VAR_4.pidlRoot)
        FUNC_0(VAR_4.pidlRoot);

    return 0;
}
