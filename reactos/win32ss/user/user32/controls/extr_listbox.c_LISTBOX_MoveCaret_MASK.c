
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nb_items; int style; int anchor_item; scalar_t__ focus_item; } ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_7( LB_DESCR *VAR_4, INT VAR_5, BOOL VAR_6 )
{
    FUNC_4("old focus %d, index %d\n", VAR_4->focus_item, VAR_5);

    if ((VAR_5 < 0) || (VAR_5 >= VAR_4->nb_items))
        return;
    FUNC_0( VAR_4, VAR_0 );



    if (VAR_4->style & VAR_1)
    {
        if (VAR_4->anchor_item != -1)
        {
            INT VAR_7 = FUNC_6( VAR_5, VAR_4->anchor_item );
            INT VAR_8 = FUNC_5( VAR_5, VAR_4->anchor_item );
            if (VAR_7 > 0)
                FUNC_2( VAR_4, 0, VAR_7 - 1, VAR_0 );
            FUNC_2( VAR_4, VAR_8 + 1, -1, VAR_0 );
            FUNC_2( VAR_4, VAR_7, VAR_8, VAR_3 );
        }
    }
    else if (!(VAR_4->style & VAR_2))
    {

        FUNC_3( VAR_4, VAR_5, VAR_3, VAR_0 );
    }


    VAR_4->focus_item = VAR_5;
    FUNC_1( VAR_4, VAR_5, VAR_6 );
    FUNC_0( VAR_4, VAR_3 );
}
