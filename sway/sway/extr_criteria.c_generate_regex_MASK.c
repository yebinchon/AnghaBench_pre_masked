
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int,char const**,int*,int *) ;
 int FUNC_2 (int ,int,char const*,char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(pcre **VAR_3, char *VAR_4) {
 const char *VAR_5;
 int VAR_6;

 *VAR_3 = FUNC_1(VAR_4, VAR_1 | VAR_0, &VAR_5, &VAR_6, ((void*)0));

 if (!*VAR_3) {
  const char *VAR_7 = "Regex compilation for '%s' failed: %s";
  int VAR_8 = FUNC_3(VAR_7) + FUNC_3(VAR_4) + FUNC_3(VAR_5) - 3;
  VAR_2 = FUNC_0(VAR_8);
  FUNC_2(VAR_2, VAR_8, VAR_7, VAR_4, VAR_5);
  return 0;
 }

 return 1;
}
