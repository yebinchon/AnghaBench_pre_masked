
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int panels; } ;
struct TYPE_9__ {TYPE_1__* model; } ;
struct TYPE_8__ {int rotate; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3 (void *VAR_0, bool VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanel *VAR_3 = FUNC_0 (VAR_2->panels);

 if (VAR_1) {
  VAR_3->model->rotate--;
 } else {
  VAR_3->model->rotate++;
 }
 FUNC_2 (VAR_2, VAR_3->model->rotate);
 FUNC_1 (VAR_2, VAR_3);
}
