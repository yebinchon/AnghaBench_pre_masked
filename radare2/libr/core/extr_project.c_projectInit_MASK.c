
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(RCore *VAR_0) {
 char *VAR_1 = FUNC_3 (FUNC_2 (VAR_0->config, "dir.projects"));
 int VAR_2 = FUNC_4 (VAR_1);
 if (!VAR_2) {
  FUNC_0 ("Cannot mkdir dir.projects\n");
 }
 FUNC_1 (VAR_1);
 return VAR_2;
}
