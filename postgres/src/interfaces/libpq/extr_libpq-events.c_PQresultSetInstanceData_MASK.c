
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nEvents; TYPE_1__* events; } ;
struct TYPE_4__ {scalar_t__ proc; void* data; } ;
typedef TYPE_2__ PGresult ;
typedef scalar_t__ PGEventProc ;



int
FUNC_0(PGresult *VAR_0, PGEventProc VAR_1, void *VAR_2)
{
 int VAR_3;

 if (!VAR_0 || !VAR_1)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->nEvents; VAR_3++)
 {
  if (VAR_0->events[VAR_3].proc == VAR_1)
  {
   VAR_0->events[VAR_3].data = VAR_2;
   return 1;
  }
 }

 return 0;
}
