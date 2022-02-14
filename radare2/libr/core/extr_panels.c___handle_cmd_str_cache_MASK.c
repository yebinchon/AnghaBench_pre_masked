
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* print; int panels; } ;
struct TYPE_15__ {TYPE_1__* model; } ;
struct TYPE_14__ {int cur_enabled; } ;
struct TYPE_13__ {int cache; } ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (TYPE_4__*,char*) ;

char *FUNC_8(RCore *VAR_0, RPanel *VAR_1, bool VAR_2) {
 char *VAR_3 = FUNC_2 (VAR_0, VAR_1);
 bool VAR_4 = VAR_0->print->cur_enabled && FUNC_3 (VAR_0->panels) != VAR_1;
 if (VAR_4) {
  VAR_0->print->cur_enabled = 0;
 }
 char *VAR_5 = FUNC_7 (VAR_0, VAR_3);
 FUNC_6 (((void*)0));
 if (VAR_2) {
  VAR_1->model->cache = 1;
 }
 if (FUNC_1 (VAR_5)) {
  FUNC_4 (VAR_0, VAR_1, VAR_5);
 } else {
  FUNC_0 (VAR_5);
 }
 FUNC_5 (VAR_3);
 if (VAR_4) {
  VAR_0->print->cur_enabled = 1;
 }
 return VAR_5;
}
