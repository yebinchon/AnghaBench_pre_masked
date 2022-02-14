
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* panels; } ;
struct TYPE_5__ {scalar_t__ n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char const*) ;

bool FUNC_1(RCore *VAR_1) {
 RPanels *VAR_2 = VAR_1->panels;
 if (VAR_2->n_panels + 1 > VAR_0) {
  const char *VAR_3 = "panel limit exceeded.";
  (void)FUNC_0 (VAR_1, VAR_3);
  return 0;
 }
 return 1;
}
