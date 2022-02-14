
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* panels; } ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ prevMode; scalar_t__ fun; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int,int) ;

void FUNC_7(RCore *VAR_4) {
 RPanels *VAR_5 = VAR_4->panels;
 RPanel *VAR_6 = FUNC_0 (VAR_5);
 if (VAR_5->mode != VAR_3) {
  VAR_5->prevMode = VAR_5->mode;
  FUNC_5 (VAR_4, VAR_3);
  FUNC_4 (VAR_6);
  FUNC_1 (VAR_5);
 } else {
  FUNC_5 (VAR_4, VAR_5->prevMode);
  VAR_5->prevMode = VAR_2;
  FUNC_3 (VAR_6);
  FUNC_6 (VAR_4, 0, 0);
  if (VAR_5->fun == VAR_1 || VAR_5->fun == VAR_0) {
   FUNC_2 (VAR_5);
  }
 }
}
