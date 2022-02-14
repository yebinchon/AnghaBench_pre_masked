
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; scalar_t__ nb_items; int item_height; TYPE_1__* items; } ;
struct TYPE_4__ {int height; } ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef size_t INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static LRESULT FUNC_1( const LB_DESCR *VAR_3, INT VAR_4 )
{
    if (VAR_3->style & VAR_1 && VAR_3->nb_items > 0)
    {
        if ((VAR_4 < 0) || (VAR_4 >= VAR_3->nb_items))
        {
            FUNC_0(VAR_0);
            return VAR_2;
        }
        return VAR_3->items[VAR_4].height;
    }
    else return VAR_3->item_height;
}
