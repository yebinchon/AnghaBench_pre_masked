
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int njs_vm_t ;
struct TYPE_4__ {int external; } ;
typedef TYPE_1__ njs_vm_opt_t ;
typedef int njs_str_t ;
typedef int njs_opts_t ;
typedef int njs_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static njs_int_t
FUNC_3(njs_opts_t *VAR_2, njs_vm_opt_t *VAR_3, njs_str_t *VAR_4)
{
    njs_vm_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_3);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_3->external, VAR_2, VAR_4);
    FUNC_2(VAR_5);
    VAR_5 = ((void*)0);

    return VAR_1;
}
