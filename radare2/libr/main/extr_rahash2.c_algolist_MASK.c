
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long ut64 ;


 unsigned long long VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (unsigned long long) ;
 char* FUNC_2 (unsigned long long) ;

__attribute__((used)) static void FUNC_3() {
 ut64 VAR_1;
 ut64 VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1 = 1ULL << VAR_2;
  const char *VAR_3 = FUNC_2 (VAR_1);
  if (VAR_3 && *VAR_3) {
   FUNC_0 ("h  %s\n", VAR_3);
  }
 }

 FUNC_0 ("e  base64\n");
 FUNC_0 ("e  base91\n");
 FUNC_0 ("e  punycode\n");
 for (VAR_2 = 0;; VAR_2++) {
  VAR_1 = ((ut64) 1) << VAR_2;
  const char *VAR_4 = FUNC_1 (VAR_1);
  if (!VAR_4 || !*VAR_4) {
   break;
  }
  FUNC_0 ("c  %s\n", VAR_4);
 }
}
