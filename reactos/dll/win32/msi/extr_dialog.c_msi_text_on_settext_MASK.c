
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPPOINT ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4( HWND VAR_1 )
{
    HWND VAR_2;
    RECT VAR_3;

    VAR_2 = FUNC_0( VAR_1 );
    FUNC_1( VAR_1, &VAR_3 );
    FUNC_3( ((void*)0), VAR_2, (LPPOINT) &VAR_3, 2 );
    FUNC_2( VAR_2, &VAR_3, VAR_0 );
}
