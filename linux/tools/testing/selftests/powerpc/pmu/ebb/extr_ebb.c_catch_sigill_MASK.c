
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_2 ;

int FUNC_3(void (*VAR_3)(void))
{
 if (FUNC_2(VAR_0, &VAR_2, ((void*)0))) {
  FUNC_0("sigaction");
  return 1;
 }

 if (FUNC_1(VAR_1) == 0) {
  VAR_3();
  return 1;
 }

 return 0;
}
