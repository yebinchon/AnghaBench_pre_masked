
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_cursor {scalar_t__ hidden; TYPE_1__* seat; int hide_source; } ;
struct TYPE_4__ {int idle; } ;
struct TYPE_3__ {int wlr_seat; } ;


 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (struct sway_cursor*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct sway_cursor *VAR_1) {
 FUNC_2(
   VAR_1->hide_source, FUNC_0(VAR_1));

 FUNC_3(VAR_0.idle, VAR_1->seat->wlr_seat);
 if (VAR_1->hidden) {
  FUNC_1(VAR_1);
 }
}
