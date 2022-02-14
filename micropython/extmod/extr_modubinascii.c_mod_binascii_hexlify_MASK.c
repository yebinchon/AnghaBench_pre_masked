
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf; } ;
typedef TYPE_1__ vstr_t ;
typedef scalar_t__ mp_uint_t ;
typedef int mp_obj_t ;
struct TYPE_7__ {int len; int* buf; } ;
typedef TYPE_2__ mp_buffer_info_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 char* FUNC_2 (int const) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,size_t) ;

mp_obj_t FUNC_4(size_t VAR_3, const mp_obj_t *VAR_4) {


    const char *VAR_5 = ((void*)0);
    mp_buffer_info_t VAR_6;
    FUNC_0(VAR_4[0], &VAR_6, VAR_0);



    if (VAR_6.len == 0) {
        return VAR_1;
    }

    vstr_t VAR_7;
    size_t VAR_8 = VAR_6.len * 2;
    if (VAR_3 > 1) {

        VAR_8 += VAR_6.len - 1;
        VAR_5 = FUNC_2(VAR_4[1]);
    }
    FUNC_3(&VAR_7, VAR_8);
    byte *VAR_9 = VAR_6.buf, *VAR_10 = (byte*)VAR_7.buf;
    for (mp_uint_t VAR_11 = VAR_6.len; VAR_11--;) {
        byte VAR_12 = (*VAR_9 >> 4);
        if (VAR_12 > 9) {
            VAR_12 += 'a' - '9' - 1;
        }
        *VAR_10++ = VAR_12 + '0';
        VAR_12 = (*VAR_9++ & 0xf);
        if (VAR_12 > 9) {
            VAR_12 += 'a' - '9' - 1;
        }
        *VAR_10++ = VAR_12 + '0';
        if (VAR_5 != ((void*)0) && VAR_11 != 0) {
            *VAR_10++ = *VAR_5;
        }
    }
    return FUNC_1(&VAR_2, &VAR_7);
}
