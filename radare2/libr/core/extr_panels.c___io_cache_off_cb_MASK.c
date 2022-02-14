
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,char*,int ) ;

int FUNC_3(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 FUNC_2 (VAR_2->config, "io.cache", 0);
 (void)FUNC_1 (VAR_2, "io.cache is off");
 FUNC_0 (VAR_2, VAR_0);
 return 0;
}
