
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int mp_obj_t ;
typedef int mp_buffer_info_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(mp_obj_t VAR_0, mp_buffer_info_t *VAR_1, mp_uint_t VAR_2) {
    if (!FUNC_0(VAR_0, VAR_1, VAR_2)) {
        FUNC_1("object with buffer protocol required");
    }
}
