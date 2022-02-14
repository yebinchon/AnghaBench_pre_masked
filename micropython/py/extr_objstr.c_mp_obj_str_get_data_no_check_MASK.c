
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
struct TYPE_2__ {size_t len; int const* data; } ;
typedef TYPE_1__ mp_obj_str_t ;
typedef int byte ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int const* FUNC_2 (int ,size_t*) ;

const byte *FUNC_3(mp_obj_t VAR_0, size_t *VAR_1) {
    if (FUNC_1(VAR_0)) {
        return FUNC_2(FUNC_0(VAR_0), VAR_1);
    } else {
        *VAR_1 = ((mp_obj_str_t*)VAR_0)->len;
        return ((mp_obj_str_t*)VAR_0)->data;
    }
}
