
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char **VAR_1, char **VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = VAR_0;
 VAR_5 = FUNC_0(VAR_0, '.');

 if (VAR_5) {
  *VAR_5++ = '\0';
 } else {
  VAR_4 = ((void*)0);
  VAR_5 = VAR_0;
 }

 VAR_6 = FUNC_0(VAR_5, '/');
 if (VAR_6)
  *VAR_6++ = '\0';

 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;

 return 0;
}
