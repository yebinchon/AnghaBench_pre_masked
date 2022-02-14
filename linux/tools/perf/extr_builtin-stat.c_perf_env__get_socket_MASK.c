
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_env {TYPE_1__* cpu; } ;
struct perf_cpu_map {int dummy; } ;
struct TYPE_2__ {int socket_id; } ;


 int FUNC_0 (struct perf_env*,struct perf_cpu_map*,int) ;

__attribute__((used)) static int FUNC_1(struct perf_cpu_map *VAR_0, int VAR_1, void *VAR_2)
{
 struct perf_env *VAR_3 = VAR_2;
 int VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);

 return VAR_4 == -1 ? -1 : VAR_3->cpu[VAR_4].socket_id;
}
