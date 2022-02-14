
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const* const) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0)
{
 const char *const *VAR_1;
 static const char *const VAR_2[] = {
  "CREATE DATABASE postgres;\n\n",
  "COMMENT ON DATABASE postgres IS 'default administrative connection database';\n\n",
  ((void*)0)
 };

 for (VAR_1 = VAR_2; *VAR_1; VAR_1++)
  FUNC_0(*VAR_1);
}
