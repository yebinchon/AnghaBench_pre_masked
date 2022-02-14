
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int style; int captured; int anchor_item; int owner; scalar_t__ self; TYPE_2__* lphc; TYPE_1__* items; scalar_t__ in_focus; int caret_on; int focus_item; } ;
struct TYPE_13__ {int x; int y; } ;
struct TYPE_12__ {scalar_t__ self; scalar_t__ hWndEdit; } ;
struct TYPE_11__ {int selected; } ;
typedef TYPE_3__ POINT ;
typedef int LRESULT ;
typedef TYPE_4__ LB_DESCR ;
typedef int INT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_3__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,int,int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,scalar_t__,int,int,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static LRESULT FUNC_11( LB_DESCR *VAR_11, DWORD VAR_12, INT VAR_13, INT VAR_14 )
{
    INT VAR_15 = FUNC_2( VAR_11, VAR_13, VAR_14 );

    FUNC_10("[%p]: lbuttondown %d,%d item %d, focus item %d\n",
          VAR_11->self, VAR_13, VAR_14, VAR_15, VAR_11->focus_item);

    if (!VAR_11->caret_on && (VAR_11->in_focus)) return 0;

    if (!VAR_11->in_focus)
    {
        if( !VAR_11->lphc ) FUNC_9( VAR_11->self );
        else FUNC_9( (VAR_11->lphc->hWndEdit) ? VAR_11->lphc->hWndEdit : VAR_11->lphc->self );
    }

    if (VAR_15 == -1) return 0;

    if (!VAR_11->lphc)
    {
        if (VAR_11->style & VAR_4 )
            FUNC_7( VAR_11->owner, VAR_9, VAR_15,
                            FUNC_6( VAR_13, VAR_14 ) );
    }

    VAR_11->captured = VAR_7;
    FUNC_8( VAR_11->self );

    if (VAR_11->style & (VAR_2 | VAR_3))
    {






        if (!(VAR_12 & VAR_6)) VAR_11->anchor_item = VAR_15;
        if (VAR_12 & VAR_5)
        {
            FUNC_4( VAR_11, VAR_15, VAR_0 );
            FUNC_5( VAR_11, VAR_15,
                                  !VAR_11->items[VAR_15].selected,
                                  (VAR_11->style & VAR_4) != 0);
        }
        else
        {
            FUNC_3( VAR_11, VAR_15, VAR_0 );

            if (VAR_11->style & VAR_2)
            {
                FUNC_5( VAR_11, VAR_15,
                               VAR_11->items[VAR_15].selected,
                              (VAR_11->style & VAR_4) != 0 );
            }
            else
            {
                FUNC_5( VAR_11, VAR_15,
                               !VAR_11->items[VAR_15].selected,
                              (VAR_11->style & VAR_4) != 0 );
            }
        }
    }
    else
    {
        VAR_11->anchor_item = VAR_15;
        FUNC_3( VAR_11, VAR_15, VAR_0 );
        FUNC_5( VAR_11, VAR_15,
                              VAR_7, (VAR_11->style & VAR_4) != 0 );
    }

    if (!VAR_11->lphc)
    {
        if (FUNC_1( VAR_11->self, VAR_1 ) & VAR_10)
        {
            POINT VAR_16;

     VAR_16.x = VAR_13;
     VAR_16.y = VAR_14;

            if (FUNC_0( VAR_11->self, VAR_16 ))
                FUNC_7( VAR_11->owner, VAR_8, 0, 0 );
        }
    }
    return 0;
}
