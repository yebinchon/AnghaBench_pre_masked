
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_0) {
  size_t VAR_1;
  for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) { if (!FUNC_0("0123456789", VAR_0[VAR_1])) { return 0; } }
  return 1;
}
