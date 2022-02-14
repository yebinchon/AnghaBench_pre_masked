
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_top {scalar_t__ drop; scalar_t__ lost; TYPE_1__* evlist; int * sym_evsel; } ;
struct TYPE_2__ {int * selected; } ;


 int FUNC_0 (struct perf_top*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct perf_top *VAR_1 = VAR_0;

 if (VAR_1->evlist->selected != ((void*)0))
  VAR_1->sym_evsel = VAR_1->evlist->selected;

 FUNC_0(VAR_1);

 if (VAR_1->lost || VAR_1->drop)
  FUNC_1("Too slow to read ring buffer (change period (-c/-F) or limit CPUs (-C)\n");
}
