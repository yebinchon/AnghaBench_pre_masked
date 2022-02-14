
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(char *VAR_1[]) {
 extern char **VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 != VAR_1)
  return 0;

 if ((VAR_5 = FUNC_1()))
  goto error;

 for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {
  if (!(VAR_3 = FUNC_2(VAR_1[VAR_4], '=')))
   continue;

  *VAR_3 = '\0';
  VAR_5 = (0 != FUNC_0(VAR_1[VAR_4], VAR_3 + 1, 1))? VAR_0 : 0;
  *VAR_3 = '=';

  if (VAR_5)
   goto error;
 }

 return 0;
error:
 VAR_2 = VAR_1;

 return VAR_5;
}
