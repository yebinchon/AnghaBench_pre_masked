
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

void
FUNC_5(const char *VAR_0)
{
 char *VAR_1;

 VAR_1 = (char *) FUNC_1(FUNC_4(VAR_0) + 2);
 if (!VAR_1)
  return;

 FUNC_3(VAR_1, "%s=", VAR_0);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
