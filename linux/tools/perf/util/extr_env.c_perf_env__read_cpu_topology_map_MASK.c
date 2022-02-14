
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_env {int nr_cpus_avail; TYPE_1__* cpu; } ;
struct TYPE_2__ {int die_id; int socket_id; int core_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct perf_env *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2->cpu != ((void*)0))
  return 0;

 if (VAR_2->nr_cpus_avail == 0)
  VAR_2->nr_cpus_avail = FUNC_1();

 VAR_4 = VAR_2->nr_cpus_avail;
 if (VAR_4 == -1)
  return -VAR_0;

 VAR_2->cpu = FUNC_0(VAR_4, sizeof(VAR_2->cpu[0]));
 if (VAR_2->cpu == ((void*)0))
  return -VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  VAR_2->cpu[VAR_3].core_id = FUNC_2(VAR_3);
  VAR_2->cpu[VAR_3].socket_id = FUNC_4(VAR_3);
  VAR_2->cpu[VAR_3].die_id = FUNC_3(VAR_3);
 }

 VAR_2->nr_cpus_avail = VAR_4;
 return 0;
}
