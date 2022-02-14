
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4()
{
 int VAR_4 = FUNC_2("/dev/null", VAR_0);

 if (0 > VAR_4) {
  FUNC_3(VAR_3, "failed to init stdio: open(\"/dev/null\")");
  return -1;
 }

 if (0 > FUNC_1(VAR_4, VAR_1) || 0 > FUNC_1(VAR_4, VAR_2)) {
  FUNC_3(VAR_3, "failed to init stdio: dup2()");
  FUNC_0(VAR_4);
  return -1;
 }
 FUNC_0(VAR_4);
 return 0;
}
