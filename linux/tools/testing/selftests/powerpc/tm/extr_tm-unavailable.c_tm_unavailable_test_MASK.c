
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;
struct TYPE_2__ {scalar_t__ result; int exception; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int *) ;
 int FUNC_10 (int *,int *,int ,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,int,int *) ;
 int VAR_4 ;

int FUNC_13(void)
{
 int VAR_5, VAR_6;
 pthread_t VAR_7;
 pthread_attr_t VAR_8;
 cpu_set_t VAR_9;

 FUNC_2(!FUNC_4());


 FUNC_1(&VAR_9);
 FUNC_0(0, &VAR_9);


 VAR_5 = FUNC_8(&VAR_8);
 if (VAR_5)
  FUNC_5(VAR_5, "pthread_attr_init()");


 VAR_5 = FUNC_9(&VAR_8, sizeof(cpu_set_t), &VAR_9);
 if (VAR_5)
  FUNC_5(VAR_5, "pthread_attr_setaffinity_np()");

 VAR_5 = FUNC_10(&VAR_7, &VAR_8 , VAR_4, ((void*)0));
 if (VAR_5)
  FUNC_5(VAR_5, "pthread_create()");


 VAR_5 = FUNC_11(VAR_7, "tm_una_pong");
 if (VAR_5)
  FUNC_6(VAR_5, "pthread_create()");

 VAR_3.result = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_7("Checking if FP/VEC registers are sane after");

  if (VAR_6 == VAR_0)
   FUNC_7(" a FP unavailable exception...\n");

  else if (VAR_6 == VAR_2)
   FUNC_7(" a VEC unavailable exception...\n");

  else
   FUNC_7(" a VSX unavailable exception...\n");

  VAR_3.exception = VAR_6;

  FUNC_12(0, 0, &VAR_8);
  FUNC_12(1, 0, &VAR_8);
  FUNC_12(0, 1, &VAR_8);
  FUNC_12(1, 1, &VAR_8);

 }

 if (VAR_3.result > 0) {
  FUNC_7("result: failed!\n");
  FUNC_3(1);
 } else {
  FUNC_7("result: success\n");
  FUNC_3(0);
 }
}
