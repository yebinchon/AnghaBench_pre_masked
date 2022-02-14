
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int match_size; } ;
struct xt_entry_match {TYPE_1__ u; } ;
typedef scalar_t__ pos ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, const char *VAR_2,
    const size_t VAR_3)
{
 const struct xt_entry_match *VAR_4;
 int VAR_5 = VAR_2 - VAR_1;

 if (VAR_5 == 0)
  return 0;

 VAR_4 = (struct xt_entry_match *)VAR_1;
 do {
  if ((unsigned long)VAR_4 % VAR_3)
   return -VAR_0;

  if (VAR_5 < (int)sizeof(struct xt_entry_match))
   return -VAR_0;

  if (VAR_4->u.match_size < sizeof(struct xt_entry_match))
   return -VAR_0;

  if (VAR_4->u.match_size > VAR_5)
   return -VAR_0;

  VAR_5 -= VAR_4->u.match_size;
  VAR_4 = ((void *)((char *)(VAR_4) + (VAR_4)->u.match_size));
 } while (VAR_5 > 0);

 return 0;
}
