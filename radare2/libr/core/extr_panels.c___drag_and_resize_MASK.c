
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* panels; } ;
struct TYPE_7__ {int mouse_on_edge_x; int mouse_on_edge_y; scalar_t__ mouse_orig_y; scalar_t__ mouse_orig_x; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int*,int*) ;

bool FUNC_4(RCore *VAR_0) {
 RPanels *VAR_1 = VAR_0->panels;
 if (VAR_1->mouse_on_edge_x || VAR_1->mouse_on_edge_y) {
  int VAR_2, VAR_3;
  if (FUNC_3 (&VAR_2, &VAR_3)) {
   if (VAR_1->mouse_on_edge_x) {
    FUNC_1 (VAR_0, VAR_2 - VAR_1->mouse_orig_x);
   }
   if (VAR_1->mouse_on_edge_y) {
    FUNC_2 (VAR_0, VAR_3 - VAR_1->mouse_orig_y);
   }
   FUNC_0 (VAR_0, 0, 0);
  }
  VAR_1->mouse_on_edge_x = 0;
  VAR_1->mouse_on_edge_y = 0;
  return 1;
 }
 return 0;
}
