
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef scalar_t__ UINT ;
struct TYPE_18__ {int selected_item; int style; int self; TYPE_14__* lphc; scalar_t__ nb_items; } ;
struct TYPE_17__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_16__ {int bottom; int right; } ;
struct TYPE_15__ {int droppedIndex; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef int LONG ;
typedef TYPE_3__ LB_DESCR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;


 int FUNC_0 (TYPE_14__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*,TYPE_2__) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int ,int ,scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static LRESULT FUNC_16( LB_DESCR *VAR_12, UINT VAR_13, DWORD VAR_14, INT VAR_15, INT VAR_16)
{
    RECT VAR_17, VAR_18;
    POINT VAR_19;

    VAR_19.x = VAR_15;
    VAR_19.y = VAR_16;

    FUNC_3(VAR_12->self, &VAR_17);

    if(FUNC_11(&VAR_17, VAR_19))
    {

        if (VAR_13 == VAR_8)
        {
           VAR_12->lphc->droppedIndex = VAR_12->nb_items ? VAR_12->selected_item : -1;
           return FUNC_7( VAR_12, VAR_14, VAR_15, VAR_16);
        }
        else if (VAR_12->style & VAR_5)
            FUNC_13( VAR_12, VAR_4 );
    }
    else
    {
        POINT VAR_20;
        HWND VAR_21;


        VAR_20 = VAR_19;
        VAR_21 = FUNC_2();
        FUNC_12();
        FUNC_6(VAR_12->self, &VAR_18);
        FUNC_1(VAR_12->self, &VAR_20);

        if(!FUNC_11(&VAR_18, VAR_20))
        {
            FUNC_8( VAR_12, VAR_12->lphc->droppedIndex, VAR_0 );
            FUNC_9( VAR_12, VAR_12->lphc->droppedIndex, VAR_0, VAR_0 );
            FUNC_0( VAR_12->lphc, VAR_0, VAR_0 );
        }
        else
        {

            INT VAR_22=0;
            LONG VAR_23 = FUNC_5( VAR_12->self, VAR_1 );

            if (VAR_23 & VAR_11)
            {
                VAR_17.right += FUNC_4(VAR_6);
                if (FUNC_11( &VAR_17, VAR_19 ))
                    VAR_22 = VAR_3;
            }

            if (VAR_23 & VAR_10)
            {
                VAR_17.bottom += FUNC_4(VAR_7);
                if (FUNC_11( &VAR_17, VAR_19 ))
                    VAR_22 = VAR_2;
            }



            if(VAR_22 != 0)
            {
                FUNC_14(VAR_12->self, VAR_9, VAR_22,
                             FUNC_10(VAR_20.x, VAR_20.y));
            }


            if(VAR_21 != 0)
                FUNC_15(VAR_21);
        }
    }
    return 0;
}
