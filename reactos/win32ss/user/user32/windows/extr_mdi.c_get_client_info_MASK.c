
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ wExtra; } ;
typedef TYPE_1__ WND ;
typedef int MDICLIENTINFO ;
typedef int HWND ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static MDICLIENTINFO *FUNC_5( HWND VAR_4 )
{



    MDICLIENTINFO *VAR_5 = ((void*)0);
    WND *VAR_6 = FUNC_3( VAR_4 );
    if (VAR_6)
    {
        if (VAR_6 == VAR_3 || VAR_6 == VAR_2)
        {
            if (FUNC_1(VAR_4)) FUNC_2( "client %p belongs to other process\n", VAR_4 );
            return ((void*)0);
        }
        if (VAR_6->flags & VAR_1)
            VAR_5 = (MDICLIENTINFO *)VAR_6->wExtra;
        else
            FUNC_2( "%p is not an MDI client\n", VAR_4 );
        FUNC_4( VAR_6 );
    }
    return VAR_5;

}
