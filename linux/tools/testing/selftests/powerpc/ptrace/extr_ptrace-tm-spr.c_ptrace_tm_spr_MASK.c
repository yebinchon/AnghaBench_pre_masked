
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 struct shared* VAR_6 ;
 int* VAR_7 ;
 int FUNC_7 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int*) ;

int FUNC_15(void)
{
 pid_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(!FUNC_4());
 VAR_8 = FUNC_11(VAR_1, sizeof(struct shared), 0777|VAR_0);
 VAR_9 = FUNC_11(VAR_1, sizeof(int), 0777|VAR_0);
 VAR_10 = FUNC_3();
 if (VAR_10 < 0) {
  FUNC_6("fork() failed");
  return VAR_4;
 }

 if (VAR_10 == 0)
  FUNC_12();

 if (VAR_10) {
  VAR_6 = (struct shared *)FUNC_8(VAR_8, ((void*)0), 0);
  VAR_7 = (int *)FUNC_8(VAR_9, ((void*)0), 0);

  while (!VAR_7[0])
   asm volatile("" : : : "memory");
  VAR_11 = FUNC_13(VAR_10);
  if (VAR_11) {
   FUNC_5(VAR_10, VAR_3);
   FUNC_10((void *)VAR_6);
   FUNC_10((void *)VAR_7);
   FUNC_9(VAR_8, VAR_2, ((void*)0));
   FUNC_9(VAR_9, VAR_2, ((void*)0));
   return VAR_4;
  }

  FUNC_10((void *)VAR_6);
  FUNC_10((void *)VAR_7);
  VAR_11 = FUNC_14(&VAR_12);
  FUNC_9(VAR_8, VAR_2, ((void*)0));
  FUNC_9(VAR_9, VAR_2, ((void*)0));
  if (VAR_11 != VAR_10) {
   FUNC_7("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_2(VAR_12) && FUNC_1(VAR_12)) ? VAR_4 :
   VAR_5;
 }
 return VAR_5;
}
