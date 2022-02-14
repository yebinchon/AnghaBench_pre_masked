
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ message; scalar_t__ wParam; int lParam; } ;
struct TYPE_11__ {int y; int x; } ;
typedef int PWND_DATA ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ MSG ;
typedef int INT ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__,int ,scalar_t__,TYPE_1__) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (scalar_t__,TYPE_1__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_13( HWND VAR_6, INT VAR_7, POINT VAR_8 )
{
    MSG VAR_9;
    PWND_DATA VAR_10 = FUNC_11(VAR_6);
    if(!VAR_10)
        return;

    FUNC_10(VAR_6, &VAR_8);

    FUNC_9(VAR_10, VAR_6, VAR_7, VAR_2, VAR_8 );

    do
    {
        if (!FUNC_6( &VAR_9, 0, 0, 0 )) break;
        if (FUNC_0( &VAR_9, VAR_0 )) continue;
        if (VAR_9.message == VAR_3 ||
            VAR_9.message == VAR_4 ||
            (VAR_9.message == VAR_5 && VAR_9.wParam == VAR_1))
        {
            VAR_8.x = FUNC_3(VAR_9.lParam);
            VAR_8.y = FUNC_4(VAR_9.lParam);
            FUNC_1(VAR_6, &VAR_8);
            FUNC_10(VAR_6, &VAR_8);
            FUNC_9(VAR_10, VAR_6, VAR_7, VAR_9.message, VAR_8 );
        }
        else
        {
            FUNC_12( &VAR_9 );
            FUNC_2( &VAR_9 );
        }
        if (!FUNC_7( VAR_6 ))
        {
            FUNC_8();
            break;
        }
    } while (VAR_9.message != VAR_3 && FUNC_5() == VAR_6);
}
