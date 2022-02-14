
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scroll_x; int scroll_y; int mod; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 VAR_0.scroll_x = VAR_1 == 1 ? VAR_2 : 0;
 VAR_0.scroll_y = VAR_1 == 0 ? VAR_2 : 0;
 VAR_0.mod = FUNC_0();
 FUNC_1();
 FUNC_2();
 VAR_0.scroll_x = VAR_0.scroll_y = 0;
}
