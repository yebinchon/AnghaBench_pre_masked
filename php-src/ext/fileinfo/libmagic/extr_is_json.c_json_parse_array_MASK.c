
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;
 size_t VAR_0 ;
 int FUNC_1 (unsigned char const**,unsigned char const*,size_t*,size_t) ;

__attribute__((used)) static int
FUNC_2(const unsigned char **VAR_1, const unsigned char *VAR_2,
 size_t *VAR_3, size_t VAR_4)
{
 const unsigned char *VAR_5 = *VAR_1;
 int VAR_6 = 0;

 FUNC_0("Parse array: ", VAR_5, *VAR_1);
 while (VAR_5 < VAR_2) {
  if (!FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4 + 1))
   goto out;
  if (VAR_5 == VAR_2)
   goto out;
  switch (*VAR_5) {
  case ',':
   VAR_6++;
   VAR_5++;
   continue;
  case ']':
   if (VAR_6)
    VAR_3[VAR_0]++;
   *VAR_1 = VAR_5 + 1;
   return 1;
  default:
   goto out;
  }
 }
out:
 FUNC_0("Bad array: ", VAR_5, *VAR_1);
 *VAR_1 = VAR_5;
 return 0;
}
