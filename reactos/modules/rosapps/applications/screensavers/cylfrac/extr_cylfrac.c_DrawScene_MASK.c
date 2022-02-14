
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PAINTSTRUCT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int,double) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,double,double,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,double,double,double) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_7(HWND VAR_8, HDC VAR_9, int VAR_10)
{
    PAINTSTRUCT VAR_11;
    VAR_9 = FUNC_0(VAR_8, &VAR_11);
    FUNC_5(VAR_0 | VAR_1);
    FUNC_6(VAR_10 * 0.01, 0.0, 1.0, -0.5);
    VAR_2 += VAR_10 * 0.01;
    VAR_4 += VAR_10 * 0.003;
    if (VAR_4 > 360.0) VAR_4 -= 360.0;
    FUNC_3(VAR_4, 1.0, 0.7, &VAR_7, &VAR_5, &VAR_3);
    FUNC_1(VAR_6, VAR_2, 0.2);
    FUNC_4(VAR_9);
    FUNC_2(VAR_8, &VAR_11);
}
