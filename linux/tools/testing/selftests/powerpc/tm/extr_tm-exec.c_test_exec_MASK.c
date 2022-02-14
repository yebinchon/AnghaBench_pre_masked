
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void)
{
 FUNC_0(!FUNC_2());

 asm __volatile__(
  "tbegin.;"
  "blt    1f; "
  "tsuspend.;"
  "1: ;"
  : : : "memory");

 FUNC_1(VAR_0, "tm-exec", "--child", ((void*)0));


 FUNC_3("execl() failed");
 return 1;
}
