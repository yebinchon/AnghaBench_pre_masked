
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uv_file ;
struct rrdengine_instance {int dummy; } ;
struct TYPE_2__ {int * last; int first; } ;
struct rrdengine_datafile {unsigned int tier; unsigned int fileno; struct rrdengine_instance* ctx; int * next; int * journalfile; TYPE_1__ extents; scalar_t__ pos; scalar_t__ file; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rrdengine_datafile *VAR_0, struct rrdengine_instance *VAR_1,
                          unsigned VAR_2, unsigned VAR_3)
{
    FUNC_0(VAR_2 == 1);
    VAR_0->tier = VAR_2;
    VAR_0->fileno = VAR_3;
    VAR_0->file = (uv_file)0;
    VAR_0->pos = 0;
    VAR_0->extents.first = *(VAR_0->extents.last = ((void*)0));
    VAR_0->journalfile = ((void*)0);
    VAR_0->next = ((void*)0);
    VAR_0->ctx = VAR_1;
}
