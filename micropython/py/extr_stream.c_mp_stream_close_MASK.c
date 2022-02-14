
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mp_uint_t ;
struct TYPE_3__ {scalar_t__ (* ioctl ) (int ,int ,int ,int*) ;} ;
typedef TYPE_1__ mp_stream_p_t ;
typedef int mp_obj_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*) ;

mp_obj_t FUNC_3(mp_obj_t VAR_3) {
    const mp_stream_p_t *VAR_4 = FUNC_0(VAR_3);
    int VAR_5;
    mp_uint_t VAR_6 = VAR_4->ioctl(VAR_3, VAR_0, 0, &VAR_5);
    if (VAR_6 == VAR_1) {
        FUNC_1(VAR_5);
    }
    return VAR_2;
}
