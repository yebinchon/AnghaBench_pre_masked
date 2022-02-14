
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,void**) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int *) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int VAR_9 ;

int FUNC_11(void)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 void *VAR_14;
 pthread_t *VAR_15;

 VAR_13 = FUNC_10(VAR_3) * VAR_2;
 VAR_15 = FUNC_3(VAR_13 * sizeof(pthread_t));
 FUNC_0(!VAR_15);

 VAR_5 = 1;
 VAR_9 = VAR_13;
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  VAR_12 = FUNC_5(&VAR_15[VAR_10], ((void*)0), VAR_6, ((void*)0));
  FUNC_0(VAR_12);
 }

 FUNC_8(VAR_8, ((void*)0));
 FUNC_4("\tWaiting for all workers to start...");
 while (VAR_9)
  asm volatile("": : :"memory");
 FUNC_4("done\n");

 FUNC_4("\tSending signals to all threads %d times...", VAR_0);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
   FUNC_7(VAR_15[VAR_11], VAR_1);
  }
  FUNC_9(1);
 }
 FUNC_4("done\n");

 FUNC_4("\tStopping workers...");
 VAR_5 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  FUNC_6(VAR_15[VAR_10], &VAR_14);





  if ((long) VAR_14 || VAR_4)
   FUNC_4("oops\n");
  if (VAR_4)
   FUNC_1(VAR_7, "\t!! bad_context is true\n");
  FUNC_0((long) VAR_14 || VAR_4);
 }
 FUNC_4("done\n");

 FUNC_2(VAR_15);
 return 0;
}
