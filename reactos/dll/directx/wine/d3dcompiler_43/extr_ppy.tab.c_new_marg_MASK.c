
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* arg; scalar_t__ nnl; int type; } ;
typedef TYPE_1__ marg_t ;
typedef int def_arg_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static marg_t *FUNC_1(char *VAR_0, def_arg_t VAR_1)
{
 marg_t *VAR_2 = FUNC_0(sizeof(marg_t));
 if(!VAR_2)
  return ((void*)0);
 VAR_2->arg = VAR_0;
 VAR_2->type = VAR_1;
 VAR_2->nnl = 0;
 return VAR_2;
}
