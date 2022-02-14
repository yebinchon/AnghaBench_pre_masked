
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v; int s; int h; } ;
struct TYPE_4__ {int speed; TYPE_1__ hsv; int mode; int enable; } ;


 int FUNC_0 (char*,...) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void) {
    FUNC_0("rgb_matrix_config eprom\n");
    FUNC_0("rgb_matrix_config.enable = %d\n", VAR_0.enable);
    FUNC_0("rgb_matrix_config.mode = %d\n", VAR_0.mode);
    FUNC_0("rgb_matrix_config.hsv.h = %d\n", VAR_0.hsv.h);
    FUNC_0("rgb_matrix_config.hsv.s = %d\n", VAR_0.hsv.s);
    FUNC_0("rgb_matrix_config.hsv.v = %d\n", VAR_0.hsv.v);
    FUNC_0("rgb_matrix_config.speed = %d\n", VAR_0.speed);
}
