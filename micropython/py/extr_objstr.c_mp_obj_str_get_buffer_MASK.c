
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mp_uint_t ;
typedef int mp_obj_t ;
typedef int mp_int_t ;
struct TYPE_3__ {char typecode; int len; void* buf; } ;
typedef TYPE_1__ mp_buffer_info_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

mp_int_t FUNC_1(mp_obj_t VAR_3, mp_buffer_info_t *VAR_4, mp_uint_t VAR_5) {
    if (VAR_5 == VAR_0) {
        FUNC_0(VAR_3, VAR_1, VAR_2);
        VAR_4->buf = (void*)VAR_1;
        VAR_4->len = VAR_2;
        VAR_4->typecode = 'B';
        return 0;
    } else {

        return 1;
    }
}
