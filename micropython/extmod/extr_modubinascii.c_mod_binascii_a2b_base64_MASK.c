
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__ buf; } ;
typedef TYPE_1__ vstr_t ;
typedef int uint ;
typedef int mp_obj_t ;
struct TYPE_7__ {char* buf; int len; } ;
typedef TYPE_2__ mp_buffer_info_t ;
typedef char byte ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int) ;

mp_obj_t FUNC_5(mp_obj_t VAR_2) {
    mp_buffer_info_t VAR_3;
    FUNC_1(VAR_2, &VAR_3, VAR_0);
    byte *VAR_4 = VAR_3.buf;

    vstr_t VAR_5;
    FUNC_4(&VAR_5, (VAR_3.len / 4) * 3 + 1);
    byte *VAR_6 = (byte *)VAR_5.buf;

    uint VAR_7 = 0;
    int VAR_8 = 0;
    bool VAR_9 = 0;
    for (size_t VAR_10 = 0; VAR_10 < VAR_3.len; VAR_10++) {
        if (VAR_4[VAR_10] == '=') {
            if ((VAR_8 == 2) || ((VAR_8 == 4) && VAR_9)) {
                VAR_8 = 0;
                break;
            }
            VAR_9 = 1;
        }

        int VAR_11 = FUNC_0(VAR_4[VAR_10]);
        if (VAR_11 == -1) {
            continue;
        }
        VAR_9 = 0;
        VAR_7 = (VAR_7 << 6) | VAR_11;
        VAR_8 += 6;

        if (VAR_8 >= 8) {
            VAR_8 -= 8;
            VAR_6[VAR_5.len++] = (VAR_7 >> VAR_8) & 0xFF;
        }
    }

    if (VAR_8) {
        FUNC_3("incorrect padding");
    }

    return FUNC_2(&VAR_1, &VAR_5);
}
