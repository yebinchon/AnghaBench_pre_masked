
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread_map {TYPE_1__* map; } ;
typedef int pid_t ;
struct TYPE_2__ {char* comm; } ;


 scalar_t__ FUNC_0 (char**,int) ;
 int FUNC_1 (struct perf_thread_map*,int) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct perf_thread_map *VAR_0, int VAR_1)
{
 pid_t VAR_2 = FUNC_1(VAR_0, VAR_1);
 char *VAR_3 = ((void*)0);


 if (VAR_2 == -1) {
  VAR_0->map[VAR_1].comm = FUNC_3("dummy");
  return;
 }





 if (FUNC_0(&VAR_3, VAR_2))
  FUNC_2("Couldn't resolve comm name for pid %d\n", VAR_2);

 VAR_0->map[VAR_1].comm = VAR_3;
}
