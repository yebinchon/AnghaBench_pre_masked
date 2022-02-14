
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* s; int len; } ;
struct TYPE_3__ {TYPE_2__ s_name; } ;
struct demangle_component {TYPE_1__ u; int type; scalar_t__ d_printing; } ;


 int VAR_0 ;

int
FUNC_0 (struct demangle_component *VAR_1, const char *VAR_2, int VAR_3)
{
  if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
    return 0;
  VAR_1->d_printing = 0;
  VAR_1->type = VAR_0;
  VAR_1->u.s_name.s = VAR_2;
  VAR_1->u.s_name.len = VAR_3;
  return 1;
}
