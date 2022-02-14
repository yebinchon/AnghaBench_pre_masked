
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;

int32_t FUNC_3(void)
{
 int32_t VAR_0;

 VAR_0 = FUNC_2();
 if (VAR_0 < 0) {
  FUNC_1("sched_getcpu()");
  FUNC_0();
 }
 return VAR_0;
}
