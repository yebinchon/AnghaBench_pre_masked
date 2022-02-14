
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct state {int typecnt; TYPE_1__* ttis; } ;
struct TYPE_5__ {struct state state; } ;
typedef TYPE_2__ pg_tz ;
struct TYPE_4__ {long tt_utoff; } ;



bool
FUNC_0(const pg_tz *VAR_0, long int *VAR_1)
{





 const struct state *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0->state;
 for (VAR_3 = 1; VAR_3 < VAR_2->typecnt; VAR_3++)
 {
  if (VAR_2->ttis[VAR_3].tt_utoff != VAR_2->ttis[0].tt_utoff)
   return 0;
 }
 *VAR_1 = VAR_2->ttis[0].tt_utoff;
 return 1;
}
