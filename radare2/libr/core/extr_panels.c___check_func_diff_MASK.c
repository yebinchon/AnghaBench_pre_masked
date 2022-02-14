
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {char* name; } ;
struct TYPE_10__ {int offset; int anal; } ;
struct TYPE_9__ {TYPE_1__* model; } ;
struct TYPE_8__ {void* funcName; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RAnalFunction ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 TYPE_4__* FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (void*,char*) ;
 scalar_t__ FUNC_3 (void*,char*) ;

bool FUNC_4(RCore *VAR_1, RPanel *VAR_2) {
 RAnalFunction *VAR_3 = FUNC_1 (VAR_1->anal, VAR_1->offset, VAR_0);
 if (!VAR_3) {
  if (FUNC_0 (VAR_2->model->funcName)) {
   return 0;
  }
  VAR_2->model->funcName = FUNC_2 (VAR_2->model->funcName, "");
  return 1;
 }
 if (!VAR_2->model->funcName || FUNC_3 (VAR_2->model->funcName, VAR_3->name)) {
  VAR_2->model->funcName = FUNC_2 (VAR_2->model->funcName, VAR_3->name);
  return 1;
 }
 return 0;
}
