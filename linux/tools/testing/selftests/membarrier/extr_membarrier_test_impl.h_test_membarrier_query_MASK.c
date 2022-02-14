
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4 = 0, VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 < 0) {
  if (VAR_3 == VAR_0) {




   FUNC_1(
    "sys membarrier (CONFIG_MEMBARRIER) is disabled.\n");
  }
  FUNC_0("sys_membarrier() failed\n");
 }
 if (!(VAR_5 & VAR_1))
  FUNC_1(
   "sys_membarrier unsupported: CMD_GLOBAL not found.\n");

 FUNC_2("sys_membarrier available\n");
 return 0;
}
