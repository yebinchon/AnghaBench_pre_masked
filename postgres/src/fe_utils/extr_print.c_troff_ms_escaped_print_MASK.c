
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const,int *) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, FILE *VAR_1)
{
 const char *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
  switch (*VAR_2)
  {
   case '\\':
    FUNC_1("\\(rs", VAR_1);
    break;
   default:
    FUNC_0(*VAR_2, VAR_1);
  }
}
