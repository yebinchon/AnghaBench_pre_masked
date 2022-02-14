
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char *VAR_1,
    const char *VAR_2, int VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_1(VAR_0, '.');
 if (VAR_4) {

  *VAR_4 = '\0';
  VAR_2 = VAR_0;
  VAR_0 = VAR_4 + 1;
 }
 if (FUNC_2(VAR_0, "dyndbg"))
  return VAR_3;

 FUNC_0((VAR_1 ? VAR_1 : "+p"), VAR_2);

 return 0;
}
