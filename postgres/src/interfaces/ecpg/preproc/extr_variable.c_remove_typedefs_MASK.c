
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typedefs {int brace_level; scalar_t__ type_enum; struct typedefs* next; struct typedefs* name; struct typedefs* type; struct typedefs* struct_member_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct typedefs*) ;
 struct typedefs* VAR_2 ;

void
FUNC_1(int VAR_3)
{
 struct typedefs *VAR_4,
      *VAR_5;

 for (VAR_4 = VAR_5 = VAR_2; VAR_4;)
 {
  if (VAR_4->brace_level >= VAR_3)
  {

   if (VAR_4 == VAR_2)
    VAR_5 = VAR_2 = VAR_4->next;
   else
    VAR_5->next = VAR_4->next;

   if (VAR_4->type->type_enum == VAR_0 || VAR_4->type->type_enum == VAR_1)
    FUNC_0(VAR_4->struct_member_list);
   FUNC_0(VAR_4->type);
   FUNC_0(VAR_4->name);
   FUNC_0(VAR_4);
   if (VAR_5 == VAR_2)
    VAR_4 = VAR_2;
   else
    VAR_4 = VAR_5 ? VAR_5->next : ((void*)0);
  }
  else
  {
   VAR_5 = VAR_4;
   VAR_4 = VAR_5->next;
  }
 }
}
