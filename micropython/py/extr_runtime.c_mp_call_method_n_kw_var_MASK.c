
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_3__ {int n_alloc; int args; int n_kw; int n_args; int fun; } ;
typedef TYPE_1__ mp_call_args_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,size_t,int const*,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;

mp_obj_t FUNC_3(bool VAR_0, size_t VAR_1, const mp_obj_t *VAR_2) {
    mp_call_args_t VAR_3;
    FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3);

    mp_obj_t VAR_4 = FUNC_0(VAR_3.fun, VAR_3.n_args, VAR_3.n_kw, VAR_3.args);
    FUNC_2(VAR_3.args, VAR_3.n_alloc * sizeof(mp_obj_t));

    return VAR_4;
}
