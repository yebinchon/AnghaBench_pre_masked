
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; } ;
struct trace_event_finder {int ntevs; TYPE_3__* tevs; TYPE_1__ pf; } ;
struct TYPE_5__ {scalar_t__ address; } ;
struct TYPE_6__ {TYPE_2__ point; } ;



__attribute__((used)) static bool FUNC_0(struct trace_event_finder *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ntevs; VAR_1++) {
  if (VAR_0->pf.addr == VAR_0->tevs[VAR_1].point.address)
   return 1;
 }
 return 0;
}
