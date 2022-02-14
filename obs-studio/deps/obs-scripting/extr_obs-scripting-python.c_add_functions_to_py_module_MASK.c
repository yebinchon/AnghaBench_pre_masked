
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ml_name; } ;
typedef int PyObject ;
typedef TYPE_1__ PyMethodDef ;


 int * FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(PyObject *VAR_0, PyMethodDef *VAR_1)
{
 PyObject *VAR_2 = FUNC_2(VAR_0);
 PyObject *VAR_3 = FUNC_3(VAR_0);
 if (!VAR_2 || !VAR_3) {
  return;
 }
 for (PyMethodDef *VAR_4 = VAR_1; VAR_4->ml_name != ((void*)0); VAR_4++) {
  PyObject *VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3);
  if (!VAR_5) {
   continue;
  }
  FUNC_1(VAR_2, VAR_4->ml_name, VAR_5);
  FUNC_4(VAR_5);
 }
 FUNC_4(VAR_3);
}
