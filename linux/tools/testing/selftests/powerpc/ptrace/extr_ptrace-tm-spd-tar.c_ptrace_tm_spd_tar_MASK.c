
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
 int* VAR_6 ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int**) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int*) ;

int FUNC_14(void)
{
 pid_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(!FUNC_4());
 VAR_7 = FUNC_10(VAR_1, sizeof(int) * 3, 0777|VAR_0);
 VAR_8 = FUNC_3();
 if (VAR_8 == 0)
  FUNC_11();

 VAR_6 = (int *)FUNC_7(VAR_7, ((void*)0), 0);
 VAR_6[0] = 0;
 VAR_6[1] = 0;

 if (VAR_8) {
  while (!VAR_6[2])
   asm volatile("" : : : "memory");
  VAR_9 = FUNC_12(VAR_8);
  if (VAR_9) {
   FUNC_5(VAR_8, VAR_3);
   FUNC_9(&VAR_6);
   FUNC_8(VAR_7, VAR_2, ((void*)0));
   return VAR_4;
  }

  FUNC_9(&VAR_6);

  VAR_9 = FUNC_13(&VAR_10);
  FUNC_8(VAR_7, VAR_2, ((void*)0));
  if (VAR_9 != VAR_8) {
   FUNC_6("Child's exit status not captured\n");
   return VAR_4;
  }

  return (FUNC_2(VAR_10) && FUNC_1(VAR_10)) ? VAR_4 :
   VAR_5;
 }
 return VAR_5;
}
