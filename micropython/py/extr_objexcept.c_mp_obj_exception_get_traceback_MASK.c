
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_3__ {size_t* traceback_data; size_t traceback_len; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(mp_obj_t VAR_1, size_t *VAR_2, size_t **VAR_3) {
    FUNC_0(VAR_0, VAR_1);

    if (VAR_0->traceback_data == ((void*)0)) {
        *VAR_2 = 0;
        *VAR_3 = ((void*)0);
    } else {
        *VAR_2 = VAR_0->traceback_len;
        *VAR_3 = VAR_0->traceback_data;
    }
}
