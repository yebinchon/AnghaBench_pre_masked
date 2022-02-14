
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
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int* VAR_9 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int*) ;

int FUNC_14(void)
{
 pid_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_10(VAR_1, sizeof(int) * 2, 0777|VAR_0);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  VAR_7[VAR_14] = VAR_14 + FUNC_6();

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  VAR_8[VAR_14] = VAR_14 + 2 * FUNC_6();

 VAR_11 = FUNC_2();
 if (VAR_11 < 0) {
  FUNC_4("fork() failed");
  return VAR_4;
 }

 if (VAR_11 == 0)
  FUNC_12();

 if (VAR_11) {
  VAR_9 = (int *)FUNC_7(VAR_10, ((void*)0), 0);
  while (!VAR_9[1])
   asm volatile("" : : : "memory");

  VAR_12 = FUNC_11(VAR_11);
  if (VAR_12) {
   FUNC_3(VAR_11, VAR_3);
   FUNC_9((void *)VAR_9);
   FUNC_8(VAR_10, VAR_2, ((void*)0));
   return VAR_4;
  }

  VAR_9[0] = 1;
  FUNC_9((void *)VAR_9);

  VAR_12 = FUNC_13(&VAR_13);
  FUNC_8(VAR_10, VAR_2, ((void*)0));
  if (VAR_12 != VAR_11) {
   FUNC_5("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_1(VAR_13) && FUNC_0(VAR_13)) ? VAR_4 :
   VAR_5;
 }
 return VAR_5;
}
