
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct variable {int brace_level; TYPE_5__* type; } ;
struct TYPE_9__ {TYPE_3__* element; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_7__ {int members; TYPE_1__* element; } ;
struct TYPE_8__ {int type; int counter; int size; int struct_sizeof; int type_name; TYPE_2__ u; } ;
struct TYPE_6__ {int type; int counter; int size; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;



 int VAR_0 ;
 struct variable* FUNC_3 (char*) ;
 struct variable* FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 struct variable* FUNC_6 (char*,int ,int ) ;
 char* FUNC_7 (char*,char*) ;

struct variable *
FUNC_8(char *VAR_1)
{
 char *VAR_2,
      *VAR_3;
 struct variable *VAR_4;
 int VAR_5;

 VAR_2 = FUNC_7(VAR_1, ".[-");
 if (VAR_2)
 {
  if (*VAR_2 == '[')
  {




   for (VAR_5 = 1, VAR_3 = VAR_2 + 1; VAR_5; VAR_3++)
   {
    switch (*VAR_3)
    {
     case '[':
      VAR_5++;
      break;
     case ']':
      VAR_5--;
      break;
     default:
      break;
    }
   }
   if (*VAR_3 == '.')
    VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
   else
   {
    char VAR_6 = *VAR_2;

    *VAR_2 = '\0';
    VAR_4 = FUNC_3(VAR_1);
    if (VAR_4 == ((void*)0))
     FUNC_5(VAR_0, "variable \"%s\" is not declared", VAR_1);

    *VAR_2 = VAR_6;
    switch (VAR_4->type->u.element->type)
    {
     case 130:
      return FUNC_6(VAR_1, FUNC_0(FUNC_1(VAR_4->type->u.element->u.element->type, VAR_4->type->u.element->u.element->size, VAR_4->type->u.element->u.element->counter), VAR_4->type->u.element->size), VAR_4->brace_level);
     case 129:
     case 128:
      return FUNC_6(VAR_1, FUNC_2(VAR_4->type->u.element->u.members, VAR_4->type->u.element->type, VAR_4->type->u.element->type_name, VAR_4->type->u.element->struct_sizeof), VAR_4->brace_level);
     default:
      return FUNC_6(VAR_1, FUNC_1(VAR_4->type->u.element->type, VAR_4->type->u.element->size, VAR_4->type->u.element->counter), VAR_4->brace_level);
    }
   }
  }
  else
   VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_2);
 }
 else
  VAR_4 = FUNC_3(VAR_1);

 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_0, "variable \"%s\" is not declared", VAR_1);

 return VAR_4;
}
