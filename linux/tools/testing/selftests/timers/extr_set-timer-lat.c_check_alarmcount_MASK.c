
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(int VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 FUNC_1("count: %19d : ", VAR_0);
 if (VAR_0 == 1) {
  FUNC_1("[OK]\n");
  return 0;
 }
 FUNC_1("[FAILED]\n");
 return -1;
}
