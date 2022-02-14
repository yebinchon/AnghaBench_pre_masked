
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char const*) ;

char *FUNC_4 (RCore *VAR_2, bool VAR_3) {
 const char *VAR_4 = VAR_3 ? VAR_0 : VAR_1;
 const char *VAR_5 = FUNC_1 (VAR_2, "Search Strings: ");
 char *VAR_6 = FUNC_0 (VAR_2, VAR_4);
 char *VAR_7 = FUNC_3 ("%s~%s", VAR_6, VAR_5);
 FUNC_2 (VAR_6);
 return VAR_7;
}
