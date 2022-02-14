
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {int break_loop; int dbg; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(RCore *VAR_0, ut64 VAR_1) {
 ut64 VAR_2 = FUNC_5 (VAR_0->dbg, "PC");
 if (!VAR_2) {
  FUNC_0 ("Cannot 'drn PC'\n");
  return 0;
 }
 if (!VAR_1) {
  FUNC_0 ("Cannot continue until address 0\n");
  return 0;
 }
 FUNC_2 (((void*)0), ((void*)0));
 do {
  if (FUNC_3 ()) {
   VAR_0->break_loop = 1;
   break;
  }
  if (FUNC_4 (VAR_0->dbg)) {
   VAR_0->break_loop = 1;
   break;
  }
  FUNC_6 (VAR_0->dbg, 1);
  VAR_2 = FUNC_5 (VAR_0->dbg, "PC");

 } while (VAR_2 != VAR_1);
 FUNC_1 ();
 return 1;
}
