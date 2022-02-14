
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct variable {int * next; scalar_t__ brace_level; struct ECPGtype* type; int name; } ;
struct TYPE_2__ {int * element; } ;
struct ECPGtype {scalar_t__ counter; TYPE_1__ u; int * struct_sizeof; int * size; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

struct variable *
FUNC_2(const char *VAR_1)
{
 struct variable *VAR_2 = (struct variable *) FUNC_0(sizeof(struct variable));

 VAR_2->name = FUNC_1(VAR_1);
 VAR_2->type = (struct ECPGtype *) FUNC_0(sizeof(struct ECPGtype));
 VAR_2->type->type = VAR_0;
 VAR_2->type->size = ((void*)0);
 VAR_2->type->struct_sizeof = ((void*)0);
 VAR_2->type->u.element = ((void*)0);
 VAR_2->type->counter = 0;
 VAR_2->brace_level = 0;
 VAR_2->next = ((void*)0);

 return VAR_2;
}
