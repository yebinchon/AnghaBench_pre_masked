
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int POINT ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;

void FUNC_1( HWND VAR_5, WPARAM VAR_6, POINT VAR_7 )
{
    INT VAR_8;

    if ((VAR_6 & 0xfff0) == VAR_4)
    {
        if ((VAR_6 & 0x0f) != VAR_0) return;
        VAR_8 = VAR_2;
    }
    else
    {
        if ((VAR_6 & 0x0f) != VAR_1) return;
        VAR_8 = VAR_3;
    }
    FUNC_0( VAR_5, VAR_8, VAR_7 );
}
