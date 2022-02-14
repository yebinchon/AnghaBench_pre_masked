
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_2(REgg *VAR_1, const char *VAR_2, int VAR_3) {
 if (VAR_2) {
  if (VAR_3) {
   if (VAR_0) {
    FUNC_1 (VAR_1, "  jmp *%s\n", VAR_2);
   } else {
    FUNC_1 (VAR_1, "  jmp [%s]\n", VAR_2);
   }
  } else {
   FUNC_1 (VAR_1, "  jmp %s\n", VAR_2);
  }
 } else {
  FUNC_0 ("Jump without destination\n");
 }
}
