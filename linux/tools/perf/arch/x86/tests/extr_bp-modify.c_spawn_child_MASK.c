
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_2 = FUNC_2();

 if (VAR_2 == 0) {





  int VAR_3 = FUNC_4(VAR_0, 0, ((void*)0), ((void*)0));

  if (VAR_3) {
   FUNC_3("failed to PTRACE_TRACEME\n");
   FUNC_1(1);
  }

  FUNC_5(VAR_1);
  FUNC_0();
  FUNC_1(0);
 }

 return VAR_2;
}
