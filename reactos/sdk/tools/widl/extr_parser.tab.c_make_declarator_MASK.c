
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int var_t ;
struct TYPE_4__ {int * bits; int * func_type; int * type; int * var; } ;
typedef TYPE_1__ declarator_t ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static declarator_t *FUNC_2(var_t *VAR_0)
{
  declarator_t *VAR_1 = FUNC_1(sizeof(*VAR_1));
  VAR_1->var = VAR_0 ? VAR_0 : FUNC_0(((void*)0));
  VAR_1->type = ((void*)0);
  VAR_1->func_type = ((void*)0);
  VAR_1->bits = ((void*)0);
  return VAR_1;
}
