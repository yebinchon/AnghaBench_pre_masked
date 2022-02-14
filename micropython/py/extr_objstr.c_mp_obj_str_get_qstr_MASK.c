
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qstr ;
typedef int mp_obj_t ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ mp_obj_str_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;

qstr FUNC_6(mp_obj_t VAR_1) {
    if (FUNC_3(VAR_1)) {
        return FUNC_0(VAR_1);
    } else if (FUNC_4(VAR_1, &VAR_0)) {
        mp_obj_str_t *VAR_2 = FUNC_1(VAR_1);
        return FUNC_5((char*)VAR_2->data, VAR_2->len);
    } else {
        FUNC_2(VAR_1);
    }
}
