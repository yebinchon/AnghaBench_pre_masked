
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fFlags; int * lpszProgressTitle; int * hNameMappings; int * pTo; int * pFrom; int wFunc; int * hwnd; } ;
typedef TYPE_1__ SHFILEOPSTRUCTA ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    SHFILEOPSTRUCTA VAR_10;
    CHAR VAR_11[5*VAR_8];
    CHAR VAR_12[5*VAR_8];
    DWORD VAR_13;

    VAR_10.hwnd = ((void*)0);
    VAR_10.wFunc = VAR_7;
    VAR_10.pFrom = VAR_11;
    VAR_10.pTo = VAR_12;

    VAR_10.fFlags = VAR_3 | VAR_6 | VAR_5 | VAR_2 | VAR_4;
    VAR_10.hNameMappings = ((void*)0);
    VAR_10.lpszProgressTitle = ((void*)0);

    FUNC_3(VAR_11, "test1.txt\0test2.txt\0test3.txt\0");
    FUNC_3(VAR_12, "test6.txt\0test7.txt\0");
    VAR_13 = FUNC_2(&VAR_10);


    FUNC_0("test6.txt\\test1.txt");

    FUNC_0("test6.txt\\test2.txt");
    FUNC_0("test6.txt\\test3.txt");

    FUNC_1("test6.txt");

    FUNC_0("test7.txt\\test2.txt");
    FUNC_1("test7.txt");

    if (VAR_13 == VAR_0)
        return VAR_9;

    return VAR_1;
}
