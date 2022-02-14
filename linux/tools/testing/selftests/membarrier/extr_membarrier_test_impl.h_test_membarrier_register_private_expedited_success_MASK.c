
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int,int ) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2 = VAR_0, VAR_3 = 0;
 const char *VAR_4 = "sys membarrier MEMBARRIER_CMD_REGISTER_PRIVATE_EXPEDITED";

 if (FUNC_2(VAR_2, VAR_3) != 0) {
  FUNC_0(
   "%s test: flags = %d, errno = %d\n",
   VAR_4, VAR_3, VAR_1);
 }

 FUNC_1(
  "%s test: flags = %d\n",
  VAR_4, VAR_3);
 return 0;
}
