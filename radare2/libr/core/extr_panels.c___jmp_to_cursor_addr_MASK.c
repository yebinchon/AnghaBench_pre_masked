
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_11__ {scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_1__* view; } ;
struct TYPE_9__ {int curpos; } ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(RCore *VAR_1, RPanel *VAR_2) {
 ut64 VAR_3 = FUNC_0 (VAR_1, VAR_2, VAR_2->view->curpos);
 if (VAR_3 == VAR_0) {
  return;
 }
 VAR_1->offset = VAR_3;
 FUNC_1 (VAR_1);
}
