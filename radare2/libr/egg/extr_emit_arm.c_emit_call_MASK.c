
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int VAR_0 ;
 scalar_t__** VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(REgg *VAR_2, const char *VAR_3, int VAR_4) {
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0 (VAR_2, "  ldr r%d, [%s]\n", VAR_0 - 1 - VAR_5, VAR_1[VAR_5]);
  VAR_1[VAR_5][0] = 0;
 }

 if (VAR_4) {
  FUNC_0 (VAR_2, "  ldr r0, %s", VAR_3);
  FUNC_0 (VAR_2, "  blx r0\n");
 } else {
  FUNC_0 (VAR_2, "  bl %s\n", VAR_3);
 }
}
