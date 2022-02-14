
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rrdengine_datafile* last; struct rrdengine_datafile* first; } ;
struct rrdengine_instance {TYPE_1__ datafiles; } ;
struct rrdengine_datafile {struct rrdengine_datafile* next; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct rrdengine_instance *VAR_0, struct rrdengine_datafile *VAR_1)
{
    if (FUNC_0(((void*)0) != VAR_0->datafiles.last)) {
        VAR_0->datafiles.last->next = VAR_1;
    }
    if (FUNC_1(((void*)0) == VAR_0->datafiles.first)) {
        VAR_0->datafiles.first = VAR_1;
    }
    VAR_0->datafiles.last = VAR_1;
}
