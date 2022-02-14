
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct loopinfo {scalar_t__ type; scalar_t__ ensure_level; int pc3; int acc; struct loopinfo* prev; } ;
typedef int node ;
struct TYPE_10__ {scalar_t__ ensure_level; struct loopinfo* loop; } ;
typedef TYPE_1__ codegen_scope ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_8(codegen_scope *VAR_9, node *VAR_10)
{
  if (!VAR_9->loop) {
    FUNC_0(VAR_9, VAR_10, VAR_3);
    FUNC_7(VAR_9, "unexpected break");
  }
  else {
    struct loopinfo *VAR_11;
    int VAR_12 = 0;

    if (VAR_10) {
      FUNC_4(VAR_9, VAR_10);
    }

    VAR_11 = VAR_9->loop;
    while (VAR_11) {
      if (VAR_11->type == VAR_0) {
        VAR_12++;
        VAR_11 = VAR_11->prev;
      }
      else if (VAR_11->type == VAR_2) {
        VAR_11 = VAR_11->prev;
      }
      else{
        break;
      }
    }
    if (!VAR_11) {
      FUNC_7(VAR_9, "unexpected break");
      return;
    }
    if (VAR_12 > 0) {
      FUNC_6(VAR_9, VAR_8, VAR_12);
    }

    if (VAR_11->type == VAR_1) {
      int VAR_13;

      if (VAR_9->ensure_level > VAR_9->loop->ensure_level) {
        FUNC_6(VAR_9, VAR_5, VAR_9->ensure_level - VAR_9->loop->ensure_level);
      }
      if (VAR_10) {
        FUNC_2(VAR_9, VAR_11->acc, FUNC_1(), 0);
      }
      VAR_13 = FUNC_5(VAR_9, VAR_6, VAR_11->pc3);
      VAR_11->pc3 = VAR_13;
    }
    else {
      if (!VAR_10) {
        FUNC_6(VAR_9, VAR_7, FUNC_1());
      }
      FUNC_3(VAR_9, VAR_4, FUNC_1());
    }
  }
}
