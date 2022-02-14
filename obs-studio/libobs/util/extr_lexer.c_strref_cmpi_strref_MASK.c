
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {size_t len; int * array; } ;


 scalar_t__ FUNC_0 (struct strref const*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(const struct strref *VAR_0, const struct strref *VAR_1)
{
 size_t VAR_2 = 0;

 if (FUNC_0(VAR_0))
  return FUNC_0(VAR_1) ? 0 : -1;
 if (FUNC_0(VAR_1))
  return -1;

 do {
  char VAR_3, VAR_4;

  VAR_3 = (VAR_2 < VAR_0->len) ? (char)FUNC_1(VAR_0->array[VAR_2]) : 0;
  VAR_4 = (VAR_2 < VAR_1->len) ? (char)FUNC_1(VAR_1->array[VAR_2]) : 0;

  if (VAR_3 < VAR_4)
   return -1;
  else if (VAR_3 > VAR_4)
   return 1;

  VAR_2++;
 } while (VAR_2 <= VAR_0->len && VAR_2 <= VAR_1->len);

 return 0;
}
