
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_6__ {scalar_t__ state; int majorgc_old_threshold; int live_after_mark; scalar_t__ generational; void* full; scalar_t__ iterating; scalar_t__ disabled; } ;
typedef TYPE_1__ mrb_gc ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_4, mrb_gc *VAR_5, mrb_bool VAR_6)
{
  if (VAR_5->disabled || VAR_5->iterating) {
    FUNC_4(VAR_4, VAR_0, "generational mode changed when GC disabled");
    return;
  }
  if (FUNC_2(VAR_5) && !VAR_6) {
    FUNC_0(VAR_4, VAR_5);
    FUNC_3(VAR_5->state == VAR_3);
    VAR_5->full = VAR_1;
  }
  else if (!FUNC_2(VAR_5) && VAR_6) {
    FUNC_1(VAR_4, VAR_5, VAR_3);
    VAR_5->majorgc_old_threshold = VAR_5->live_after_mark/100 * VAR_2;
    VAR_5->full = VAR_1;
  }
  VAR_5->generational = VAR_6;
}
