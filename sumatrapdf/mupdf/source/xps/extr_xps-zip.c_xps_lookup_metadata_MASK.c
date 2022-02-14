
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4)
{
 if (!FUNC_1(VAR_2, "format"))
  return (int)FUNC_0(VAR_3, "XPS", VAR_4);
 return -1;
}
