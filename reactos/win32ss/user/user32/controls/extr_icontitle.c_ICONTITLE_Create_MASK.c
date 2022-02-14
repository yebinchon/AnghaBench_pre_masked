
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int LONG ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int ,int *,int,int ,int ,int,int,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

HWND FUNC_7( HWND VAR_8 )
{
    HWND VAR_9;
    HINSTANCE VAR_10 = (HINSTANCE)FUNC_2( VAR_8, VAR_0 );
    LONG VAR_11 = VAR_6;

    if (!FUNC_4(VAR_8)) VAR_11 |= VAR_7;
    if( FUNC_2( VAR_8, VAR_1 ) & VAR_5 )
 VAR_9 = FUNC_0( 0, (LPCSTR)VAR_2, ((void*)0),
                                VAR_11 | VAR_5, 0, 0, 1, 1,
                                FUNC_1(VAR_8), 0, VAR_10, ((void*)0) );
    else
 VAR_9 = FUNC_0( 0, (LPCSTR)VAR_2, ((void*)0),
                                VAR_11, 0, 0, 1, 1,
                                VAR_8, 0, VAR_10, ((void*)0) );
    FUNC_6( VAR_9, VAR_8 );
    FUNC_5( VAR_9, VAR_1,
                       FUNC_3( VAR_9, VAR_1 ) & ~(VAR_4 | VAR_3) );
    return VAR_9;
}
