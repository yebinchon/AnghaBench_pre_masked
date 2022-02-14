
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; scalar_t__ vmode; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0, int VAR_1) {
 if (VAR_0 && VAR_0->vmode) {
  FUNC_3 (VAR_1);
  FUNC_1 (VAR_1? FUNC_0 (VAR_0->config, "scr.wheel"): 0);
 } else {
  FUNC_1 (0);
 }
 FUNC_2 ();
}
