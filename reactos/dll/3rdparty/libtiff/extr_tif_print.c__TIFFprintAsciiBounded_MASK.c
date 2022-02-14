
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const) ;
 int FUNC_1 (char const,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(FILE* VAR_0, const char* VAR_1, size_t VAR_2)
{
 for (; VAR_2 > 0 && *VAR_1 != '\0'; VAR_1++, VAR_2--) {
  const char* VAR_3;

  if (FUNC_2((int)*VAR_1)) {
   FUNC_1(*VAR_1, VAR_0);
   continue;
  }
  for (VAR_3 = "\tt\bb\rr\nn\vv"; *VAR_3; VAR_3++)
   if (*VAR_3++ == *VAR_1)
    break;
  if (*VAR_3)
   FUNC_0(VAR_0, "\\%c", *VAR_3);
  else
   FUNC_0(VAR_0, "\\%03o", *VAR_1 & 0xff);
 }
}
