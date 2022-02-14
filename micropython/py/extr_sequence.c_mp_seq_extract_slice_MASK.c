
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_obj_t ;
typedef scalar_t__ mp_int_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ stop; scalar_t__ step; } ;
typedef TYPE_1__ mp_bound_slice_t ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ,int *) ;

mp_obj_t FUNC_2(size_t VAR_0, const mp_obj_t *VAR_1, mp_bound_slice_t *VAR_2) {
    (void)VAR_0;

    mp_int_t VAR_3 = VAR_2->start, VAR_4 = VAR_2->stop;
    mp_int_t VAR_5 = VAR_2->step;

    mp_obj_t VAR_6 = FUNC_1(0, ((void*)0));

    if (VAR_5 < 0) {
        while (VAR_3 >= VAR_4) {
            FUNC_0(VAR_6, VAR_1[VAR_3]);
            VAR_3 += VAR_5;
        }
    } else {
        while (VAR_3 < VAR_4) {
            FUNC_0(VAR_6, VAR_1[VAR_3]);
            VAR_3 += VAR_5;
        }
    }
    return VAR_6;
}
