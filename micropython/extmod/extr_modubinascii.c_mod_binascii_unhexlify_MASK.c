
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf; } ;
typedef TYPE_1__ vstr_t ;
typedef int mp_uint_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int len; int* buf; } ;
typedef TYPE_2__ mp_buffer_info_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;

mp_obj_t FUNC_6(mp_obj_t VAR_2) {
    mp_buffer_info_t VAR_3;
    FUNC_0(VAR_2, &VAR_3, VAR_0);

    if ((VAR_3.len & 1) != 0) {
        FUNC_2("odd-length string");
    }
    vstr_t VAR_4;
    FUNC_5(&VAR_4, VAR_3.len / 2);
    byte *VAR_5 = VAR_3.buf, *VAR_6 = (byte*)VAR_4.buf;
    byte VAR_7 = 0;
    for (mp_uint_t VAR_8 = VAR_3.len; VAR_8--;) {
        byte VAR_9 = *VAR_5++;
        if (FUNC_3(VAR_9)) {
            VAR_7 += FUNC_4(VAR_9);
        } else {
            FUNC_2("non-hex digit found");
        }
        if (VAR_8 & 1) {
            VAR_7 <<= 4;
        } else {
            *VAR_6++ = VAR_7;
            VAR_7 = 0;
        }
    }
    return FUNC_1(&VAR_1, &VAR_4);
}
