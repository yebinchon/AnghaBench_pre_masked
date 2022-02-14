
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TCHAR ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *,int ,int *,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int const*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,...) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(int VAR_6, const TCHAR *VAR_7[])
{
    HANDLE VAR_8;
    ULONG VAR_9;


    if (VAR_6 < 2)
    {
        FUNC_7(VAR_4, FUNC_6("Usage: fsutil volume dismount <volume>\n"));
        FUNC_7(VAR_4, FUNC_6("\tFor example: fsutil volume dismount d:\n"));
        return 1;
    }


    VAR_8 = FUNC_4(VAR_7[1], VAR_0, VAR_0);
    if (VAR_8 == VAR_2)
    {
        return 1;
    }


    if (FUNC_3(VAR_8, VAR_3))
    {
        FUNC_0(VAR_8);
        return 1;
    }


    if (FUNC_1(VAR_8, VAR_1, ((void*)0), 0, ((void*)0),
                        0, &VAR_9, ((void*)0)) == VAR_0)
    {
        FUNC_5(FUNC_2());
        FUNC_3(VAR_8, VAR_0);
        FUNC_0(VAR_8);
        return 1;
    }


    FUNC_3(VAR_8, VAR_0);
    FUNC_0(VAR_8);

    FUNC_7(VAR_5, FUNC_6("The %s volume has been dismounted\n"), VAR_7[1]);

    return 0;
}
