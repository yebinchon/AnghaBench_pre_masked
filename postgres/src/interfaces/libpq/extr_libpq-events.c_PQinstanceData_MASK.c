
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nEvents; TYPE_1__* events; } ;
struct TYPE_4__ {scalar_t__ proc; void* data; } ;
typedef TYPE_2__ PGconn ;
typedef scalar_t__ PGEventProc ;



void *
FUNC_0(const PGconn *VAR_0, PGEventProc VAR_1)
{
 int VAR_2;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->nEvents; VAR_2++)
 {
  if (VAR_0->events[VAR_2].proc == VAR_1)
   return VAR_0->events[VAR_2].data;
 }

 return ((void*)0);
}
