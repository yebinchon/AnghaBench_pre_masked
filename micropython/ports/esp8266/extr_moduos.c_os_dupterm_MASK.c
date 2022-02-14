
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const mp_obj_t ;
struct TYPE_3__ {int const (* var ) (size_t,int const*) ;} ;
struct TYPE_4__ {TYPE_1__ fun; } ;


 int * FUNC_0 (int const) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int const FUNC_1 (size_t,int const*) ;
 int VAR_2 ;

mp_obj_t FUNC_2(size_t VAR_3, const mp_obj_t *VAR_4) {
    mp_obj_t VAR_5 = VAR_0.fun.var(VAR_3, VAR_4);
    if (FUNC_0(VAR_4[0]) == &VAR_1) {
        ++VAR_2;
    }
    if (FUNC_0(VAR_5) == &VAR_1) {
        --VAR_2;
    }
    return VAR_5;
}
