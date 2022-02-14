
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct demangle_component {int dummy; } ;
struct d_info {TYPE_4__* last_name; int expansion; } ;
typedef enum gnu_v3_dtor_kinds { ____Placeholder_gnu_v3_dtor_kinds } gnu_v3_dtor_kinds ;
typedef enum gnu_v3_ctor_kinds { ____Placeholder_gnu_v3_ctor_kinds } gnu_v3_ctor_kinds ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_8__ {TYPE_2__ s_string; TYPE_1__ s_name; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,int) ;
 struct demangle_component* FUNC_2 (struct d_info*,int,TYPE_4__*) ;
 struct demangle_component* FUNC_3 (struct d_info*,int,TYPE_4__*) ;
 int FUNC_4 (struct d_info*) ;
 char FUNC_5 (struct d_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct demangle_component *
FUNC_6 (struct d_info *VAR_12)
{
  if (VAR_12->last_name != ((void*)0))
    {
      if (VAR_12->last_name->type == VAR_0)
 VAR_12->expansion += VAR_12->last_name->u.s_name.len;
      else if (VAR_12->last_name->type == VAR_1)
 VAR_12->expansion += VAR_12->last_name->u.s_string.len;
    }
  switch (FUNC_4 (VAR_12))
    {
    case 'C':
      {
 enum gnu_v3_ctor_kinds VAR_13;
 int VAR_14 = 0;

 if (FUNC_5 (VAR_12) == 'I')
   {
     VAR_14 = 1;
     FUNC_1 (VAR_12, 1);
   }

 switch (FUNC_5 (VAR_12))
   {
   case '1':
     VAR_13 = VAR_5;
     break;
   case '2':
     VAR_13 = VAR_2;
     break;
   case '3':
     VAR_13 = VAR_4;
     break;
          case '4':
     VAR_13 = VAR_10;
     break;
   case '5':
     VAR_13 = VAR_8;
     break;
   default:
     return ((void*)0);
   }

 FUNC_1 (VAR_12, 2);

 if (VAR_14)
   FUNC_0 (VAR_12);

 return FUNC_2 (VAR_12, VAR_13, VAR_12->last_name);
      }

    case 'D':
      {
 enum gnu_v3_dtor_kinds VAR_15;

 switch (FUNC_5 (VAR_12))
   {
   case '0':
     VAR_15 = VAR_7;
     break;
   case '1':
     VAR_15 = VAR_6;
     break;
   case '2':
     VAR_15 = VAR_3;
     break;

   case '4':
     VAR_15 = VAR_11;
     break;
   case '5':
     VAR_15 = VAR_9;
     break;
   default:
     return ((void*)0);
   }
 FUNC_1 (VAR_12, 2);
 return FUNC_3 (VAR_12, VAR_15, VAR_12->last_name);
      }

    default:
      return ((void*)0);
    }
}
