
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* panels; } ;
struct TYPE_5__ {scalar_t__ mode; scalar_t__ prevMode; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;

void FUNC_1(RCore *VAR_2) {
 RPanels *VAR_3 = VAR_2->panels;
 if (VAR_3->mode != VAR_1) {
  VAR_3->prevMode = VAR_3->mode;
  FUNC_0 (VAR_2, VAR_1);
 } else {
  FUNC_0 (VAR_2, VAR_3->prevMode);
  VAR_3->prevMode = VAR_0;
 }
}
