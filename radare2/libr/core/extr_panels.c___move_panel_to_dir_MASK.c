
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * panels; } ;
typedef int RPanels ;
typedef int RPanel ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int) ;

void FUNC_8(RCore *VAR_0, RPanel *VAR_1, int VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 FUNC_0 (VAR_3, VAR_1);
 int VAR_4 = FUNC_6 (VAR_0, "Move the current panel to direction (h/l): ");
 VAR_4 = FUNC_7 (VAR_4);
 FUNC_5 (VAR_0, 0, 1);
 switch (VAR_4) {
 case 'h':
  FUNC_2 (VAR_0, VAR_1, VAR_2);
  break;
 case 'l':
  FUNC_3 (VAR_0, VAR_1, VAR_2);
  break;
 case 'k':
  FUNC_4 (VAR_0, VAR_1, VAR_2);
  break;
 case 'j':
  FUNC_1 (VAR_0, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
