
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *,int ,int *,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int const*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(int VAR_5, const TCHAR *VAR_6[])
{
    HANDLE VAR_7;
    DWORD VAR_8;


    if (VAR_5 < 2)
    {
        FUNC_6(VAR_3, FUNC_5("Usage: fsutil dirty set <volume>\n"));
        FUNC_6(VAR_3, FUNC_5("\tFor example: fsutil dirty set c:\n"));
        return 1;
    }


    VAR_7 = FUNC_3(VAR_6[1], VAR_0, VAR_0);
    if (VAR_7 == VAR_2)
    {
        return 1;
    }


    if (FUNC_1(VAR_7, VAR_1, ((void*)0), 0, ((void*)0), 0, &VAR_8, ((void*)0)) == VAR_0)
    {
        FUNC_4(FUNC_2());
        FUNC_0(VAR_7);
        return 1;
    }

    FUNC_0(VAR_7);


    FUNC_6(VAR_4, FUNC_5("The %s volume is now marked as dirty\n"), VAR_6[1]);

    return 0;
}
