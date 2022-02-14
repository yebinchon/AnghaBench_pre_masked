
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int style; int nb_items; TYPE_1__* items; } ;
struct TYPE_5__ {scalar_t__ selected; } ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static LRESULT FUNC_1( LB_DESCR *VAR_6, INT VAR_7,
                                        INT VAR_8, BOOL VAR_9 )
{
    INT VAR_10;



    if (VAR_6->style & VAR_2) return VAR_3;
    if (!(VAR_6->style & VAR_1)) return VAR_3;

    if (!VAR_6->nb_items) return VAR_4;

    if (VAR_8 == -1 || VAR_8 >= VAR_6->nb_items) VAR_8 = VAR_6->nb_items - 1;
    if (VAR_7 < 0) VAR_7 = 0;
    if (VAR_8 < VAR_7) return VAR_4;

    if (VAR_9)
    {
        for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++)
        {
            if (VAR_6->items[VAR_10].selected) continue;
            VAR_6->items[VAR_10].selected = VAR_5;
            FUNC_0(VAR_6, VAR_10);
        }
    }
    else
    {
        for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++)
        {
            if (!VAR_6->items[VAR_10].selected) continue;
            VAR_6->items[VAR_10].selected = VAR_0;
            FUNC_0(VAR_6, VAR_10);
        }
    }
    return VAR_4;
}
