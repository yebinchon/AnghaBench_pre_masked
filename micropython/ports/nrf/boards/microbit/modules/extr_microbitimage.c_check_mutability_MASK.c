
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ five; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ microbit_image_obj_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(microbit_image_obj_t *VAR_1) {
    if (VAR_1->base.five) {
        FUNC_0(&VAR_0, "image cannot be modified (try copying first)");
    }
}
