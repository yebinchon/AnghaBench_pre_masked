
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*,int,...) ;
 int FUNC_1 (char*,char const*,int,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3 = VAR_1, VAR_4 = 0;
 const char *VAR_5 = "sys membarrier MEMBARRIER_CMD_PRIVATE_EXPEDITED_SYNC_CORE not registered failure";

 if (FUNC_3(VAR_3, VAR_4) != -1) {
  FUNC_0(
   "%s test: flags = %d. Should fail, but passed\n",
   VAR_5, VAR_4);
 }
 if (VAR_2 != VAR_0) {
  FUNC_0(
   "%s test: flags = %d. Should return (%d: \"%s\"), but returned (%d: \"%s\").\n",
   VAR_5, VAR_4, VAR_0, FUNC_2(VAR_0),
   VAR_2, FUNC_2(VAR_2));
 }

 FUNC_1(
  "%s test: flags = %d, errno = %d\n",
  VAR_5, VAR_4, VAR_2);
 return 0;
}
