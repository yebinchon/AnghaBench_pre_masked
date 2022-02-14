
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_3__ {int (* attr ) (scalar_t__,int ,scalar_t__*) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__*) ;

void FUNC_8(mp_obj_t VAR_5, qstr VAR_6, mp_obj_t VAR_7) {
    FUNC_0("store attr %p.%s <- %p\n", VAR_5, FUNC_6(VAR_6), VAR_7);
    mp_obj_type_t *VAR_8 = FUNC_1(VAR_5);
    if (VAR_8->attr != ((void*)0)) {
        mp_obj_t VAR_9[2] = {VAR_3, VAR_7};
        VAR_8->attr(VAR_5, VAR_6, VAR_9);
        if (VAR_9[0] == VAR_2) {

            return;
        }
    }
    if (VAR_0 == VAR_1) {
        FUNC_4(&VAR_4, "no such attribute");
    } else {
        FUNC_5(FUNC_3(&VAR_4,
            "'%s' object has no attribute '%q'",
            FUNC_2(VAR_5), VAR_6));
    }
}
