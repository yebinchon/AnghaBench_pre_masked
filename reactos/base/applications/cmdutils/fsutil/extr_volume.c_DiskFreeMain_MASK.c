
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int TCHAR ;


 int FUNC_0 (int const*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2, const TCHAR *VAR_3[])
{
    ULARGE_INTEGER VAR_4, VAR_5, VAR_6;


    if (VAR_2 < 2)
    {
        FUNC_4(VAR_0, FUNC_3("Usage: fsutil volume diskfree <volume path>\n"));
        FUNC_4(VAR_0, FUNC_3("\tFor example: fsutil volume diskfree c:\n"));
        return 1;
    }

    if (!FUNC_0(VAR_3[1], &VAR_4, &VAR_5, &VAR_6))
    {
        FUNC_2(FUNC_1());
        return 1;
    }

    FUNC_4(VAR_1, FUNC_3("Total free bytes\t\t: %I64i\n"), VAR_6.QuadPart);
    FUNC_4(VAR_1, FUNC_3("Total bytes\t\t\t: %I64i\n"), VAR_5.QuadPart);
    FUNC_4(VAR_1, FUNC_3("Total free available bytes\t: %I64i\n"), VAR_4.QuadPart);

    return 0;
}
