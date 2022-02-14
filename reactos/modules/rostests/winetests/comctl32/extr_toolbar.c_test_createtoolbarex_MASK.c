
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int btns ;
typedef int TBBUTTON ;
typedef int HWND ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int **,int) ;
 int FUNC_5 (int,int,char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int,int,int ,int ,int *,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    HWND VAR_4;
    TBBUTTON VAR_5[3];
    FUNC_4(&VAR_5, sizeof(VAR_5));

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, 20, 20, 16, 16, sizeof(TBBUTTON));
    FUNC_0(16, 20, 20);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0x1a001b, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, 4, 4, 16, 16, sizeof(TBBUTTON));
    FUNC_0(32, 4, 4);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0xa000b, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, 0, 8, 12, 12, sizeof(TBBUTTON));
    FUNC_0(16, 12, 12);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0x120013, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, -1, 8, 12, 12, sizeof(TBBUTTON));
    FUNC_0(16, 12, 8);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0xe0013, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, -1, 8, -1, 12, sizeof(TBBUTTON));
    FUNC_0(16, 16, 8);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0xe0017, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, 0, 0, 12, -1, sizeof(TBBUTTON));
    FUNC_0(16, 12, 16);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0x160013, "%x");
    FUNC_1(VAR_4);

    VAR_4 = FUNC_6(VAR_3, VAR_2, 1, 16, FUNC_2(((void*)0)), VAR_0, VAR_5,
        3, 0, 0, 0, 12, sizeof(TBBUTTON));
    FUNC_0(16, 16, 16);
    FUNC_5((int)FUNC_3(VAR_4, VAR_1, 0, 0), 0x160017, "%x");
    FUNC_1(VAR_4);
}
