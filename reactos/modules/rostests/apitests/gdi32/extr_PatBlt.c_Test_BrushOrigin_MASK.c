
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int HBRUSH ;
typedef int HBITMAP ;
typedef int BOOL ;


 int FUNC_0 (int,int,int,int,int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int ,int,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;

void FUNC_6()
{
    ULONG VAR_3[2] = {0x5555AAAA, 0};
    HBITMAP VAR_4;
    HBRUSH VAR_5;
    BOOL VAR_6;

    VAR_4 = FUNC_0(2, 2, 1, 1, VAR_3);
    if (!VAR_4)
    {
        FUNC_5("Couln not create a bitmap\n");
        return;
    }

    VAR_5 = FUNC_1(VAR_4);
    if (!VAR_5)
    {
        FUNC_5("Couln not create a bitmap\n");
        return;
    }

    if (!FUNC_3(VAR_2, VAR_5))
    {
        FUNC_5("failed to select pattern brush\n");
        return;
    }

    VAR_6 = FUNC_2(VAR_2, 0, 0, 2, 2, VAR_0);
    FUNC_4(VAR_6, 1);
    FUNC_4(VAR_1[0], 0xffffff);
    FUNC_4(VAR_1[1], 0);
    FUNC_4(VAR_1[16], 0);
    FUNC_4(VAR_1[17], 0xffffff);


    VAR_6 = FUNC_2(VAR_2, 1, 0, 2, 2, VAR_0);
    FUNC_4(VAR_6, 1);
    FUNC_4(VAR_1[0], 0xffffff);
    FUNC_4(VAR_1[1], 0);
    FUNC_4(VAR_1[2], 0xffffff);
    FUNC_4(VAR_1[16], 0);
    FUNC_4(VAR_1[17], 0xffffff);
    FUNC_4(VAR_1[18], 0);

}
