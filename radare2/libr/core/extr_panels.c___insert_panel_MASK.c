
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* panels; } ;
struct TYPE_5__ {int n_panels; int ** panel; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,char const*,char const*) ;

void FUNC_1(RCore *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4) {
 RPanels *VAR_5 = VAR_1->panels;
 if (VAR_5->n_panels + 1 > VAR_0) {
  return;
 }
 RPanel **VAR_6 = VAR_5->panel;
 int VAR_7;
 RPanel *VAR_8 = VAR_6[VAR_5->n_panels];
 for (VAR_7 = VAR_5->n_panels - 1; VAR_7 >= VAR_2; VAR_7--) {
  VAR_6[VAR_7 + 1] = VAR_6[VAR_7];
 }
 VAR_6[VAR_2] = VAR_8;
 FUNC_0 (VAR_1, VAR_6[VAR_2], VAR_3, VAR_4);
}
