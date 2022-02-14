
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int panels; } ;
struct TYPE_9__ {TYPE_1__* view; } ;
struct TYPE_8__ {int refresh; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;

void FUNC_3(RCore *VAR_1) {
 RPanel *VAR_2 = FUNC_1 (VAR_1->panels);
 if (FUNC_0 (VAR_2, VAR_0)) {
  FUNC_2 (VAR_1, "dbs $$", 0);
  VAR_2->view->refresh = 1;
 }
}
