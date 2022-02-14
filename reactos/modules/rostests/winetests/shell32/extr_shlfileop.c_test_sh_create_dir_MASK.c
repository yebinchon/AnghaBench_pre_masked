
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    CHAR VAR_3[VAR_2];
    int VAR_4;

    FUNC_3(VAR_3, "testdir2\\test4.txt\0");
    VAR_4 = FUNC_0(((void*)0), VAR_3, ((void*)0));
    FUNC_2(VAR_1 == VAR_4, "SHCreateDirectoryEx failed to create directory recursively, ret = %d\n", VAR_4);
    FUNC_2(FUNC_1("testdir2"), "The first directory is not created\n");
    FUNC_2(FUNC_1("testdir2\\test4.txt"), "The second directory is not created\n");

    VAR_4 = FUNC_0(((void*)0), VAR_3, ((void*)0));
    FUNC_2(VAR_0 == VAR_4, "SHCreateDirectoryEx should fail to create existing directory, ret = %d\n", VAR_4);

    VAR_4 = FUNC_0(((void*)0), "c:\\testdir3", ((void*)0));
    FUNC_2(VAR_1 == VAR_4, "SHCreateDirectoryEx failed to create directory, ret = %d\n", VAR_4);
    FUNC_2(FUNC_1("c:\\testdir3"), "The directory is not created\n");
}
