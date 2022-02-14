
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int upper; int lower; } ;
struct TYPE_7__ {int nItem; int nSpecial; scalar_t__ index; TYPE_2__ range; TYPE_1__* ranges; } ;
struct TYPE_5__ {int hdpa; } ;
typedef TYPE_2__ RANGE ;
typedef TYPE_3__ ITERATOR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_2(ITERATOR* VAR_2)
{
    if (VAR_2->nItem == -1)
    {
 VAR_2->nItem = VAR_2->nSpecial;
 if (VAR_2->nItem != -1) return VAR_1;
    }
    if (VAR_2->nItem == VAR_2->nSpecial)
    {
 if (VAR_2->ranges) VAR_2->index = 0;
 goto pickarange;
    }

    VAR_2->nItem++;
testitem:
    if (VAR_2->nItem == VAR_2->nSpecial) VAR_2->nItem++;
    if (VAR_2->nItem < VAR_2->range.upper) return VAR_1;

pickarange:
    if (VAR_2->ranges)
    {
 if (VAR_2->index < FUNC_1(VAR_2->ranges->hdpa))
     VAR_2->range = *(RANGE*)FUNC_0(VAR_2->ranges->hdpa, VAR_2->index++);
 else goto end;
    }
    else if (VAR_2->nItem >= VAR_2->range.upper) goto end;

    VAR_2->nItem = VAR_2->range.lower;
    if (VAR_2->nItem >= 0) goto testitem;
end:
    VAR_2->nItem = -1;
    return VAR_0;
}
