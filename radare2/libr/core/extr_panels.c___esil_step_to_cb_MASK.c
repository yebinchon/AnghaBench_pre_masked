
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 char* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(void *VAR_0) {
 RCore *VAR_1 = (RCore *)VAR_0;
 char *VAR_2 = FUNC_2 (VAR_1, "target addr: ");
 FUNC_0 (VAR_1, FUNC_3 (VAR_1->num, VAR_2));
 FUNC_1 (VAR_1, 0, 0);
 return 0;
}
