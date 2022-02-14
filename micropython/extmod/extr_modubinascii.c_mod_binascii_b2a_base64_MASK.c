
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__ buf; } ;
typedef TYPE_1__ vstr_t ;
typedef int mp_uint_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int len; int* buf; } ;
typedef TYPE_2__ mp_buffer_info_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;

mp_obj_t FUNC_3(mp_obj_t VAR_2) {
    mp_buffer_info_t VAR_3;
    FUNC_0(VAR_2, &VAR_3, VAR_0);

    vstr_t VAR_4;
    FUNC_2(&VAR_4, ((VAR_3.len != 0) ? (((VAR_3.len - 1) / 3) + 1) * 4 : 0) + 1);


    byte *VAR_5 = VAR_3.buf, *VAR_6 = (byte*)VAR_4.buf;
    mp_uint_t VAR_7;
    for (VAR_7 = VAR_3.len; VAR_7 >= 3; VAR_7 -= 3) {
        *VAR_6++ = (VAR_5[0] & 0xFC) >> 2;
        *VAR_6++ = (VAR_5[0] & 0x03) << 4 | (VAR_5[1] & 0xF0) >> 4;
        *VAR_6++ = (VAR_5[1] & 0x0F) << 2 | (VAR_5[2] & 0xC0) >> 6;
        *VAR_6++ = VAR_5[2] & 0x3F;
        VAR_5 += 3;
    }
    if (VAR_7 != 0) {
        *VAR_6++ = (VAR_5[0] & 0xFC) >> 2;
        if (VAR_7 == 2) {
            *VAR_6++ = (VAR_5[0] & 0x03) << 4 | (VAR_5[1] & 0xF0) >> 4;
            *VAR_6++ = (VAR_5[1] & 0x0F) << 2;
        }
        else {
            *VAR_6++ = (VAR_5[0] & 0x03) << 4;
            *VAR_6++ = 64;
        }
        *VAR_6 = 64;
    }


    VAR_6 = (byte*)VAR_4.buf;
    for (mp_uint_t VAR_8 = VAR_4.len - 1; VAR_8--;) {
        if (*VAR_6 < 26) {
            *VAR_6 += 'A';
        } else if (*VAR_6 < 52) {
            *VAR_6 += 'a' - 26;
        } else if (*VAR_6 < 62) {
            *VAR_6 += '0' - 52;
        } else if (*VAR_6 == 62) {
            *VAR_6 ='+';
        } else if (*VAR_6 == 63) {
            *VAR_6 = '/';
        } else {
            *VAR_6 = '=';
        }
        VAR_6++;
    }
    *VAR_6 = '\n';
    return FUNC_1(&VAR_1, &VAR_4);
}
