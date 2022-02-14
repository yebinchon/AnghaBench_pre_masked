
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;


 scalar_t__ FUNC_0 (int ,char*,size_t) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_4(gzFile VAR_0, char *VAR_1, size_t VAR_2,
        char **VAR_3)
{
 char *VAR_4;

 while (FUNC_0(VAR_0, VAR_1, VAR_2)) {
  if (FUNC_3(VAR_1, "CONFIG_", 7))
   continue;

  VAR_4 = FUNC_1(VAR_1, '=');
  if (!VAR_4)
   continue;


  VAR_1[FUNC_2(VAR_1) - 1] = '\0';


  *VAR_4 = '\0';
  if (!VAR_4[1])
   continue;

  *VAR_3 = VAR_4 + 1;
  return 1;
 }

 return 0;
}
