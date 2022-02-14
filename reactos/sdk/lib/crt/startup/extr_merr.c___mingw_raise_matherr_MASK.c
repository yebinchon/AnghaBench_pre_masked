
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _exception {int type; char* name; double arg1; double arg2; double retval; } ;


 int FUNC_0 (struct _exception*) ;
 int FUNC_1 (struct _exception*) ;

void FUNC_2 (int VAR_0, const char *VAR_1, double VAR_2, double VAR_3,
       double VAR_4)
{
  struct _exception VAR_5;
  if (!&FUNC_0)
    return;
  VAR_5.type = VAR_0;
  VAR_5.name = (char*)VAR_1;
  VAR_5.arg1 = VAR_2;
  VAR_5.arg2 = VAR_3;
  VAR_5.retval = VAR_4;
  FUNC_0)(&VAR_5);
}
