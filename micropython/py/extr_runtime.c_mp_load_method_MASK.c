
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_2__ {int name; } ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(mp_obj_t VAR_5, qstr VAR_6, mp_obj_t *VAR_7) {
    FUNC_0("load method %p.%s\n", VAR_5, FUNC_8(VAR_6));

    FUNC_2(VAR_5, VAR_6, VAR_7);

    if (VAR_7[0] == VAR_2) {

        if (VAR_0 == VAR_1) {
            FUNC_6(&VAR_3, "no such attribute");
        } else {

            if (FUNC_4(VAR_5, &VAR_4)) {
                FUNC_7(FUNC_5(&VAR_3,
                    "type object '%q' has no attribute '%q'",
                    ((mp_obj_type_t*)FUNC_1(VAR_5))->name, VAR_6));
            } else {
                FUNC_7(FUNC_5(&VAR_3,
                    "'%s' object has no attribute '%q'",
                    FUNC_3(VAR_5), VAR_6));
            }
        }
    }
}
