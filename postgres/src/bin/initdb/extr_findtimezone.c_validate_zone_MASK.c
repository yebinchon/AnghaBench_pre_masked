
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_tz ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0)
{
 pg_tz *VAR_1;

 if (!VAR_0 || !VAR_0[0])
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;

 if (!FUNC_1(VAR_1))
  return 0;

 return 1;
}
