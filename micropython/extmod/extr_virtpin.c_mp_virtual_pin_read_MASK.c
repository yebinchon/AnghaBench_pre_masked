
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* ioctl ) (int ,int ,int ,int *) ;} ;
typedef TYPE_2__ mp_pin_p_t ;
typedef int mp_obj_t ;
struct TYPE_6__ {TYPE_1__* type; } ;
typedef TYPE_3__ mp_obj_base_t ;
struct TYPE_4__ {scalar_t__ protocol; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;

int FUNC_2(mp_obj_t VAR_1) {
    mp_obj_base_t* VAR_2 = (mp_obj_base_t*)FUNC_0(VAR_1);
    mp_pin_p_t *VAR_3 = (mp_pin_p_t*)VAR_2->type->protocol;
    return VAR_3->ioctl(VAR_1, VAR_0, 0, ((void*)0));
}
