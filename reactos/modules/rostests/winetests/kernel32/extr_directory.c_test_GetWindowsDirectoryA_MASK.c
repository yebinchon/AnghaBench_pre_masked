
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    UINT VAR_1, VAR_2;
    char VAR_3[VAR_0];

    VAR_2 = FUNC_0(((void*)0), 0);
    FUNC_3(VAR_2 <= VAR_0, "should fit into MAX_PATH\n");

    FUNC_2(VAR_3, "foo");
    VAR_2 = FUNC_0(VAR_3, 1);
    FUNC_3(FUNC_1(VAR_3, "foo") == 0, "should not touch the buffer\n");

    FUNC_2(VAR_3, "foo");
    VAR_1 = FUNC_0(VAR_3, VAR_2 - 1);
    FUNC_3(FUNC_1(VAR_3, "foo") == 0, "should not touch the buffer\n");
    FUNC_3(VAR_1 == VAR_2, "GetWindowsDirectoryW returned %d, expected %d\n",
       VAR_1, VAR_2);

    FUNC_2(VAR_3, "foo");
    VAR_1 = FUNC_0(VAR_3, VAR_2);
    FUNC_3(FUNC_1(VAR_3, "foo") != 0, "should touch the buffer\n");
    FUNC_3(VAR_1 == FUNC_4(VAR_3), "returned length should be equal to the length of string\n");
    FUNC_3(VAR_1 == VAR_2-1, "GetWindowsDirectoryA returned %d, expected %d\n",
       VAR_1, VAR_2-1);
}
