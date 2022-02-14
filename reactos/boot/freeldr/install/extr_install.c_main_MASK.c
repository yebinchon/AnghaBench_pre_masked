
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,...) ;

int FUNC_6(int VAR_0, char *VAR_1[])
{
    if (VAR_0 < 3)
    {
        FUNC_5(FUNC_4("syntax: install x: [fs_type]\nwhere fs_type is fat or fat32\n"));
        return -1;
    }

    if (!FUNC_3(VAR_1[1]))
    {
        return -1;
    }

    FUNC_0(VAR_1[1]);

    FUNC_2(VAR_1[2]);

    FUNC_5(FUNC_4("You must now copy freeldr.sys & freeldr.ini to %s.\n"), VAR_1[1]);

    FUNC_1();

    return 0;
}
