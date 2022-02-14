
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* print; int panels; } ;
struct TYPE_11__ {TYPE_1__* model; } ;
struct TYPE_10__ {scalar_t__ cur; } ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_2__ RPrint ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (int ) ;

void FUNC_3(RCore *VAR_3) {
 RPanel *VAR_4 = FUNC_2 (VAR_3->panels);
 RPrint *VAR_5 = VAR_3->print;
 if (FUNC_0 (VAR_4, VAR_1)
   || FUNC_0 (VAR_4, VAR_2)) {
  if (VAR_5->cur > 0) {
   VAR_5->cur--;
   VAR_4->model->addr--;
  }
 } else if (FUNC_0 (VAR_4, VAR_0)) {
  VAR_5->cur--;
  FUNC_1 (VAR_3);
 } else {
  VAR_5->cur--;
 }
}
