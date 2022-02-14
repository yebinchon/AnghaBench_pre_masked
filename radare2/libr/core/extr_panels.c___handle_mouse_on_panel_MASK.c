
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_19__ {int num; int config; int * panels; } ;
struct TYPE_18__ {TYPE_2__* view; } ;
struct TYPE_16__ {int x; } ;
struct TYPE_17__ {TYPE_1__ pos; } ;
typedef int RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (int *,int const) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int ,scalar_t__ const) ;
 int FUNC_6 (TYPE_4__*,int const) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (TYPE_4__*,int *,int,int) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (TYPE_4__*,scalar_t__ const,int) ;
 void* FUNC_13 (int ,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static bool FUNC_15(RCore *VAR_2, RPanel *VAR_3, int VAR_4, int VAR_5, int *VAR_6) {
 RPanels *VAR_7 = VAR_2->panels;
 int VAR_8;
 (void)FUNC_11 (&VAR_8);
 const int VAR_9 = FUNC_3 (VAR_2, VAR_4, VAR_5);
 char *VAR_10 = FUNC_9 (VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_9 == -1) {
  return 0;
 }
 FUNC_6 (VAR_2, VAR_9);
 FUNC_7 (VAR_2, 1, 1);
 RPanel *VAR_11 = FUNC_2(VAR_7, VAR_9);
 if (VAR_10) {
  if (FUNC_1 (VAR_3, VAR_1) &&
    FUNC_0 (VAR_10, FUNC_14 (VAR_10))) {
   const ut64 VAR_12 = FUNC_13 (VAR_2->num, VAR_10);
   FUNC_12 (VAR_2, VAR_12, 1);
   FUNC_5 (VAR_2, VAR_0, VAR_12);
  }
  FUNC_10 (VAR_2->config, "scr.highlight", VAR_10);


  {
   ut64 VAR_13 = FUNC_13 (VAR_2->num, VAR_10);
   if (VAR_13 > 0) {

    FUNC_4 (VAR_2, VAR_13);
   }
  }

  FUNC_8 (VAR_10);
 }
 if (VAR_4 >= VAR_11->view->pos.x && VAR_4 < VAR_11->view->pos.x + 4) {
  *VAR_6 = 'c';
  return 0;
 }
 return 1;
}
