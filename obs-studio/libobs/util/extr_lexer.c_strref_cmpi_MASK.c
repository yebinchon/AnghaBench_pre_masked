
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {size_t len; char const* array; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (struct strref const*) ;
 scalar_t__ FUNC_1 (char const) ;

int FUNC_2(const struct strref *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = 0;

 if (FUNC_0(VAR_1))
  return (!VAR_2 || !*VAR_2) ? 0 : -1;
 if (!VAR_2)
  VAR_2 = VAR_0;

 do {
  char VAR_4, VAR_5;

  VAR_4 = (VAR_3 < VAR_1->len) ? (char)FUNC_1(VAR_1->array[VAR_3]) : 0;
  VAR_5 = (char)FUNC_1(*VAR_2);

  if (VAR_4 < VAR_5)
   return -1;
  else if (VAR_4 > VAR_5)
   return 1;
 } while (VAR_3++ < VAR_1->len && *VAR_2++);

 return 0;
}
