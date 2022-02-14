
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* result; int * conn; } ;
struct TYPE_7__ {int nEvents; TYPE_1__* events; } ;
struct TYPE_6__ {int resultInitialized; int passThrough; int (* proc ) (int ,TYPE_3__*,int ) ;} ;
typedef TYPE_2__ PGresult ;
typedef int PGconn ;
typedef TYPE_3__ PGEventResultCreate ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int ) ;

int
FUNC_1(PGconn *VAR_1, PGresult *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nEvents; VAR_3++)
 {
  if (!VAR_2->events[VAR_3].resultInitialized)
  {
   PGEventResultCreate VAR_4;

   VAR_4.conn = VAR_1;
   VAR_4.result = VAR_2;
   if (!VAR_2->events[VAR_3].proc(VAR_0, &VAR_4,
          VAR_2->events[VAR_3].passThrough))
    return 0;

   VAR_2->events[VAR_3].resultInitialized = 1;
  }
 }

 return 1;
}
