
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct extent_info* last; struct extent_info* first; } ;
struct rrdengine_datafile {TYPE_1__ extents; } ;
struct extent_info {struct extent_info* next; struct rrdengine_datafile* datafile; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct extent_info *VAR_0)
{
    struct rrdengine_datafile *VAR_1 = VAR_0->datafile;

    if (FUNC_0(((void*)0) != VAR_1->extents.last)) {
        VAR_1->extents.last->next = VAR_0;
    }
    if (FUNC_1(((void*)0) == VAR_1->extents.first)) {
        VAR_1->extents.first = VAR_0;
    }
    VAR_1->extents.last = VAR_0;
}
