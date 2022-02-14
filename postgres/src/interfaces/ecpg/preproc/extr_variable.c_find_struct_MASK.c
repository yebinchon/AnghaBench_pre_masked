
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct variable {int brace_level; TYPE_4__* type; } ;
struct TYPE_7__ {TYPE_2__* element; int members; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_5__ {int members; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct variable* FUNC_0 (char*,char*,int ,int ) ;
 struct variable* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static struct variable *
FUNC_3(char *VAR_4, char *VAR_5, char *VAR_6)
{
 struct variable *VAR_7;
 char VAR_8 = *VAR_5;


 *VAR_5 = '\0';
 VAR_7 = FUNC_1(VAR_4);

 if (VAR_8 == '-')
 {
  if (VAR_7->type->type != VAR_0)
   FUNC_2(VAR_3, "variable \"%s\" is not a pointer", VAR_4);

  if (VAR_7->type->u.element->type != VAR_1 && VAR_7->type->u.element->type != VAR_2)
   FUNC_2(VAR_3, "variable \"%s\" is not a pointer to a structure or a union", VAR_4);


  *VAR_5 = VAR_8;

  return FUNC_0(VAR_4, ++VAR_6, VAR_7->type->u.element->u.members, VAR_7->brace_level);
 }
 else
 {
  if (VAR_5 == VAR_6)
  {
   if (VAR_7->type->type != VAR_1 && VAR_7->type->type != VAR_2)
    FUNC_2(VAR_3, "variable \"%s\" is neither a structure nor a union", VAR_4);


   *VAR_5 = VAR_8;

   return FUNC_0(VAR_4, VAR_6, VAR_7->type->u.members, VAR_7->brace_level);
  }
  else
  {
   if (VAR_7->type->type != VAR_0)
    FUNC_2(VAR_3, "variable \"%s\" is not an array", VAR_4);

   if (VAR_7->type->u.element->type != VAR_1 && VAR_7->type->u.element->type != VAR_2)
    FUNC_2(VAR_3, "variable \"%s\" is not a pointer to a structure or a union", VAR_4);


   *VAR_5 = VAR_8;

   return FUNC_0(VAR_4, VAR_6, VAR_7->type->u.element->u.members, VAR_7->brace_level);
  }
 }
}
