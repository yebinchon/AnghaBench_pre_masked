
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int * HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HWND FUNC_3( HWND VAR_9 )
{
    HWND VAR_10, VAR_11;

    VAR_10 = FUNC_0( VAR_9, VAR_3 );
    while (VAR_10)
    {
        if (FUNC_2( VAR_10, VAR_5, 0, 0 ) & VAR_0)
            break;


        if (FUNC_1( VAR_10, VAR_1 ) & VAR_7)
        {
            LONG VAR_12 = FUNC_1( VAR_10, VAR_2 );
            if ((VAR_12 & VAR_8) && !(VAR_12 & VAR_6) &&
                (VAR_11 = FUNC_3(VAR_10)) != ((void*)0))
           return VAR_11;
        }
        VAR_10 = FUNC_0( VAR_10, VAR_4 );
    }
    return VAR_10;
}
