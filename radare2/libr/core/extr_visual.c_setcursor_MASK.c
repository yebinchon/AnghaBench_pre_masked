
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int cur_enabled; int cur; int col; } ;
struct TYPE_4__ {TYPE_3__* print; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(RCore *VAR_1, bool VAR_2) {
 int VAR_3 = VAR_1->print->flags;
 if (VAR_1->print->cur_enabled) {
  VAR_3 |= VAR_0;
 } else {
  VAR_3 &= ~(VAR_0);
 }
 VAR_1->print->cur_enabled = VAR_2;
 if (VAR_1->print->cur == -1) {
  VAR_1->print->cur = 0;
 }
 FUNC_0 (VAR_1->print, VAR_3);
 VAR_1->print->col = VAR_1->print->cur_enabled? 1: 0;
}
