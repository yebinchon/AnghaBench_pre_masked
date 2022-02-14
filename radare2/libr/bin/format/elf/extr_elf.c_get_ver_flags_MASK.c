
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(ut32 VAR_2) {
 static char VAR_3[32];
 VAR_3[0] = 0;

 if (!VAR_2) {
  return "none";
 }
 if (VAR_2 & VAR_0) {
  FUNC_1 (VAR_3, "BASE ");
 }
 if (VAR_2 & VAR_1) {
  if (VAR_2 & VAR_0) {
   FUNC_0 (VAR_3, "| ");
  }
  FUNC_0 (VAR_3, "WEAK ");
 }

 if (VAR_2 & ~(VAR_0 | VAR_1)) {
  FUNC_0 (VAR_3, "| <unknown>");
 }
 return VAR_3;
}
