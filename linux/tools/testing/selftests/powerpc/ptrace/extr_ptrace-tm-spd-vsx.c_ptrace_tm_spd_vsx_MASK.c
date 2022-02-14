
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
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 int* VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int*) ;

int FUNC_16(void)
{
 pid_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_0(!FUNC_4());
 VAR_11 = FUNC_12(VAR_1, sizeof(int) * 3, 0777|VAR_0);

 for (VAR_15 = 0; VAR_15 < 128; VAR_15++) {
  VAR_6[VAR_15] = 1 + FUNC_8();
  VAR_9[VAR_15] = 1 + 2 * FUNC_8();
  VAR_7[VAR_15] = 1 + 3 * FUNC_8();
  VAR_8[VAR_15] = 1 + 4 * FUNC_8();
 }

 VAR_12 = FUNC_3();
 if (VAR_12 < 0) {
  FUNC_6("fork() failed");
  return VAR_4;
 }

 if (VAR_12 == 0)
  FUNC_13();

 if (VAR_12) {
  VAR_10 = (int *)FUNC_9(VAR_11, ((void*)0), 0);
  while (!VAR_10[2])
   asm volatile("" : : : "memory");

  VAR_13 = FUNC_14(VAR_12);
  if (VAR_13) {
   FUNC_5(VAR_12, VAR_3);
   FUNC_11((void *)VAR_10);
   FUNC_10(VAR_11, VAR_2, ((void*)0));
   return VAR_4;
  }

  FUNC_11((void *)VAR_10);
  VAR_13 = FUNC_15(&VAR_14);
  FUNC_10(VAR_11, VAR_2, ((void*)0));
  if (VAR_13 != VAR_12) {
   FUNC_7("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_2(VAR_14) && FUNC_1(VAR_14)) ? VAR_4 :
   VAR_5;
 }
 return VAR_5;
}
