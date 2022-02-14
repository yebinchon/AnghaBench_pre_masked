
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    UINT VAR_1, VAR_2;
    WCHAR *VAR_3, *VAR_4;

    FUNC_5( &FUNC_6 != ((void*)0), "GetLogicalDriveStringsW not available\n");
    if(!&FUNC_6) {
        return;
    }

    FUNC_4(0xdeadbeef);
    VAR_1 = FUNC_6(0, ((void*)0));
    if (VAR_1 == 0 && FUNC_0() == VAR_0) {
        FUNC_7("GetLogicalDriveStringsW not implemented\n");
        return;
    }
    FUNC_5(VAR_1%4 == 1, "size = %d\n", VAR_1);

    VAR_3 = FUNC_2(FUNC_1(), 0, VAR_1*sizeof(WCHAR));

    *VAR_3 = 0;
    VAR_2 = FUNC_6(2, VAR_3);
    FUNC_5(VAR_2 == VAR_1, "size2 = %d\n", VAR_2);
    FUNC_5(!*VAR_3, "buf changed\n");

    VAR_2 = FUNC_6(VAR_1, VAR_3);
    FUNC_5(VAR_2 == VAR_1-1, "size2 = %d\n", VAR_2);

    for(VAR_4 = VAR_3; VAR_4 < VAR_3+VAR_2; VAR_4 += 4) {
        FUNC_5('A' <= *VAR_4 && *VAR_4 <= 'Z', "device name '%c' is not uppercase\n", *VAR_4);
        FUNC_5(VAR_4[1] == ':', "ptr[1] = %c, expected ':'\n", VAR_4[1]);
        FUNC_5(VAR_4[2] == '\\', "ptr[2] = %c expected '\\'\n", VAR_4[2]);
        FUNC_5(!VAR_4[3], "ptr[3] = %c expected nullbyte\n", VAR_4[3]);
    }
    FUNC_5(!*VAR_4, "buf[size2] is not nullbyte\n");

    FUNC_3(FUNC_1(), 0, VAR_3);
}
