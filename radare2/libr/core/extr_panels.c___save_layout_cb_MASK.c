
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* view; } ;
struct TYPE_8__ {int panels; } ;
struct TYPE_7__ {int refresh; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 FUNC_3 (VAR_2);
 FUNC_2 (VAR_2, VAR_0);
 FUNC_0 (VAR_2);
 FUNC_1 (VAR_2->panels)->view->refresh = 1;
 return 0;
}
