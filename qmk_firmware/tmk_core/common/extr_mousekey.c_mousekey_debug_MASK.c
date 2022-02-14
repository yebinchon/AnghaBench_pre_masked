
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h; int v; int y; int x; int buttons; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void) {
    if (!VAR_0) return;
    FUNC_1("mousekey [btn|x y v h](rep/acl): [");
    FUNC_0(VAR_1.buttons);
    FUNC_1("|");
    FUNC_3(VAR_1.x);
    FUNC_1(" ");
    FUNC_3(VAR_1.y);
    FUNC_1(" ");
    FUNC_3(VAR_1.v);
    FUNC_1(" ");
    FUNC_3(VAR_1.h);
    FUNC_1("](");
    FUNC_2(VAR_3);
    FUNC_1("/");
    FUNC_2(VAR_2);
    FUNC_1(")\n");
}
