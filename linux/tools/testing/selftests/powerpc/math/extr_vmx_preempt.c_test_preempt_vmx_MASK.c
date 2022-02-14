
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,void**) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;

int FUNC_8(void)
{
 int VAR_7, VAR_8, VAR_9;
 pthread_t *VAR_10;

 VAR_9 = FUNC_7(VAR_2) * VAR_1;
 VAR_10 = FUNC_1(VAR_9 * sizeof(pthread_t));
 FUNC_0(!VAR_10);

 VAR_4 = 1;
 VAR_6 = VAR_9;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = FUNC_3(&VAR_10[VAR_7], ((void*)0), VAR_3, ((void*)0));
  FUNC_0(VAR_8);
 }

 FUNC_5(VAR_5, ((void*)0));

 FUNC_2("\tWaiting for all workers to start...");
 while(VAR_6)
  asm volatile("": : :"memory");
 FUNC_2("done\n");

 FUNC_2("\tWaiting for %d seconds to let some workers get preempted...", VAR_0);
 FUNC_6(VAR_0);
 FUNC_2("done\n");

 FUNC_2("\tStopping workers...");




 VAR_4 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  void *VAR_11;
  FUNC_4(VAR_10[VAR_7], &VAR_11);





  if ((long) VAR_11)
   FUNC_2("oops\n");
  FUNC_0((long) VAR_11);
 }
 FUNC_2("done\n");

 return 0;
}
