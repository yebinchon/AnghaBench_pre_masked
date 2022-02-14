
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pyrf_event {int dummy; } ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (struct pyrf_event*,int *) ;
 scalar_t__ FUNC_2 (struct pyrf_event*) ;

__attribute__((used)) static PyObject*
FUNC_3(struct pyrf_event *VAR_0, PyObject *VAR_1)
{
 PyObject *VAR_2 = ((void*)0);

 if (FUNC_2(VAR_0))
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2 ?: FUNC_0((PyObject *) VAR_0, VAR_1);
}
