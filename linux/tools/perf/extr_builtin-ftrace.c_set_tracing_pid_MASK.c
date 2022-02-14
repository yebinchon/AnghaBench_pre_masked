
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_ftrace {TYPE_1__* evlist; int target; } ;
typedef int buf ;
struct TYPE_6__ {int * map; } ;
struct TYPE_5__ {TYPE_3__* threads; } ;
struct TYPE_4__ {TYPE_2__ core; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct perf_ftrace *VAR_0)
{
 int VAR_1;
 char VAR_2[16];

 if (FUNC_3(&VAR_0->target))
  return 0;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0->evlist->core.threads); VAR_1++) {
  FUNC_2(VAR_2, sizeof(VAR_2), "%d",
     VAR_0->evlist->core.threads->map[VAR_1]);
  if (FUNC_0("set_ftrace_pid", VAR_2) < 0)
   return -1;
 }
 return 0;
}
