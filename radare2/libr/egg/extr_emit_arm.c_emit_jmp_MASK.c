
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(REgg *VAR_0, const char *VAR_1, int VAR_2) {
 if (VAR_2) {
  FUNC_0 (VAR_0, "  ldr r0, %s", VAR_1);
  FUNC_0 (VAR_0, "  bx r0\n");
 } else {
  FUNC_0 (VAR_0, "  b %s\n", VAR_1);
 }
}
