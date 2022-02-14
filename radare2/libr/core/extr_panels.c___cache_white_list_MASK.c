
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* model; } ;
struct TYPE_4__ {int cache; int cmd; } ;
typedef TYPE_2__ RPanel ;
typedef int RCore ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(RCore *VAR_1, RPanel *VAR_2) {
 int VAR_3 = 0;
 for (; VAR_3 < FUNC_0 (VAR_0); VAR_3++) {
  if (!FUNC_1 (VAR_2->model->cmd, VAR_0[VAR_3])) {
   VAR_2->model->cache = 1;
   return;
  }
 }
 VAR_2->model->cache = 0;
}
