
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_1) {
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  FUNC_2(VAR_0, "Skynet is already running, pid = %d.\n", VAR_2);
  return 1;
 }




 if (FUNC_1(1,1)) {
  FUNC_2(VAR_0, "Can't daemonize.\n");
  return 1;
 }


 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 == 0) {
  return 1;
 }

 if (FUNC_3()) {
  return 1;
 }

 return 0;
}
