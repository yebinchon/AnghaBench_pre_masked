
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int const h; } ;
struct TYPE_6__ {TYPE_1__* panels; } ;
struct TYPE_5__ {TYPE_3__* can; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConsCanvas ;



bool FUNC_0(RCore *VAR_0, int VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 RConsCanvas *VAR_3 = VAR_2->can;
 const int VAR_4 = 0;
 if (VAR_1 <= VAR_4 || VAR_3->h - VAR_4 <= VAR_1) {
  return 1;
 }
 return 0;
}
