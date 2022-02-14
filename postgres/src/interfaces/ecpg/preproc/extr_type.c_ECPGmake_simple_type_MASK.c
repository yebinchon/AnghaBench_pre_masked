
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * element; } ;
struct ECPGtype {int type; char* size; int counter; int * struct_sizeof; TYPE_1__ u; int * type_name; } ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;


 scalar_t__ FUNC_0 (int) ;

struct ECPGtype *
FUNC_1(enum ECPGttype VAR_0, char *VAR_1, int VAR_2)
{
 struct ECPGtype *VAR_3 = (struct ECPGtype *) FUNC_0(sizeof(struct ECPGtype));

 VAR_3->type = VAR_0;
 VAR_3->type_name = ((void*)0);
 VAR_3->size = VAR_1;
 VAR_3->u.element = ((void*)0);
 VAR_3->struct_sizeof = ((void*)0);
 VAR_3->counter = VAR_2;

 return VAR_3;
}
