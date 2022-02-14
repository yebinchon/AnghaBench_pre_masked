
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qstr ;
typedef int mp_obj_t ;
struct TYPE_2__ {scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(mp_obj_t VAR_5) {
    if (VAR_0 == VAR_1) {
        FUNC_2("can't convert to str implicitly");
    } else {
        const qstr VAR_6 = FUNC_0(VAR_5)->name;
        FUNC_3(FUNC_1(&VAR_4,
            "can't convert '%q' object to %q implicitly",
            VAR_6, VAR_6 == VAR_3 ? VAR_2 : VAR_3));
    }
}
