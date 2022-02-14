
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* panels; } ;
struct TYPE_16__ {TYPE_1__* model; } ;
struct TYPE_15__ {scalar_t__ autoUpdate; } ;
struct TYPE_14__ {scalar_t__ cmdStrCache; scalar_t__ cache; } ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 char* FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 char* FUNC_2 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,char*) ;

void FUNC_5 (void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanel *VAR_3 = (RPanel *)VAR_1;
 bool VAR_4 = VAR_2->panels->autoUpdate && FUNC_0 (VAR_2, VAR_3);
 char *VAR_5 = FUNC_1 (VAR_2, VAR_3);
 if (VAR_4 || !VAR_5) {
  VAR_5 = FUNC_2 (VAR_2, VAR_3, 1);
  if (VAR_3->model->cache && VAR_3->model->cmdStrCache) {
   FUNC_3 (VAR_3);
  }
 }
 FUNC_4 (VAR_2, VAR_3, VAR_5);
}
