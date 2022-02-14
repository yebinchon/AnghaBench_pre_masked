
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HIMAGELIST ;
typedef scalar_t__ HICON ;


 scalar_t__ FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    HIMAGELIST VAR_3 ;

    HICON VAR_4 ;
    HICON VAR_5 ;
    HICON VAR_6 ;


    VAR_3 = FUNC_3(84, 84, VAR_0, 0, 3);
    FUNC_2(VAR_3!=0,"failed to create imagelist\n");


    VAR_4 = FUNC_0(VAR_1, 32, 32, 1, 1, VAR_2, VAR_2);
    FUNC_2(VAR_4 != 0, "no hicon1\n");
    VAR_5 = FUNC_0(VAR_1, 32, 32, 1, 1, VAR_2, VAR_2);
    FUNC_2(VAR_5 != 0, "no hicon2\n");
    VAR_6 = FUNC_0(VAR_1, 32, 32, 1, 1, VAR_2, VAR_2);
    FUNC_2(VAR_6 != 0, "no hicon3\n");


    FUNC_2(!FUNC_5(VAR_3, 0), "Removed nonexistent icon.\n");

    FUNC_2(FUNC_5(VAR_3, -1), "Removed nonexistent icon\n");


    FUNC_2(0 == FUNC_6(VAR_3, -1, VAR_4), "Failed to add icon1.\n");
    FUNC_2(1 == FUNC_6(VAR_3, -1, VAR_5), "Failed to add icon2.\n");
    FUNC_2(2 == FUNC_6(VAR_3, -1, VAR_6), "Failed to add icon3.\n");


    FUNC_2(!FUNC_5(VAR_3, 4711), "removed nonexistent icon\n");


    FUNC_2(FUNC_5(VAR_3, 0), "Can't remove 0\n");
    FUNC_2(FUNC_5(VAR_3, 0), "Can't remove 0\n");
    FUNC_2(FUNC_5(VAR_3, 0), "Can't remove 0\n");


    FUNC_2(!FUNC_5(VAR_3, 0), "Removed nonexistent icon.\n");


    FUNC_2(FUNC_4(VAR_3), "Failed to destroy imagelist.\n");

    FUNC_2(-1 == FUNC_6((HIMAGELIST)0xdeadbeef, -1, VAR_4), "Don't crash on bad handle\n");

    FUNC_2(FUNC_1(VAR_4), "Failed to destroy icon 1.\n");
    FUNC_2(FUNC_1(VAR_5), "Failed to destroy icon 2.\n");
    FUNC_2(FUNC_1(VAR_6), "Failed to destroy icon 3.\n");
}
