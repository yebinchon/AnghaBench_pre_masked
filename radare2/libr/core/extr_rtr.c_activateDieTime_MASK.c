
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (RCore *VAR_2) {
 int VAR_3 = FUNC_2 (VAR_2->config, "http.dietime");
 if (VAR_3 > 0) {




  FUNC_1 ("http.dietime only works on *nix systems\n");

 }
}
