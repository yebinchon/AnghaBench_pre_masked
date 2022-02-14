
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lower; int upper; } ;
struct TYPE_8__ {int nItem; TYPE_1__ range; scalar_t__ ranges; } ;
typedef TYPE_2__ ITERATOR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static BOOL FUNC_4(ITERATOR *VAR_2, ITERATOR *VAR_3)
{
    if(!VAR_2->ranges || !VAR_3->ranges) {
        int VAR_4, VAR_5;

        if(VAR_2->ranges || VAR_3->ranges ||
                (VAR_2->range.lower<VAR_3->range.lower && VAR_2->range.upper>VAR_3->range.upper) ||
                (VAR_2->range.lower>VAR_3->range.lower && VAR_2->range.upper<VAR_3->range.upper)) {
            FUNC_0("result is not a one range iterator\n");
            return VAR_0;
        }

        if(VAR_2->range.lower==-1 || VAR_3->range.lower==-1)
            return VAR_1;

        VAR_4 = VAR_2->range.lower;
        VAR_5 = VAR_2->range.upper;

        if(VAR_4 < VAR_3->range.lower)
            VAR_2->range.upper = VAR_3->range.lower;
        else if(VAR_5 > VAR_3->range.upper)
            VAR_2->range.lower = VAR_3->range.upper;
        else
            VAR_2->range.lower = VAR_2->range.upper = -1;

        if(VAR_3->range.lower < VAR_4)
            VAR_3->range.upper = VAR_4;
        else if(VAR_3->range.upper > VAR_5)
            VAR_3->range.lower = VAR_5;
        else
            VAR_3->range.lower = VAR_3->range.upper = -1;

        return VAR_1;
    }

    FUNC_1(VAR_2);
    FUNC_1(VAR_3);

    while(1) {
        if(VAR_2->nItem==-1 || VAR_3->nItem==-1)
            break;

        if(VAR_2->nItem == VAR_3->nItem) {
            int VAR_6 = VAR_2->nItem;

            FUNC_2(VAR_2);
            FUNC_2(VAR_3);
            FUNC_3(VAR_2->ranges, VAR_6);
            FUNC_3(VAR_3->ranges, VAR_6);
            FUNC_1(VAR_2);
            FUNC_1(VAR_3);
        } else if(VAR_2->nItem > VAR_3->nItem)
            FUNC_1(VAR_3);
        else
            FUNC_1(VAR_2);
    }

    VAR_2->nItem = VAR_2->range.lower = VAR_2->range.upper = -1;
    VAR_3->nItem = VAR_3->range.lower = VAR_3->range.upper = -1;
    return VAR_1;
}
