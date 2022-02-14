
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5( HWND VAR_5, HWND VAR_6, HWND VAR_7, HWND VAR_8,
                           HWND VAR_9, HWND VAR_10, HWND VAR_11 )
{
    HWND VAR_12;

    if (&FUNC_4)
    {
        VAR_12 = FUNC_4( VAR_5, VAR_0 );
        FUNC_3( VAR_12 == VAR_6, "Wrong result for GA_PARENT %p expected %p\n", VAR_12, VAR_6 );
    }
    VAR_12 = (HWND)FUNC_2( VAR_5, VAR_3 );
    FUNC_3( VAR_12 == VAR_7, "Wrong result for GWL_HWNDPARENT %p expected %p\n", VAR_12, VAR_7 );
    VAR_12 = FUNC_0( VAR_5 );
    FUNC_3( VAR_12 == VAR_8, "Wrong result for GetParent %p expected %p\n", VAR_12, VAR_8 );
    VAR_12 = FUNC_1( VAR_5, VAR_4 );
    FUNC_3( VAR_12 == VAR_9, "Wrong result for GW_OWNER %p expected %p\n", VAR_12, VAR_9 );
    if (&FUNC_4)
    {
        VAR_12 = FUNC_4( VAR_5, VAR_1 );
        FUNC_3( VAR_12 == VAR_10, "Wrong result for GA_ROOT %p expected %p\n", VAR_12, VAR_10 );
        VAR_12 = FUNC_4( VAR_5, VAR_2 );
        FUNC_3( VAR_12 == VAR_11, "Wrong result for GA_ROOTOWNER %p expected %p\n", VAR_12, VAR_11 );
    }
}
