
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_1 = FUNC_1();
 if (!VAR_1) {
  FUNC_0(VAR_2, "OpAgent initialization failed [%d]!\n", VAR_0);
  return 0;
 }
 return 1;
}
