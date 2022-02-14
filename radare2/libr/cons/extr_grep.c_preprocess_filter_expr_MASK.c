
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, const char *VAR_1) {
 char *VAR_2, *VAR_3, *VAR_4 = ((void*)0);
 const char *VAR_5 = "&";
 int VAR_6;
 int VAR_7;

 VAR_2 = FUNC_0 (VAR_0, VAR_1);
 if (!VAR_2) {
  return ((void*)0);
 }

 VAR_6 = FUNC_4 (VAR_2);
 if (VAR_6 > 4 && FUNC_3 (VAR_2, "~?") && VAR_2[VAR_6 - 3] != '\\') {
  VAR_2[VAR_6 - 2] = '\0';
  VAR_4 = FUNC_1 (VAR_4, "?");
 }

 *VAR_2 = '\0';

 VAR_7 = 0;

 while ((VAR_3 = FUNC_0 (VAR_2 + 1, VAR_1))) {
  VAR_4 = FUNC_1 (VAR_4, VAR_5);
  VAR_4 = FUNC_2 (VAR_4, VAR_2 + 1, (int)(VAR_3 - VAR_2 - 1));
  VAR_2 = VAR_3;
  VAR_5 = ",";
  VAR_7++;
 }

 if (VAR_7 > 0) {
  VAR_4 = FUNC_1 (VAR_4, ",");
 }

 VAR_4 = FUNC_1 (VAR_4, VAR_2 + 1);

 return VAR_4;
}
