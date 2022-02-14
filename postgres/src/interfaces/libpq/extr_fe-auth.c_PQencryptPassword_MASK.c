
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,char const*,int ,char*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_1(VAR_0 + 1);
 if (!VAR_3)
  return ((void*)0);

 if (!FUNC_2(VAR_1, VAR_2, FUNC_3(VAR_2), VAR_3))
 {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
