
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int flags; int idResult; } ;
struct TYPE_12__ {scalar_t__ message; int wParam; } ;
struct TYPE_11__ {int state; } ;
typedef TYPE_1__* PWND ;
typedef TYPE_2__ MSG ;
typedef int LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef TYPE_3__ DIALOGINFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_10 (int) ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_8 ;
 TYPE_1__* FUNC_14 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

INT FUNC_15( HWND VAR_15, HWND VAR_16 )
{
    DIALOGINFO * VAR_17;
    MSG VAR_18;
    INT VAR_19;
    BOOL VAR_20;
    PWND VAR_21;

    VAR_21 = FUNC_14(VAR_15);
    if (!VAR_21) return -1;

    if (!(VAR_17 = FUNC_2(VAR_15))) return -1;

    VAR_20 = VAR_7;
    if (!(VAR_17->flags & VAR_0))
    {
        for (;;)
        {
            if (!FUNC_9( &VAR_18, 0, 0, 0, VAR_5 ))
            {
                if (VAR_20)
                {

                    FUNC_12( VAR_15, VAR_6 );
                    VAR_20 = VAR_2;
                }
                if (!(FUNC_6( VAR_15, VAR_3 ) & VAR_1))
               {

                    FUNC_11( VAR_16, VAR_10, VAR_4, (LPARAM)VAR_15 );
                }
                FUNC_5( &VAR_18, 0, 0, 0 );
            }

            if (VAR_18.message == VAR_12)
            {
                FUNC_10( VAR_18.wParam );
                if (!FUNC_8( VAR_15 )) return 0;
                break;
            }





            if (VAR_18.message == VAR_11 &&
                VAR_21->state & VAR_14 &&
                FUNC_3() == VAR_15)
            {
                if (VAR_18.wParam == L'C' && FUNC_4(VAR_8) < 0)
                    FUNC_11(VAR_15, VAR_9, 0, 0);
            }

            if (!FUNC_8( VAR_15 )) return 0;
            if (!(VAR_17->flags & VAR_0) && !FUNC_7( VAR_15, &VAR_18))
            {
                FUNC_13( &VAR_18 );
                FUNC_1( &VAR_18 );
            }
            if (!FUNC_8( VAR_15 )) return 0;
            if (VAR_17->flags & VAR_0) break;

            if (VAR_20 && VAR_18.message == VAR_13)
            {
                FUNC_12( VAR_15, VAR_6 );
                VAR_20 = VAR_2;
            }
        }
    }
    VAR_19 = VAR_17->idResult;
    FUNC_0( VAR_15 );
    return VAR_19;
}
