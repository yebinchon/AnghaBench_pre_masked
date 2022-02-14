
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (char*,char const) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static inline int FUNC_5(char *VAR_1) {
 int VAR_2 = 1;
 const char VAR_3 = VAR_0;
 char *VAR_4 = VAR_1;
 char *VAR_5 = VAR_4;
 if (*VAR_5 == VAR_3) {
  VAR_5++;
 }






 while ((VAR_5 = FUNC_3 (VAR_5, VAR_3))) {
  *VAR_5 = 0;
  if (!FUNC_1 (VAR_4) && FUNC_2 ()) {
   FUNC_0 ("r_sys_mkdirp: fail '%s' of '%s'\n", VAR_4, VAR_1);
   *VAR_5 = VAR_3;
   return 0;
  }
  *VAR_5 = VAR_3;
  VAR_5++;
 }
 return VAR_2;
}
