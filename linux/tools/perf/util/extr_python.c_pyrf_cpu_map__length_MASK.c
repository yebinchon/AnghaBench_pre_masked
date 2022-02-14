
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pyrf_cpu_map {TYPE_1__* cpus; } ;
struct TYPE_2__ {int nr; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;



__attribute__((used)) static Py_ssize_t FUNC_0(PyObject *VAR_0)
{
 struct pyrf_cpu_map *VAR_1 = (void *)VAR_0;

 return VAR_1->cpus->nr;
}
