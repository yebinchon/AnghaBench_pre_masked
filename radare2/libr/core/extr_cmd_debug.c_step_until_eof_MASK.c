
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {int dbg; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(RCore *VAR_0) {
 int VAR_1 = 200000;
 ut64 VAR_2, VAR_3 = FUNC_3 (VAR_0->dbg, "SP");
 FUNC_2 (((void*)0), ((void*)0));
 do {

  FUNC_4 (VAR_0->dbg, 1);
  VAR_2 = FUNC_3 (VAR_0->dbg, "SP");

  if (--VAR_1 < 0) {
   FUNC_0 ("Step loop limit exceeded\n");
   break;
  }
 } while (VAR_2 <= VAR_3);
 FUNC_1 ();
 return 1;
}
