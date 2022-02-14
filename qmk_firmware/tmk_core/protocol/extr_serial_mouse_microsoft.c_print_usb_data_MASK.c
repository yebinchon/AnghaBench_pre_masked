
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int v; int y; int x; int buttons; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const report_mouse_t *VAR_1) {
    if (!VAR_0) return;

    FUNC_0("serial_mouse usb: [%02X|%d %d %d %d]\n", VAR_1->buttons, VAR_1->x, VAR_1->y, VAR_1->v, VAR_1->h);
}
