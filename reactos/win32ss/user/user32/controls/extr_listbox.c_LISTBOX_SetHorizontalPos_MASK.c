
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ horz_extent; scalar_t__ width; scalar_t__ horz_pos; int self; int focus_item; } ;
typedef int RECT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__,int ,int *,int *,int ,int *,int) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6( LB_DESCR *VAR_4, INT VAR_5 )
{
    INT VAR_6;

    if (VAR_5 > VAR_4->horz_extent - VAR_4->width)
        VAR_5 = VAR_4->horz_extent - VAR_4->width;
    if (VAR_5 < 0) VAR_5 = 0;
    if (!(VAR_6 = VAR_4->horz_pos - VAR_5)) return;
    FUNC_4("[%p]: new horz pos = %d\n", VAR_4->self, VAR_5 );
    VAR_4->horz_pos = VAR_5;
    FUNC_2( VAR_4 );
    if (FUNC_5(VAR_6) < VAR_4->width)
    {
        RECT VAR_7;

        if (FUNC_1( VAR_4, VAR_4->focus_item, &VAR_7 ) == 1)
            FUNC_0( VAR_4->self, &VAR_7, VAR_3 );
        FUNC_3( VAR_4->self, VAR_6, 0, ((void*)0), ((void*)0), 0, ((void*)0),
                          VAR_1 | VAR_0 | VAR_2 );
    }
    else
        FUNC_0( VAR_4->self, ((void*)0), VAR_3 );
}
