
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; scalar_t__ nb_items; TYPE_1__* items; } ;
struct TYPE_4__ {scalar_t__ selected; } ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__ LB_ITEMDATA ;
typedef TYPE_2__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT FUNC_0( const LB_DESCR *VAR_3 )
{
    INT VAR_4, VAR_5;
    const LB_ITEMDATA *VAR_6 = VAR_3->items;

    if (!(VAR_3->style & VAR_0) ||
        (VAR_3->style & VAR_1))
      return VAR_2;
    for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3->nb_items; VAR_4++, VAR_6++)
        if (VAR_6->selected) VAR_5++;
    return VAR_5;
}
