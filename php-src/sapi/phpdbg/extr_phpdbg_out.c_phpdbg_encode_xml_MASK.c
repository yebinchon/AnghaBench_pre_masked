
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char **VAR_0, char *VAR_1, int VAR_2, int VAR_3, char *VAR_4) {
 int VAR_5;
 int VAR_6 = VAR_4 ? FUNC_4(VAR_4) : 5;
 char *VAR_7 = *VAR_0 = FUNC_1(VAR_2 * VAR_6);
 for (VAR_5 = 0; VAR_5++ < VAR_2; VAR_1++) {
  if (*VAR_1 == '&') {
   FUNC_3(VAR_7, FUNC_0("&amp;"));
   VAR_7 += sizeof("&amp;") - 1;
  } else if (*VAR_1 == '<') {
   FUNC_3(VAR_7, FUNC_0("&lt;"));
   VAR_7 += sizeof("&lt;") - 1;
  } else if (((int) *VAR_1) == VAR_3) {
   FUNC_3(VAR_7, VAR_4, VAR_6);
   VAR_7 += VAR_6;
  } else {
   *VAR_7++ = *VAR_1;
  }
 }

 {
  int VAR_8 = VAR_7 - *VAR_0;
  *VAR_0 = FUNC_2(*VAR_0, VAR_8 + 1);
  return VAR_8;
 }
}
