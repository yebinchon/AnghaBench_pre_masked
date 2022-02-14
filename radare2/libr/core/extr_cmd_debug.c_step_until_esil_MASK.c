
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* anal; } ;
struct TYPE_10__ {int break_loop; TYPE_2__* anal; TYPE_5__* dbg; } ;
struct TYPE_9__ {int esil; } ;
struct TYPE_8__ {int esil; } ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_8(RCore *VAR_1, const char *VAR_2) {
 if (!VAR_1 || !VAR_2 || !VAR_1->dbg || !VAR_1->dbg->anal || !VAR_1->dbg->anal->esil) {

  FUNC_0 ("Not initialized %p. Run 'aei' first.\n", VAR_1->anal->esil);
  return 0;
 }
 FUNC_3 (((void*)0), ((void*)0));
 for (;;) {
  if (FUNC_4 ()) {
   VAR_1->break_loop = 1;
   break;
  }
  if (FUNC_5 (VAR_1->dbg)) {
   VAR_1->break_loop = 1;
   break;
  }
  FUNC_7 (VAR_1->dbg, 1);
  FUNC_6 (VAR_1->dbg, VAR_0, 0);
  if (FUNC_1 (VAR_1->anal->esil, VAR_2)) {
   FUNC_0 ("ESIL BREAK!\n");
   break;
  }
 }
 FUNC_2 ();
 return 1;
}
