
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const unsigned char **VAR_0, const unsigned char *VAR_1)
{
 const unsigned char *VAR_2 = *VAR_0;
 size_t VAR_3;

 FUNC_0("Parse string: ", VAR_2, *VAR_0);
 while (VAR_2 < VAR_1) {
  switch (*VAR_2++) {
  case '\0':
   goto out;
  case '\\':
   if (VAR_2 == VAR_1)
    goto out;
   switch (*VAR_2++) {
   case '\0':
    goto out;
   case '"':
   case '\\':
   case '/':
   case 'b':
   case 'f':
   case 'n':
   case 'r':
   case 't':
    continue;
   case 'u':
    if (VAR_1 - VAR_2 < 4) {
     VAR_2 = VAR_1;
     goto out;
    }
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
     if (!FUNC_1(*VAR_2++))
      goto out;
    continue;
   default:
    goto out;
   }
  case '"':
   *VAR_0 = VAR_2;
   return 1;
  default:
   continue;
  }
 }
out:
 FUNC_0("Bad string: ", VAR_2, *VAR_0);
 *VAR_0 = VAR_2;
 return 0;
}
