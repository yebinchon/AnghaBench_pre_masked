
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int isResizing; } ;
struct TYPE_5__ {TYPE_3__* panels; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(RCore *VAR_0) {
 if (!VAR_0->panels) {
  return;
 }
 VAR_0->panels->isResizing = 1;
 FUNC_0 (VAR_0->panels);
 FUNC_1 (VAR_0);
}
