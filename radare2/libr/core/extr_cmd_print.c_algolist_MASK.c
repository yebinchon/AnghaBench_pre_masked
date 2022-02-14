
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long ut64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (unsigned long long) ;

__attribute__((used)) static void FUNC_4(int VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  ut64 VAR_3 = 1ULL << VAR_2;
  const char *VAR_4 = FUNC_3 (VAR_3);
  if (VAR_4 && *VAR_4) {
   if (VAR_1) {
    FUNC_2 (VAR_4);
   } else {
    FUNC_1 ("%s ", VAR_4);
   }
  }
 }
 if (!VAR_1) {
  FUNC_0 ();
 }
}
