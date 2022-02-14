
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int v; int h; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 () ;

void FUNC_5(void) {
    if (FUNC_2(VAR_1) < (VAR_5 ? VAR_3 : VAR_2 * 10)) {
        return;
    }
    if (VAR_4.x == 0 && VAR_4.y == 0 && VAR_4.v == 0 && VAR_4.h == 0) {
        return;
    }
    if (VAR_5 != VAR_0) VAR_5++;
    if (VAR_4.x > 0) VAR_4.x = FUNC_1();
    if (VAR_4.x < 0) VAR_4.x = FUNC_1() * -1;
    if (VAR_4.y > 0) VAR_4.y = FUNC_1();
    if (VAR_4.y < 0) VAR_4.y = FUNC_1() * -1;

    if (VAR_4.x && VAR_4.y) {
        VAR_4.x = FUNC_3(VAR_4.x);
        if (VAR_4.x == 0) {
            VAR_4.x = 1;
        }
        VAR_4.y = FUNC_3(VAR_4.y);
        if (VAR_4.y == 0) {
            VAR_4.y = 1;
        }
    }
    if (VAR_4.v > 0) VAR_4.v = FUNC_4();
    if (VAR_4.v < 0) VAR_4.v = FUNC_4() * -1;
    if (VAR_4.h > 0) VAR_4.h = FUNC_4();
    if (VAR_4.h < 0) VAR_4.h = FUNC_4() * -1;
    FUNC_0();
}
