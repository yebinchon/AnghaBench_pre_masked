
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mp_int_t ;
struct TYPE_4__ {scalar_t__ five; } ;
struct TYPE_5__ {int greyscale; int monochrome_5by5; TYPE_1__ base; } ;
typedef TYPE_2__ microbit_image_obj_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

uint8_t FUNC_2(microbit_image_obj_t * VAR_1, mp_int_t VAR_2, mp_int_t VAR_3) {
    if (VAR_1->base.five)
        return FUNC_1(&VAR_1->monochrome_5by5, VAR_2, VAR_3)*VAR_0;
    else
        return FUNC_0(&VAR_1->greyscale, VAR_2, VAR_3);
}
