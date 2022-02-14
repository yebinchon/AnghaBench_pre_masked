
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2()
{
 if (0 > FUNC_0(VAR_0, &VAR_2, ((void*)0))) {
  FUNC_1(VAR_1, "failed to block signals");
  return -1;
 }
 return 0;
}
