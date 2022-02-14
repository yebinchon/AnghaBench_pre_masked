
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG_PTR ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_6 ;

void FUNC_9(HWND VAR_7)
{
    LONG_PTR VAR_8;
    DWORD VAR_9;

    DWORD VAR_10, VAR_11, VAR_12;
    FUNC_0(&VAR_10, &VAR_11, &VAR_12);
    if (VAR_10 > 6 || (VAR_10 == 6 && VAR_11 >= 10))
    {
        VAR_9 = FUNC_6(VAR_7);
        FUNC_7(VAR_7, VAR_9 | VAR_5, 0);

        VAR_8 = FUNC_1(VAR_7, VAR_0);
        FUNC_5(VAR_7, VAR_0, VAR_8 | VAR_4);
    }
    else
    {
        VAR_8 = FUNC_1(VAR_7, VAR_0);
        FUNC_5(VAR_7, VAR_0, VAR_8 | VAR_4);







        FUNC_8(VAR_7,
                              FUNC_2(VAR_6, (VAR_12 >= 6000 ? FUNC_3(VAR_2) : FUNC_3(VAR_1)), 16, 4, FUNC_4(255, 255, 255)),
                              VAR_3);
    }
}
