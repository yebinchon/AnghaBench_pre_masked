
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
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int* VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int*) ;

int FUNC_13(void)
{
 pid_t VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_8(VAR_1, sizeof(int) * 3, 0777|VAR_0);
 VAR_7 = FUNC_2();
 if (VAR_7 < 0) {
  FUNC_3("fork() failed");
  return VAR_3;
 }

 if (VAR_7 == 0)
  FUNC_9();

 if (VAR_7) {
  VAR_5 = (int *)FUNC_5(VAR_6, ((void*)0), 0);
  VAR_5[0] = 0;
  VAR_5[1] = 0;

  while (!VAR_5[2])
   asm volatile("" : : : "memory");
  VAR_8 = FUNC_10(VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_11(VAR_7);
  if (VAR_8)
   return VAR_8;


  VAR_5[0] = 1;


  while (!VAR_5[1])
   asm volatile("" : : : "memory");

  FUNC_7((int *)VAR_5);

  VAR_8 = FUNC_12(&VAR_9);
  FUNC_6(VAR_6, VAR_2, ((void*)0));
  if (VAR_8 != VAR_7) {
   FUNC_4("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_1(VAR_9) && FUNC_0(VAR_9)) ? VAR_3 :
   VAR_4;
 }
 return VAR_4;
}
