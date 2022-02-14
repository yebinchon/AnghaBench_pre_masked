
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_4__ {int * type; } ;
struct TYPE_5__ {int * bytecode; TYPE_1__ base; } ;
typedef TYPE_2__ mp_obj_fun_bc_t ;
typedef int mp_const_obj_t ;
typedef int byte ;


 int FUNC_0 (int const*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;

qstr FUNC_3(mp_const_obj_t VAR_3) {
    const mp_obj_fun_bc_t *VAR_4 = FUNC_1(VAR_3);







    const byte *VAR_5 = VAR_4->bytecode;
    FUNC_0(VAR_5);
    return FUNC_2(VAR_5);
}
