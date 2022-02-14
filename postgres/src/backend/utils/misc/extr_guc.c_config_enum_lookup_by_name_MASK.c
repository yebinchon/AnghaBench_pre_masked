
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_enum_entry {int val; scalar_t__ name; } ;
struct config_enum {struct config_enum_entry* options; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;

bool
FUNC_1(struct config_enum *VAR_0, const char *VAR_1,
         int *VAR_2)
{
 const struct config_enum_entry *VAR_3;

 for (VAR_3 = VAR_0->options; VAR_3 && VAR_3->name; VAR_3++)
 {
  if (FUNC_0(VAR_1, VAR_3->name) == 0)
  {
   *VAR_2 = VAR_3->val;
   return 1;
  }
 }

 *VAR_2 = 0;
 return 0;
}
