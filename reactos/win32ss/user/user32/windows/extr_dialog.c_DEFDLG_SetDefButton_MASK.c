
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idResult; } ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef TYPE_1__ DIALOGINFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_3( HWND VAR_7, DIALOGINFO *VAR_8, HWND VAR_9 )
{
    DWORD VAR_10=0;
    HWND VAR_11 = FUNC_1( VAR_7, VAR_8->idResult );

    if (VAR_9 &&
        !((VAR_10=FUNC_2(VAR_9, VAR_6, 0, 0 ))
            & (VAR_4 | VAR_3)))
    {





        VAR_9 = VAR_11;
        VAR_10 = FUNC_2(VAR_9, VAR_6, 0, 0 );
    }


    if (!VAR_11 || !(FUNC_2( VAR_11, VAR_6, 0, 0) & VAR_3))
        VAR_11 = FUNC_0( VAR_7 );
    if (VAR_11 && VAR_11 != VAR_9)
        FUNC_2( VAR_11, VAR_0, VAR_2, VAR_5 );

    if (VAR_9)
    {
        if(VAR_10 & VAR_4)
            FUNC_2( VAR_9, VAR_0, VAR_1, VAR_5 );
    }
    return VAR_5;
}
