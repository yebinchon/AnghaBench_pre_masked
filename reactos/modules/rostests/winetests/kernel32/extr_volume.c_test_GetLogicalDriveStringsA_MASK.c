
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    UINT VAR_0, VAR_1;
    char *VAR_2, *VAR_3;

    FUNC_3( &FUNC_4 != ((void*)0), "GetLogicalDriveStringsA not available\n");
    if(!&FUNC_4) {
        return;
    }

    VAR_0 = FUNC_4(0, ((void*)0));
    FUNC_3(VAR_0%4 == 1, "size = %d\n", VAR_0);

    VAR_2 = FUNC_1(FUNC_0(), 0, VAR_0);

    *VAR_2 = 0;
    VAR_1 = FUNC_4(2, VAR_2);
    FUNC_3(VAR_1 == VAR_0, "size2 = %d\n", VAR_1);
    FUNC_3(!*VAR_2, "buf changed\n");

    VAR_1 = FUNC_4(VAR_0, VAR_2);
    FUNC_3(VAR_1 == VAR_0-1, "size2 = %d\n", VAR_1);

    for(VAR_3 = VAR_2; VAR_3 < VAR_2+VAR_1; VAR_3 += 4) {
        FUNC_3(('A' <= *VAR_3 && *VAR_3 <= 'Z'), "device name '%c' is not uppercase\n", *VAR_3);
        FUNC_3(VAR_3[1] == ':', "ptr[1] = %c, expected ':'\n", VAR_3[1]);
        FUNC_3(VAR_3[2] == '\\', "ptr[2] = %c expected '\\'\n", VAR_3[2]);
        FUNC_3(!VAR_3[3], "ptr[3] = %c expected nullbyte\n", VAR_3[3]);
    }
    FUNC_3(!*VAR_3, "buf[size2] is not nullbyte\n");

    FUNC_2(FUNC_0(), 0, VAR_2);
}
