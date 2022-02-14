
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct str_values {int val; char const* str; } ;
struct TYPE_2__ {unsigned int isa; struct str_values* strings; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(unsigned VAR_1, int VAR_2)
{
 struct str_values *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].strings; ++VAR_4)
  if (VAR_0[VAR_4].isa == VAR_1) {
   VAR_3 = VAR_0[VAR_4].strings;
   break;
  }
 if (!VAR_3)
  return "UNKNOWN-ISA";
 for (VAR_4 = 0; VAR_3[VAR_4].val >= 0; VAR_4++)
  if (VAR_3[VAR_4].val == VAR_2)
   break;

 return VAR_3[VAR_4].str;
}
