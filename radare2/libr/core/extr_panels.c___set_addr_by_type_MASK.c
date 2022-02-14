
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {TYPE_1__* panels; } ;
struct TYPE_6__ {int n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;

void FUNC_3(RCore *VAR_0, const char *VAR_1, ut64 VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_5 = FUNC_1 (VAR_3, VAR_4);
  if (!FUNC_0 (VAR_5, VAR_1)) {
   continue;
  }
  FUNC_2 (VAR_0, VAR_5, VAR_2);
 }
}
