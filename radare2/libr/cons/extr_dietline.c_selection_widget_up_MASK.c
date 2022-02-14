
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sel_widget; } ;
struct TYPE_3__ {scalar_t__ direction; int h; int selection; int options_len; int scroll; } ;
typedef TYPE_1__ RSelWidget ;


 TYPE_2__ VAR_0 ;
 void* FUNC_0 (int,int ) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3) {
 RSelWidget *VAR_4 = VAR_0.sel_widget;
 if (VAR_4) {
  if (VAR_4->direction == VAR_1) {
   int VAR_5 = FUNC_1 (VAR_4->h, VAR_2 - 1);
   VAR_4->selection = FUNC_1 (VAR_4->selection + VAR_3, VAR_4->options_len - 1);
   if (VAR_3 == 1) {
    VAR_4->scroll = FUNC_1 (VAR_4->scroll + 1, VAR_2 - 1);
   } else if (VAR_4->selection + (VAR_5 - VAR_4->scroll) > VAR_4->options_len - 1) {
    VAR_4->scroll = VAR_5 - (VAR_4->options_len - 1 - VAR_4->selection);
   }
  } else {
   VAR_4->selection = FUNC_0 (VAR_4->selection - VAR_3, 0);
   if (VAR_3 == 1) {
    VAR_4->scroll = FUNC_0 (VAR_4->scroll - 1, 0);
   } else if (VAR_4->selection - VAR_4->scroll <= 0) {
    VAR_4->scroll = VAR_4->selection;
   }
  }
 }
}
