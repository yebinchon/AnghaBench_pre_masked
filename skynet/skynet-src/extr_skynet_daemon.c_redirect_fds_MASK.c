
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4() {
 int VAR_1 = FUNC_2("/dev/null", VAR_0);
 if (VAR_1 == -1) {
  FUNC_3("Unable to open /dev/null: ");
  return -1;
 }
 if (FUNC_1(VAR_1, 0) < 0) {
  FUNC_3("Unable to dup2 stdin(0): ");
  return -1;
 }
 if (FUNC_1(VAR_1, 1) < 0) {
  FUNC_3("Unable to dup2 stdout(1): ");
  return -1;
 }
 if (FUNC_1(VAR_1, 2) < 0) {
  FUNC_3("Unable to dup2 stderr(2): ");
  return -1;
 }

 FUNC_0(VAR_1);

 return 0;
}
