
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ECPGtype {int dummy; } ;
struct ECPGstruct_member {struct ECPGstruct_member* next; int name; TYPE_4__* type; } ;
struct TYPE_7__ {TYPE_2__* element; int members; } ;
struct TYPE_8__ {int type; int counter; int size; TYPE_3__ u; int struct_sizeof; int type_name; } ;
struct TYPE_5__ {int members; } ;
struct TYPE_6__ {int const type; int counter; int size; int struct_sizeof; int type_name; TYPE_1__ u; } ;


 struct ECPGtype* FUNC_0 (struct ECPGtype*,int ) ;
 struct ECPGtype* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,struct ECPGtype*,struct ECPGstruct_member**) ;
 struct ECPGtype* FUNC_3 (int ,int,int ,int ) ;




struct ECPGstruct_member *
FUNC_4(struct ECPGstruct_member *VAR_0)
{
 struct ECPGstruct_member *VAR_1 = ((void*)0);

 while (VAR_0)
 {
  struct ECPGtype *VAR_2;

  switch (VAR_0->type->type)
  {
   case 129:
   case 128:
    VAR_2 = FUNC_3(VAR_0->type->u.members, VAR_0->type->type, VAR_0->type->type_name, VAR_0->type->struct_sizeof);
    break;
   case 130:





    if (VAR_0->type->u.element->type == 129 || VAR_0->type->u.element->type == 128)
     VAR_2 = FUNC_3(VAR_0->type->u.element->u.members, VAR_0->type->u.element->type, VAR_0->type->u.element->type_name, VAR_0->type->u.element->struct_sizeof);
    else
     VAR_2 = FUNC_0(FUNC_1(VAR_0->type->u.element->type, VAR_0->type->u.element->size, VAR_0->type->u.element->counter), VAR_0->type->size);
    break;
   default:
    VAR_2 = FUNC_1(VAR_0->type->type, VAR_0->type->size, VAR_0->type->counter);
    break;
  }

  FUNC_2(VAR_0->name, VAR_2, &VAR_1);

  VAR_0 = VAR_0->next;
 }

 return VAR_1;
}
