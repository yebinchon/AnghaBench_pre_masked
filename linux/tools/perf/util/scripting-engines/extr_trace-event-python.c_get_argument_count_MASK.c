
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(PyObject *VAR_0)
{
 int VAR_1 = 0;





 PyObject *VAR_2 = FUNC_2(VAR_0,
  "func_code");
 if (FUNC_1()) {
  FUNC_0();
  VAR_2 = FUNC_2(VAR_0,
   "__code__");
 }
 FUNC_0();
 if (VAR_2) {
  PyObject *VAR_3 = FUNC_2(VAR_2,
   "co_argcount");
  if (VAR_3) {
   VAR_1 = (int) FUNC_4(VAR_3);
   FUNC_3(VAR_3);
  }
  FUNC_3(VAR_2);
 }
 return VAR_1;
}
