
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ hFrameMenu; scalar_t__ hWindowMenu; scalar_t__ hwndChildMaximized; scalar_t__ nActiveChildren; int hBmpClose; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef long LRESULT ;
typedef int HWND ;
typedef scalar_t__ HMENU ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_7 (char*) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static LRESULT FUNC_9( HWND VAR_0, HMENU VAR_1,
                           HMENU VAR_2)
{
    MDICLIENTINFO *VAR_3;
    HWND VAR_4 = FUNC_0(VAR_0);

    FUNC_6("%p, frame menu %p, window menu %p\n", VAR_0, VAR_1, VAR_2);

    if (VAR_1 && !FUNC_1(VAR_1))
    {
 FUNC_7("hmenuFrame is not a menu handle\n");
 return 0L;
    }

    if (VAR_2 && !FUNC_1(VAR_2))
    {
 FUNC_7("hmenuWindow is not a menu handle\n");
 return 0L;
    }

    if (!(VAR_3 = FUNC_8( VAR_0 ))) return 0;

    FUNC_6("old frame menu %p, old window menu %p\n", VAR_3->hFrameMenu, VAR_3->hWindowMenu);

    if (VAR_1)
    {
        if (VAR_1 == VAR_3->hFrameMenu) return (LRESULT)VAR_1;

        if (VAR_3->hwndChildMaximized)
            FUNC_4( VAR_4, VAR_3->hwndChildMaximized, VAR_3->hBmpClose );
    }

    if( VAR_2 && VAR_2 != VAR_3->hWindowMenu )
    {



        if( VAR_3->hWindowMenu && VAR_3->nActiveChildren )
        {
            UINT VAR_5 = VAR_3->nActiveChildren;


            VAR_3->nActiveChildren = 0;
            FUNC_3(VAR_3);

            VAR_3->hWindowMenu = VAR_2;


            VAR_3->nActiveChildren = VAR_5;
            FUNC_3(VAR_3);
        }
        else
            VAR_3->hWindowMenu = VAR_2;
    }

    if (VAR_1)
    {
        FUNC_5(VAR_4, VAR_1);
        if( VAR_1 != VAR_3->hFrameMenu )
        {
            HMENU VAR_6 = VAR_3->hFrameMenu;

            VAR_3->hFrameMenu = VAR_1;
            if (VAR_3->hwndChildMaximized)
                FUNC_2( VAR_4, VAR_3->hwndChildMaximized );

            return (LRESULT)VAR_6;
        }
    }

    return 0;
}
