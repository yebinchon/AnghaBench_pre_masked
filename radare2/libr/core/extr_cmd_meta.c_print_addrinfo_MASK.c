
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5 (void *VAR_4, const char *VAR_5, const char *VAR_6) {
 ut64 VAR_7 = FUNC_2 (VAR_5);
 if (!VAR_7 || VAR_7 == VAR_0) {
  return 1;
 }
 char *VAR_8 = FUNC_4 (VAR_6);
 char *VAR_9 = FUNC_3 (VAR_8, '|');
 if (!VAR_9) {
  VAR_9 = FUNC_3 (VAR_8, ':');
 }
 if (!VAR_9) {
  FUNC_1 ("%s\n", VAR_8);
 }
 if (VAR_9 && (VAR_3 == VAR_0 || VAR_3 == VAR_7)) {
  if (VAR_2) {
   *VAR_9 = ':';
   FUNC_1 ("CL %s %s\n", VAR_5, VAR_8);
  } else {
   *VAR_9 = 0;
   FUNC_1 ("file: %s\nline: %s\n", VAR_8, VAR_9 + 1);
  }
  VAR_1++;
 }
 FUNC_0 (VAR_8);

 return 1;
}
