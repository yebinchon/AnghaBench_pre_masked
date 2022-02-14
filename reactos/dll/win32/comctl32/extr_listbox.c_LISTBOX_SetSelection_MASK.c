
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int selected_item; int style; int nb_items; TYPE_2__* lphc; TYPE_1__* items; } ;
struct TYPE_9__ {int wState; } ;
struct TYPE_8__ {int selected; } ;
typedef int LRESULT ;
typedef TYPE_3__ LB_DESCR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int,int,scalar_t__) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*,int,int,char*) ;
 int VAR_9 ;

__attribute__((used)) static LRESULT FUNC_4( LB_DESCR *VAR_10, INT VAR_11,
                                     BOOL VAR_12, BOOL VAR_13 )
{
    FUNC_3( "cur_sel=%d index=%d notify=%s\n",
           VAR_10->selected_item, VAR_11, VAR_13 ? "YES" : "NO" );

    if (VAR_10->style & VAR_5)
    {
        VAR_10->selected_item = VAR_11;
        return VAR_6;
    }
    if ((VAR_11 < -1) || (VAR_11 >= VAR_10->nb_items)) return VAR_6;
    if (VAR_10->style & VAR_4)
    {
        if (VAR_11 == -1)
            return FUNC_1( VAR_10, 0, VAR_10->nb_items, VAR_12 );
        else
            return FUNC_1( VAR_10, VAR_11, VAR_11, VAR_12 );
    }
    else
    {
        INT VAR_14 = VAR_10->selected_item;
        if (VAR_11 == VAR_14) return VAR_7;
        if (VAR_14 != -1) VAR_10->items[VAR_14].selected = VAR_1;
        if (VAR_11 != -1) VAR_10->items[VAR_11].selected = VAR_9;
        if (VAR_14 != -1) FUNC_0( VAR_10, VAR_14, VAR_8 );
        VAR_10->selected_item = VAR_11;
        if (VAR_11 != -1) FUNC_0( VAR_10, VAR_11, VAR_8 );
        if (VAR_13 && VAR_10->nb_items) FUNC_2( VAR_10,
                               (VAR_11 != -1) ? VAR_3 : VAR_2 );
 else
     if( VAR_10->lphc )
  VAR_10->lphc->wState |= VAR_0;
    }
    return VAR_7;
}
