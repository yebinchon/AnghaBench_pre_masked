
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 unsigned long* VAR_6 ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int*) ;

int FUNC_15(void)
{
 pid_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(!FUNC_4());
 VAR_7 = FUNC_11(VAR_1, sizeof(int) * 2, 0777|VAR_0);
 VAR_8 = FUNC_3();
 if (VAR_8 < 0) {
  FUNC_6("fork() failed");
  return VAR_4;
 }
 if (VAR_8 == 0)
  FUNC_12();

 if (VAR_8) {
  VAR_6 = (unsigned long *)FUNC_8(VAR_7, ((void*)0), 0);

  while (!VAR_6[1])
   asm volatile("" : : : "memory");
  VAR_9 = FUNC_13(VAR_8);
  if (VAR_9) {
   FUNC_5(VAR_8, VAR_3);
   return VAR_4;
  }

  FUNC_10((void *)VAR_6);

  VAR_9 = FUNC_14(&VAR_10);
  FUNC_9(VAR_7, VAR_2, ((void*)0));
  if (VAR_9 != VAR_8) {
   FUNC_7("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_2(VAR_10) && FUNC_1(VAR_10)) ? VAR_4 :
   VAR_5;
 }
 return VAR_5;
}
