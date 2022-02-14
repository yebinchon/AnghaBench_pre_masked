
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int idResult; } ;
struct TYPE_8__ {scalar_t__ cbwndExtra; int state; } ;
typedef TYPE_1__* PWND ;
typedef int HWND ;
typedef TYPE_2__ DIALOGINFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int VAR_4 ;

DIALOGINFO *FUNC_6( HWND VAR_5, BOOL VAR_6 )
{
    PWND VAR_7;
    DIALOGINFO* VAR_8;

    VAR_7 = FUNC_5( VAR_5 );
    if (!VAR_7)
    {
       return ((void*)0);
    }

    VAR_8 = (DIALOGINFO *)FUNC_1( VAR_5, VAR_1 );

    if (!VAR_8 && VAR_6)
    {
        if (VAR_7 && VAR_7->cbwndExtra >= VAR_0)
        {
            if (!(VAR_8 = FUNC_2( FUNC_0(), VAR_2, sizeof(*VAR_8) )))
                return ((void*)0);

            VAR_8->idResult = VAR_3;
            FUNC_4( VAR_5, VAR_8 );
       }
       else
       {
           return ((void*)0);
       }
    }

    if (VAR_8)
    {
        if (!(VAR_7->state & VAR_4))
        {
           FUNC_3( VAR_5, VAR_8 );
        }
    }
    return VAR_8;
}
