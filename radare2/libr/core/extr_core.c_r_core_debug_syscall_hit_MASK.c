
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0) {
 const char *VAR_1 = FUNC_0 (VAR_0->config, "cmd.onsyscall");

 if (VAR_1 && VAR_1[0] != 0) {
  FUNC_2 (VAR_0, VAR_1);
  FUNC_1 ();
 }
}
