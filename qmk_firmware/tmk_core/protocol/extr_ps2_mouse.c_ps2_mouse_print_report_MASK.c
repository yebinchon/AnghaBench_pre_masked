
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ h; scalar_t__ v; scalar_t__ y; scalar_t__ x; int buttons; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(report_mouse_t *VAR_1) {
    if (!VAR_0) return;
    FUNC_1("ps2_mouse: [");
    FUNC_0(VAR_1->buttons);
    FUNC_1("|");
    FUNC_2((uint8_t)VAR_1->x);
    FUNC_1(" ");
    FUNC_2((uint8_t)VAR_1->y);
    FUNC_1(" ");
    FUNC_2((uint8_t)VAR_1->v);
    FUNC_1(" ");
    FUNC_2((uint8_t)VAR_1->h);
    FUNC_1("]\n");
}
