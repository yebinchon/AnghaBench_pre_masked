
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hwndActiveChild; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5( MDICLIENTINFO *VAR_9, HWND VAR_10, BOOL VAR_11 )
{
    HWND VAR_12;

    VAR_12 = VAR_9->hwndActiveChild;

    FUNC_4("from %p, to %p\n", VAR_12, VAR_10);

    if ( VAR_10 != VAR_12 )
    {
        BOOL VAR_13 = FUNC_0(VAR_12);

        if (VAR_13)
        {

            FUNC_1( VAR_12, VAR_8, VAR_0, 0 );
            FUNC_3( VAR_12, VAR_6 );
            FUNC_1( VAR_12, VAR_8, VAR_7, 0 );


            FUNC_2( VAR_10, VAR_1, 0, 0, 0, 0, VAR_3 | VAR_4 );

            FUNC_3( VAR_10, VAR_5 );
        }

        FUNC_2( VAR_10, VAR_1, 0, 0, 0, 0, VAR_3 | VAR_4 | (VAR_11 ? 0 : VAR_2) );
    }
}
