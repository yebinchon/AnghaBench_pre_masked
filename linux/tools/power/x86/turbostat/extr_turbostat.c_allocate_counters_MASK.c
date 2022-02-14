
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int cpu_id; } ;
struct pkg_data {int package_id; } ;
struct core_data {int core_id; } ;
struct TYPE_2__ {int cores_per_node; int nodes_per_pkg; int num_packages; int threads_per_core; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_2(struct thread_data **VAR_1, struct core_data **VAR_2,
    struct pkg_data **VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_0.cores_per_node * VAR_0.nodes_per_pkg *
   VAR_0.num_packages;
 int VAR_6 = VAR_0.threads_per_core * VAR_5;

 *VAR_1 = FUNC_0(VAR_6, sizeof(struct thread_data));
 if (*VAR_1 == ((void*)0))
  goto error;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  (*VAR_1)[VAR_4].cpu_id = -1;

 *VAR_2 = FUNC_0(VAR_5, sizeof(struct core_data));
 if (*VAR_2 == ((void*)0))
  goto error;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  (*VAR_2)[VAR_4].core_id = -1;

 *VAR_3 = FUNC_0(VAR_0.num_packages, sizeof(struct pkg_data));
 if (*VAR_3 == ((void*)0))
  goto error;

 for (VAR_4 = 0; VAR_4 < VAR_0.num_packages; VAR_4++)
  (*VAR_3)[VAR_4].package_id = VAR_4;

 return;
error:
 FUNC_1(1, "calloc counters");
}
