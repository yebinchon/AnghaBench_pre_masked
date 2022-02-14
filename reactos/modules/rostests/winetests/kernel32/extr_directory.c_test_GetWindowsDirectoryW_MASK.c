
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (float*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (float*,float const*) ;
 int FUNC_3 (float*,float const*) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    UINT VAR_2, VAR_3;
    WCHAR VAR_4[VAR_1];
    static const WCHAR VAR_5[] = {'f','o','o',0};

    VAR_3 = FUNC_1(((void*)0), 0);
    if (VAR_3 == 0 && FUNC_0() == VAR_0)
    {
        FUNC_6("GetWindowsDirectoryW is not implemented\n");
        return;
    }
    FUNC_5(VAR_3 <= VAR_1, "should fit into MAX_PATH\n");

    FUNC_3(VAR_4, VAR_5);
    VAR_2 = FUNC_1(VAR_4, 1);
    FUNC_5(FUNC_2(VAR_4, VAR_5) == 0, "should not touch the buffer\n");
    FUNC_5(VAR_2 == VAR_3, "GetWindowsDirectoryW returned %d, expected %d\n",
       VAR_2, VAR_3);

    FUNC_3(VAR_4, VAR_5);
    VAR_2 = FUNC_1(VAR_4, VAR_3 - 1);
    FUNC_5(FUNC_2(VAR_4, VAR_5) == 0, "should not touch the buffer\n");
    FUNC_5(VAR_2 == VAR_3, "GetWindowsDirectoryW returned %d, expected %d\n",
       VAR_2, VAR_3);

    FUNC_3(VAR_4, VAR_5);
    VAR_2 = FUNC_1(VAR_4, VAR_3);
    FUNC_5(FUNC_2(VAR_4, VAR_5) != 0, "should touch the buffer\n");
    FUNC_5(VAR_2 == FUNC_4(VAR_4), "returned length should be equal to the length of string\n");
    FUNC_5(VAR_2 == VAR_3-1, "GetWindowsDirectoryW returned %d, expected %d\n",
       VAR_2, VAR_3-1);
}
