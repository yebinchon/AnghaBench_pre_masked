
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;


struct RBasic {int dummy; } ;
typedef int mrb_state ;
struct TYPE_26__ {struct TYPE_26__* next; void* old; struct RBasic* freelist; } ;
typedef TYPE_3__ mrb_heap_page ;
struct TYPE_27__ {size_t live; size_t live_after_mark; TYPE_3__* sweeps; } ;
typedef TYPE_4__ mrb_gc ;
typedef void* mrb_bool ;
struct TYPE_23__ {scalar_t__ tt; } ;
struct TYPE_24__ {struct RBasic* next; } ;
struct TYPE_25__ {TYPE_11__ basic; TYPE_1__ free; } ;
struct TYPE_28__ {TYPE_2__ as; } ;
typedef TYPE_5__ RVALUE ;


 void* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_11__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_11__*,void*) ;
 TYPE_5__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_11__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static size_t
FUNC_10(mrb_state *VAR_4, mrb_gc *VAR_5, size_t VAR_6)
{
  mrb_heap_page *VAR_7 = VAR_5->sweeps;
  size_t VAR_8 = 0;

  while (VAR_7 && (VAR_8 < VAR_6)) {
    RVALUE *VAR_9 = FUNC_6(VAR_7);
    RVALUE *VAR_10 = VAR_9 + VAR_1;
    size_t VAR_11 = 0;
    mrb_bool VAR_12 = VAR_3;
    mrb_bool VAR_13 = (VAR_7->freelist == ((void*)0));

    if (FUNC_2(VAR_5) && VAR_7->old) {

      VAR_9 = VAR_10;
      VAR_12 = VAR_0;
    }
    while (VAR_9<VAR_10) {
      if (FUNC_0(VAR_5, &VAR_9->as.basic)) {
        if (VAR_9->as.basic.tt != VAR_2) {
          FUNC_5(VAR_4, &VAR_9->as.basic, VAR_0);
          if (VAR_9->as.basic.tt == VAR_2) {
            VAR_9->as.free.next = VAR_7->freelist;
            VAR_7->freelist = (struct RBasic*)VAR_9;
            VAR_11++;
          }
          else {
            VAR_12 = VAR_0;
          }
        }
      }
      else {
        if (!FUNC_1(VAR_5))
          FUNC_7(VAR_5, &VAR_9->as.basic);
        VAR_12 = VAR_0;
      }
      VAR_9++;
    }


    if (VAR_12 && VAR_11 < VAR_1) {
      mrb_heap_page *VAR_14 = VAR_7->next;

      FUNC_9(VAR_5, VAR_7);
      FUNC_8(VAR_5, VAR_7);
      FUNC_4(VAR_4, VAR_7);
      VAR_7 = VAR_14;
    }
    else {
      if (VAR_13 && VAR_11 > 0) {
        FUNC_3(VAR_5, VAR_7);
      }
      if (VAR_7->freelist == ((void*)0) && FUNC_2(VAR_5))
        VAR_7->old = VAR_3;
      else
        VAR_7->old = VAR_0;
      VAR_7 = VAR_7->next;
    }
    VAR_8 += VAR_1;
    VAR_5->live -= VAR_11;
    VAR_5->live_after_mark -= VAR_11;
  }
  VAR_5->sweeps = VAR_7;
  return VAR_8;
}
