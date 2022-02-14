
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, char** VAR_1, const char *VAR_2) {
 int VAR_3;
 char *VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_4 = (char*) VAR_2; *VAR_4; VAR_4++) {
   *(*VAR_1)++ = *VAR_4;
  }
 }
}
