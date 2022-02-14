
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* panels_menu; } ;
struct TYPE_10__ {TYPE_5__* panels; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

int FUNC_5(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 FUNC_1 (VAR_2, VAR_2->panels);
 FUNC_0 (VAR_2);
 FUNC_2 (VAR_2->panels);
 FUNC_4 (VAR_2, 0, 0);
 VAR_2->panels->panels_menu->depth = 1;
 FUNC_3 (VAR_2, VAR_0);
 return 0;
}
