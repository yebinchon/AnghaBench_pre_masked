
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target {int dummy; } ;
struct stat {int dummy; } ;
struct perf_thread_map {int nr; TYPE_1__* map; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int ,int ) ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (struct target*) ;

__attribute__((used)) static bool FUNC_4(struct target *VAR_1,
       struct perf_thread_map *VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 if (!FUNC_3(VAR_1))
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  char VAR_5[VAR_0];

  FUNC_1(VAR_5, VAR_0, "%s/%d", FUNC_0(),
     VAR_2->map[VAR_4].pid);

  if (!FUNC_2(VAR_5, &VAR_3))
   return 1;
 }

 return 0;
}
