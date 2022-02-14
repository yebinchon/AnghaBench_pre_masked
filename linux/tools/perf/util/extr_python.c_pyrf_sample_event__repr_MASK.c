
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pyrf_event {int dummy; } ;
typedef int PyObject ;


 int * FUNC_0 () ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_event *VAR_0)
{
 PyObject *VAR_1;
 char *VAR_2;

 if (FUNC_2(&VAR_2, "{ type: sample }") < 0) {
  VAR_1 = FUNC_0();
 } else {
  VAR_1 = FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }
 return VAR_1;
}
