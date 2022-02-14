
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wState; scalar_t__ hWndLBox; scalar_t__ hWndEdit; } ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__* LPSTR ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_6( LPHEADCOMBO VAR_6, INT VAR_7, LPSTR VAR_8 )
{
    INT VAR_9;

    if( VAR_6->wState & VAR_0 )
        return FUNC_3( VAR_6->hWndEdit, VAR_5, VAR_7, (LPARAM)VAR_8 );



    if (!VAR_7 || !VAR_8) return 0;
    if( VAR_6->hWndLBox )
    {
        INT VAR_10 = FUNC_4(VAR_6->hWndLBox, VAR_2, 0, 0);
        if (VAR_10 == VAR_1) goto error;
        VAR_9 = FUNC_3(VAR_6->hWndLBox, VAR_4, VAR_10, 0 );
        if (VAR_9 == VAR_1) goto error;


        if (VAR_9 >= VAR_7)
        {
            LPSTR VAR_11 = FUNC_1(FUNC_0(), 0, (VAR_9 + 1) );
            if (!VAR_11) goto error;
            VAR_9 = FUNC_3(VAR_6->hWndLBox, VAR_3, VAR_10, (LPARAM)VAR_11);


            if (VAR_9 != VAR_1)
            {
                FUNC_5( VAR_8, VAR_11, VAR_7 );
                VAR_9 = VAR_7;
            }
            FUNC_2( FUNC_0(), 0, VAR_11 );
        }
        else VAR_9 = FUNC_3(VAR_6->hWndLBox, VAR_3, VAR_10, (LPARAM)VAR_8);

        if (VAR_9 == VAR_1) return 0;
        return VAR_9;
    }

 error:
    VAR_8[0] = 0;
    return 0;
}
