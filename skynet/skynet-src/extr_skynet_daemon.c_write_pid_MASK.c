
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,char*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_5) {
 FILE *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = FUNC_8(VAR_5, VAR_3|VAR_2, 0644);
 if (VAR_8 == -1) {
  FUNC_5(VAR_4, "Can't create pidfile [%s].\n", VAR_5);
  return 0;
 }
 VAR_6 = FUNC_2(VAR_8, "w+");
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_4, "Can't open pidfile [%s].\n", VAR_5);
  return 0;
 }

 if (FUNC_4(VAR_8, VAR_0|VAR_1) == -1) {
  int VAR_9 = FUNC_6(VAR_6, "%d", &VAR_7);
  FUNC_1(VAR_6);
  if (VAR_9 != 1) {
   FUNC_5(VAR_4, "Can't lock and read pidfile.\n");
  } else {
   FUNC_5(VAR_4, "Can't lock pidfile, lock is held by pid %d.\n", VAR_7);
  }
  return 0;
 }

 VAR_7 = FUNC_7();
 if (!FUNC_5(*VAR_6,"%d\n", VAR_7)) {
  FUNC_5(VAR_4, "Can't write pid.\n");
  FUNC_0(VAR_8);
  return 0;
 }
 FUNC_3(VAR_6);

 return VAR_7;
}
