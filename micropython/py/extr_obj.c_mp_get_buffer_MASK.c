
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_uint_t ;
struct TYPE_4__ {int (* get_buffer ) (int ,int *,int ) ;} ;
struct TYPE_5__ {TYPE_1__ buffer_p; } ;
typedef TYPE_2__ mp_obj_type_t ;
typedef int mp_obj_t ;
typedef int mp_buffer_info_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

bool FUNC_2(mp_obj_t VAR_0, mp_buffer_info_t *VAR_1, mp_uint_t VAR_2) {
    mp_obj_type_t *VAR_3 = FUNC_0(VAR_0);
    if (VAR_3->buffer_p.get_buffer == ((void*)0)) {
        return 0;
    }
    int VAR_4 = VAR_3->buffer_p.get_buffer(VAR_0, VAR_1, VAR_2);
    if (VAR_4 != 0) {
        return 0;
    }
    return 1;
}
