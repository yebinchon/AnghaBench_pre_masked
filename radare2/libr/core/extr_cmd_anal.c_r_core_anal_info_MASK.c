
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fcns; } ;
struct TYPE_7__ {TYPE_3__* anal; int flags; } ;
typedef TYPE_1__ RCore ;
typedef int PJ ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14 (RCore *VAR_0, const char *VAR_1) {
 int VAR_2 = FUNC_13 (VAR_0->anal->fcns);
 int VAR_3 = FUNC_12 (VAR_0->flags, "str.*");
 int VAR_4 = FUNC_12 (VAR_0->flags, "sym.*");
 int VAR_5 = FUNC_12 (VAR_0->flags, "sym.imp.*");
 int VAR_6 = FUNC_1 (VAR_0);
 int VAR_7 = FUNC_2 (VAR_0);
 int VAR_8 = FUNC_0 (VAR_0);
 int VAR_9 = FUNC_9 (VAR_0->anal);
 int VAR_10 = (VAR_6 > 0)? (VAR_7 * 100 / VAR_6): 0;
 if (*VAR_1 == 'j') {
  PJ *VAR_11 = FUNC_6 ();
  if (!VAR_11) {
   return;
  }
  FUNC_7 (VAR_11);
  FUNC_5 (VAR_11, "fcns", VAR_2);
  FUNC_5 (VAR_11, "xrefs", VAR_9);
  FUNC_5 (VAR_11, "calls", VAR_8);
  FUNC_5 (VAR_11, "strings", VAR_3);
  FUNC_5 (VAR_11, "symbols", VAR_4);
  FUNC_5 (VAR_11, "imports", VAR_5);
  FUNC_5 (VAR_11, "covrage", VAR_7);
  FUNC_5 (VAR_11, "codesz", VAR_6);
  FUNC_5 (VAR_11, "percent", VAR_10);
  FUNC_3 (VAR_11);
  FUNC_11 (FUNC_8 (VAR_11));
  FUNC_4 (VAR_11);
 } else {
  FUNC_10 ("fcns    %d\n", VAR_2);
  FUNC_10 ("xrefs   %d\n", VAR_9);
  FUNC_10 ("calls   %d\n", VAR_8);
  FUNC_10 ("strings %d\n", VAR_3);
  FUNC_10 ("symbols %d\n", VAR_4);
  FUNC_10 ("imports %d\n", VAR_5);
  FUNC_10 ("covrage %d\n", VAR_7);
  FUNC_10 ("codesz  %d\n", VAR_6);
  FUNC_10 ("percent %d%%\n", VAR_10);
 }
}
