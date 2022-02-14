
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * items; } ;
typedef int LRESULT ;
typedef int LB_ITEMDATA ;
typedef TYPE_1__ LB_DESCR ;
typedef int INT ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT FUNC_5( LB_DESCR *VAR_4, INT VAR_5 )
{
    LB_ITEMDATA *VAR_6;

    VAR_5 += VAR_1 - 1;
    VAR_5 -= (VAR_5 % VAR_1);
    if (VAR_4->items) {
        VAR_5 += FUNC_3( FUNC_0(), 0, VAR_4->items ) / sizeof(*VAR_6);
 VAR_6 = FUNC_2( FUNC_0(), 0, VAR_4->items,
                              VAR_5 * sizeof(LB_ITEMDATA));
    }
    else {
 VAR_6 = FUNC_1( FUNC_0(), 0,
                              VAR_5 * sizeof(LB_ITEMDATA));
    }

    if (!VAR_6)
    {
        FUNC_4( VAR_4, VAR_0 );
        return VAR_2;
    }
    VAR_4->items = VAR_6;
    return VAR_3;
}
