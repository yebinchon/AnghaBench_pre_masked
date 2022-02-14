
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int*,int ,int ,int *,int *,int ) ;

__attribute__((used)) static void *FUNC_4(void *VAR_4)
{
 while (1) {
  while (VAR_3 == 0)
   FUNC_3(VAR_2, &VAR_3, VAR_0, 0, ((void*)0), ((void*)0), 0);
  if (VAR_3 == 3)
   return ((void*)0);

  if (VAR_3 == 1) {
   FUNC_0();
  } else if (VAR_3 == 2) {





   FUNC_2();
   asm volatile ("mov %0, %%gs" : : "rm" ((unsigned short)0));
  } else {
   FUNC_1(1, "helper thread got bad command");
  }

  VAR_3 = 0;
  FUNC_3(VAR_2, &VAR_3, VAR_1, 0, ((void*)0), ((void*)0), 0);
 }
}
