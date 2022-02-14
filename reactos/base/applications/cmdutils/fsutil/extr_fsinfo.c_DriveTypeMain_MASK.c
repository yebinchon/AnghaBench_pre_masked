
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TCHAR ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(int VAR_2, const TCHAR *VAR_3[])
{
    UINT VAR_4;


    if (VAR_2 < 2)
    {
        FUNC_2(VAR_0, FUNC_1("Usage: fsutil fsinfo drivetype <volume>\n"));
        FUNC_2(VAR_0, FUNC_1("\tFor example: fsutil fsinfo drivetype c:\n"));
        return 1;
    }


    VAR_4 = FUNC_0(VAR_3[1]);
    switch (VAR_4)
    {
        case 128:
            FUNC_2(VAR_1, FUNC_1("%s - unknown drive type\n"), VAR_3[1]);
            break;

        case 132:
            FUNC_2(VAR_1, FUNC_1("%s - not a root directory\n"), VAR_3[1]);
            break;

        case 129:
            FUNC_2(VAR_1, FUNC_1("%s - removable drive\n"), VAR_3[1]);
            break;

        case 133:
            FUNC_2(VAR_1, FUNC_1("%s - fixed drive\n"), VAR_3[1]);
            break;

        case 130:
            FUNC_2(VAR_1, FUNC_1("%s - remote or network drive\n"), VAR_3[1]);
            break;

        case 134:
            FUNC_2(VAR_1, FUNC_1("%s - CD-ROM drive\n"), VAR_3[1]);
            break;

        case 131:
            FUNC_2(VAR_1, FUNC_1("%s - RAM disk drive\n"), VAR_3[1]);
            break;
    }

    return 0;
}
