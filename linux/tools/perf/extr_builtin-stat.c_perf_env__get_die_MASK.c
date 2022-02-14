
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_env {TYPE_1__* cpu; } ;
struct perf_cpu_map {int dummy; } ;
struct TYPE_2__ {int socket_id; int die_id; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct perf_env*,struct perf_cpu_map*,int) ;

__attribute__((used)) static int FUNC_2(struct perf_cpu_map *VAR_0, int VAR_1, void *VAR_2)
{
 struct perf_env *VAR_3 = VAR_2;
 int VAR_4 = -1, VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_1);

 if (VAR_5 != -1) {






  if (FUNC_0(VAR_3->cpu[VAR_5].socket_id >> 8, "The socket id number is too big.\n"))
   return -1;

  if (FUNC_0(VAR_3->cpu[VAR_5].die_id >> 8, "The die id number is too big.\n"))
   return -1;

  VAR_4 = (VAR_3->cpu[VAR_5].socket_id << 8) | (VAR_3->cpu[VAR_5].die_id & 0xff);
 }

 return VAR_4;
}
