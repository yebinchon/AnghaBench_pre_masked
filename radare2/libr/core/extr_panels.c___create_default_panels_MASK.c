
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* panels; } ;
struct TYPE_8__ {scalar_t__ layout; scalar_t__ n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int *,char const*,char*) ;
 char* FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*) ;
 char** VAR_1 ;
 char** VAR_2 ;

void FUNC_5(RCore *VAR_3) {
 RPanels *VAR_4 = VAR_3->panels;
 VAR_4->n_panels = 0;
 FUNC_3 (VAR_3, 0);
 const char **VAR_5 = VAR_2;
 if (VAR_4->layout == VAR_0) {
  VAR_5 = VAR_1;
 }

 int VAR_6 = 0;
 while (VAR_5[VAR_6]) {
  RPanel *VAR_7 = FUNC_0 (VAR_4, VAR_4->n_panels);
  if (!VAR_7) {
   return;
  }
  const char *VAR_8 = VAR_5[VAR_6++];
  char *VAR_9 = FUNC_2 (VAR_3, VAR_8);
  FUNC_1 (VAR_3, VAR_7, VAR_8, VAR_9);
  FUNC_4 (VAR_9);
 }
}
