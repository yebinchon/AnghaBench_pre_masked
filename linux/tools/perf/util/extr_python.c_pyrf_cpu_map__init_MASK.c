
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pyrf_cpu_map {int * cpus; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,char**) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pyrf_cpu_map *VAR_0,
         PyObject *VAR_1, PyObject *VAR_2)
{
 static char *VAR_3[] = { "cpustr", ((void*)0) };
 char *VAR_4 = ((void*)0);

 if (!FUNC_0(VAR_1, VAR_2, "|s",
      VAR_3, &VAR_4))
  return -1;

 VAR_0->cpus = FUNC_1(VAR_4);
 if (VAR_0->cpus == ((void*)0))
  return -1;
 return 0;
}
