
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int config; int panels; } ;
struct TYPE_8__ {TYPE_1__* view; } ;
struct TYPE_7__ {int refresh; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;
typedef int RConsCanvas ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int *,int *,int) ;
 char* FUNC_12 (char*,int,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14 (RCore *VAR_1, RConsCanvas *VAR_2) {
 bool VAR_3 = FUNC_3 (VAR_1->config, "scr.utf8");
 FUNC_4 (VAR_1->config, "scr.utf8", 0);
 RPanel *VAR_4 = FUNC_0 (VAR_1->panels);
 VAR_4->view->refresh = 1;
 VAR_0= 0;
 FUNC_1 (VAR_1);
 VAR_0= 1;
 FUNC_4 (VAR_1->config, "scr.utf8", VAR_3);
 char *VAR_5 = FUNC_5 (VAR_2);
 if (VAR_5) {

  FUNC_11 (VAR_5, ((void*)0), ((void*)0), -1);
  int VAR_6, VAR_7, VAR_8 = FUNC_8 (&VAR_7);
  for (VAR_6 = VAR_7; VAR_6 > 0; VAR_6--) {
   int VAR_9 = VAR_6;
   char *VAR_10 = FUNC_12 (VAR_5, VAR_8, VAR_9);
   FUNC_6 ();
   FUNC_9 (0, (VAR_7 / 2) - (VAR_9 / 2));

   FUNC_10 (VAR_10);
   FUNC_7 ();
   FUNC_2 (VAR_10);
   FUNC_13 (3000);
  }
  FUNC_13 (100000);
  FUNC_2 (VAR_5);
 }
}
