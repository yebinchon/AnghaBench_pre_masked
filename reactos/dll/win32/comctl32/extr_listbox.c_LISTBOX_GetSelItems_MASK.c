
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; scalar_t__ nb_items; TYPE_1__* items; } ;
struct TYPE_4__ {scalar_t__ selected; } ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__* LPINT ;
typedef TYPE_1__ LB_ITEMDATA ;
typedef TYPE_2__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static LRESULT FUNC_0( const LB_DESCR *VAR_2, INT VAR_3, LPINT VAR_4 )
{
    INT VAR_5, VAR_6;
    const LB_ITEMDATA *VAR_7 = VAR_2->items;

    if (!(VAR_2->style & VAR_0)) return VAR_1;
    for (VAR_5 = VAR_6 = 0; (VAR_5 < VAR_2->nb_items) && (VAR_6 < VAR_3); VAR_5++, VAR_7++)
        if (VAR_7->selected) VAR_4[VAR_6++] = VAR_5;
    return VAR_6;
}
