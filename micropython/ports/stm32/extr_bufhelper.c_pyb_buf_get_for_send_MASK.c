
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {int len; char typecode; int * buf; } ;
typedef TYPE_1__ mp_buffer_info_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(mp_obj_t VAR_1, mp_buffer_info_t *VAR_2, byte *VAR_3) {
    if (FUNC_2(VAR_1)) {
        VAR_3[0] = FUNC_1(VAR_1);
        VAR_2->buf = VAR_3;
        VAR_2->len = 1;
        VAR_2->typecode = 'B';
    } else {
        FUNC_0(VAR_1, VAR_2, VAR_0);
    }
}
