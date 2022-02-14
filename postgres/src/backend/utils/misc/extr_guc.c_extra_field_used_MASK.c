
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_string {void* reset_extra; } ;
struct config_real {void* reset_extra; } ;
struct config_int {void* reset_extra; } ;
struct config_generic {void* extra; int vartype; TYPE_3__* stack; } ;
struct config_enum {void* reset_extra; } ;
struct config_bool {void* reset_extra; } ;
struct TYPE_5__ {void* extra; } ;
struct TYPE_4__ {void* extra; } ;
struct TYPE_6__ {TYPE_2__ masked; TYPE_1__ prior; struct TYPE_6__* prev; } ;
typedef TYPE_3__ GucStack ;
__attribute__((used)) static bool
FUNC_0(struct config_generic *VAR_0, void *VAR_1)
{
 GucStack *VAR_2;

 if (VAR_1 == VAR_0->extra)
  return 1;
 switch (VAR_0->vartype)
 {
  case 132:
   if (VAR_1 == ((struct config_bool *) VAR_0)->reset_extra)
    return 1;
   break;
  case 130:
   if (VAR_1 == ((struct config_int *) VAR_0)->reset_extra)
    return 1;
   break;
  case 129:
   if (VAR_1 == ((struct config_real *) VAR_0)->reset_extra)
    return 1;
   break;
  case 128:
   if (VAR_1 == ((struct config_string *) VAR_0)->reset_extra)
    return 1;
   break;
  case 131:
   if (VAR_1 == ((struct config_enum *) VAR_0)->reset_extra)
    return 1;
   break;
 }
 for (VAR_2 = VAR_0->stack; VAR_2; VAR_2 = VAR_2->prev)
 {
  if (VAR_1 == VAR_2->prior.extra ||
   VAR_1 == VAR_2->masked.extra)
   return 1;
 }

 return 0;
}
