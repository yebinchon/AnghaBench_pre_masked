
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

bool FUNC_3(const char *VAR_0, const char *VAR_1)
{
 bool VAR_2;
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 if (!VAR_0 || !VAR_1)
  return 0;

 if (FUNC_2(VAR_0, "default") == 0) {
  FUNC_1(&VAR_3);
  VAR_0 = VAR_3;
 }
 if (FUNC_2(VAR_1, "default") == 0) {
  FUNC_1(&VAR_4);
  VAR_1 = VAR_4;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1) == 0;
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 return VAR_2;
}
