
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct worker {int thread; } ;
struct perf_cpu_map {unsigned int nr; int * map; } ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;
struct TYPE_3__ {unsigned int tid; int * futex; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,TYPE_1__*) ;
 unsigned int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct worker *VAR_7, pthread_attr_t VAR_8,
      struct perf_cpu_map *VAR_9)
{
 cpu_set_t VAR_10;
 unsigned int VAR_11;

 VAR_4 = VAR_3;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_5[VAR_11].tid = VAR_11;

  if (VAR_2) {
   VAR_5[VAR_11].futex = FUNC_2(1, sizeof(u_int32_t));
   if (!VAR_5[VAR_11].futex)
    FUNC_3(VAR_0, "calloc");
  } else
   VAR_5[VAR_11].futex = &VAR_1;

  FUNC_1(&VAR_10);
  FUNC_0(VAR_9->map[VAR_11 % VAR_9->nr], &VAR_10);

  if (FUNC_4(&VAR_8, sizeof(cpu_set_t), &VAR_10))
   FUNC_3(VAR_0, "pthread_attr_setaffinity_np");

  if (FUNC_5(&VAR_7[VAR_11].thread, &VAR_8, VAR_6, &VAR_5[VAR_11]))
   FUNC_3(VAR_0, "pthread_create");
 }
}
