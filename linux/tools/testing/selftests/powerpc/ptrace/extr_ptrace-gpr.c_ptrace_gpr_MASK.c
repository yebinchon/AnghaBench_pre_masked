
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int* VAR_6 ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int*) ;

int FUNC_13(void)
{
 pid_t VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_10(VAR_1, sizeof(int) * 2, 0777|VAR_0);
 VAR_8 = FUNC_2();
 if (VAR_8 < 0) {
  FUNC_5("fork() failed");
  return VAR_4;
 }
 if (VAR_8 == 0)
  FUNC_3();

 if (VAR_8) {
  VAR_6 = (int *)FUNC_7(VAR_7, ((void*)0), 0);
  while (!VAR_6[1])
   asm volatile("" : : : "memory");

  VAR_9 = FUNC_11(VAR_8);
  if (VAR_9) {
   FUNC_4(VAR_8, VAR_3);
   FUNC_9((void *)VAR_6);
   FUNC_8(VAR_7, VAR_2, ((void*)0));
   return VAR_4;
  }

  VAR_6[0] = 1;
  FUNC_9((void *)VAR_6);

  VAR_9 = FUNC_12(&VAR_10);
  FUNC_8(VAR_7, VAR_2, ((void*)0));
  if (VAR_9 != VAR_8) {
   FUNC_6("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_1(VAR_10) && FUNC_0(VAR_10)) ? VAR_4 :
   VAR_5;
 }

 return VAR_5;
}
