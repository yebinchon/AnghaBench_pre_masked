
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {unsigned int nr; int * map; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 unsigned int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(pthread_t *VAR_4,
     pthread_attr_t VAR_5, struct perf_cpu_map *VAR_6)
{
 cpu_set_t VAR_7;
 unsigned int VAR_8;

 VAR_2 = VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_1(&VAR_7);
  FUNC_0(VAR_6->map[VAR_8 % VAR_6->nr], &VAR_7);

  if (FUNC_3(&VAR_5, sizeof(cpu_set_t), &VAR_7))
   FUNC_2(VAR_0, "pthread_attr_setaffinity_np");

  if (FUNC_4(&VAR_4[VAR_8], &VAR_5, VAR_3, ((void*)0)))
   FUNC_2(VAR_0, "pthread_create");
 }
}
