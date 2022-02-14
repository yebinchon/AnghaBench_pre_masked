
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, char **VAR_2, const char *VAR_3, char VAR_4)
{
 char *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return 0;


 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_8;
 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_7) {
  *VAR_7 = '\0';
  ++VAR_7;
 }
 VAR_6 = VAR_7;

 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;

 return 0;
}
