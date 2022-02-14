
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,long,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(pid_t VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2) < 0)
  FUNC_0(VAR_0, "kill(%ld,%d) failed: %m", (long) VAR_1, VAR_2);
}
