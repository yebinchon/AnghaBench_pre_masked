
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int cur; int screen_bounds; int ocur; scalar_t__ cur_enabled; } ;
struct TYPE_6__ {int offset; TYPE_3__* print; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0, ut64 VAR_1, ut64 VAR_2, ut64 VAR_3) {
 bool VAR_4 = 1;
 if (VAR_0->offset != VAR_3) {
  bool VAR_5 = 0;


  if (VAR_0->print->cur != -1 && VAR_0->print->screen_bounds > 1) {
   if (VAR_0->offset >= VAR_1 &&
       VAR_0->offset < VAR_0->print->screen_bounds) {
    VAR_0->print->ocur = -1;
    VAR_0->print->cur = VAR_0->offset - VAR_1;
    VAR_5 = 1;
   }
  }

  if (!VAR_5) {
   VAR_4 = 0;
   FUNC_2 (VAR_0->print);
  }
 }

 if (VAR_0->print->cur_enabled) {
  if (VAR_4) {
   FUNC_1 (VAR_0, VAR_1, 1);
   FUNC_0 (VAR_0, VAR_2);
  }
 }
}
