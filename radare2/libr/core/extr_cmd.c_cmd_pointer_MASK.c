
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, const char *VAR_2) {
 RCore *VAR_3 = (RCore*) VAR_1;
 int VAR_4 = 1;
 char *VAR_5, *VAR_6;
 VAR_2 = FUNC_3 (VAR_2);
 while (*VAR_2 == ' ') {
  VAR_2++;
 }
 if (!*VAR_2 || *VAR_2 == '?') {
  FUNC_1 (VAR_3, VAR_0);
  return VAR_4;
 }
 VAR_5 = FUNC_5 (VAR_2);
 VAR_6 = FUNC_4 (VAR_5, '=');
 if (VAR_6) {
  *VAR_6++ = 0;
  if (!FUNC_6 (VAR_6, "0x", 2)) {
   VAR_4 = FUNC_2 (VAR_3, "wv %s@%s", VAR_6, VAR_5);
  } else {
   VAR_4 = FUNC_2 (VAR_3, "wx %s@%s", VAR_6, VAR_5);
  }
 } else {
  VAR_4 = FUNC_2 (VAR_3, "?v [%s]", VAR_2);
 }
 FUNC_0 (VAR_5);
 return VAR_4;
}
