
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rrdengine_datafile* first; struct rrdengine_datafile* last; } ;
struct rrdengine_instance {TYPE_1__ datafiles; } ;
struct rrdengine_datafile {struct rrdengine_datafile* next; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct rrdengine_instance *VAR_0, struct rrdengine_datafile *VAR_1)
{
    struct rrdengine_datafile *VAR_2;

    VAR_2 = VAR_1->next;
    FUNC_0((((void*)0) != VAR_2) && (VAR_0->datafiles.first == VAR_1) && (VAR_0->datafiles.last != VAR_1));
    VAR_0->datafiles.first = VAR_2;
}
