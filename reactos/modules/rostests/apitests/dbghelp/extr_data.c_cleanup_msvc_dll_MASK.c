
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,char const*) ;
 char* FUNC_5 () ;

void FUNC_6()
{
    char VAR_1[VAR_0];
    BOOL VAR_2;
    const char* VAR_3 = FUNC_5();

    FUNC_4(VAR_1, "%s\\uffs.pdb", VAR_3);
    VAR_2 = FUNC_0(VAR_1);
    FUNC_3(VAR_2, "DeleteFileA failed(%d)\n", FUNC_1());

    FUNC_4(VAR_1, "%s\\uffs.dll", VAR_3);
    VAR_2 = FUNC_0(VAR_1);
    FUNC_3(VAR_2, "DeleteFileA failed(%d)\n", FUNC_1());
    VAR_2 = FUNC_2(VAR_3);
    FUNC_3(VAR_2, "RemoveDirectoryA failed(%d)\n", FUNC_1());
}
