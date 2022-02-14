
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,char*,int,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_0, int VAR_1)
{
 char *VAR_2;
 int VAR_3 = FUNC_4(VAR_0) + 2 + 1;
 char *VAR_4;
 char *VAR_5;

 if (!(VAR_4 = (char *) FUNC_1(VAR_3)))
  return ((void*)0);

 if (!(VAR_5 = (char *) FUNC_1(VAR_3)))
 {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 FUNC_3(VAR_4, VAR_0);
 VAR_2 = FUNC_5(VAR_4, '.');
 if (!VAR_2)
 {
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 *VAR_2 = '\0';
 FUNC_2(VAR_5, VAR_3, "%s_%d.%s", VAR_4, VAR_1, VAR_2 + 1);
 FUNC_0(VAR_4);
 return VAR_5;
}
