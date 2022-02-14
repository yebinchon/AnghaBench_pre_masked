
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int buf; } ;
typedef TYPE_1__ vstr_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int len; int buf; } ;
typedef TYPE_2__ mp_buffer_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

mp_obj_t FUNC_4(mp_obj_t VAR_2, vstr_t *VAR_3) {
    if (FUNC_2(VAR_2)) {

        FUNC_3(VAR_3, FUNC_1(VAR_2));
        return VAR_1;
    } else {

        mp_buffer_info_t VAR_4;
        FUNC_0(VAR_2, &VAR_4, VAR_0);
        VAR_3->buf = VAR_4.buf;
        VAR_3->len = VAR_4.len;
        return VAR_2;
    }
}
