
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_5__ {TYPE_4__* shared; scalar_t__ capa; } ;
struct TYPE_6__ {TYPE_1__ aux; scalar_t__ len; int * ptr; } ;
struct TYPE_7__ {TYPE_2__ heap; } ;
struct RArray {TYPE_3__ as; } ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_8__ {int refcnt; } ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 scalar_t__ FUNC_1 (struct RArray*) ;
 scalar_t__ FUNC_2 (struct RArray*) ;
 int FUNC_3 (struct RArray*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct RArray*,scalar_t__) ;
 int FUNC_5 (struct RArray*) ;
 scalar_t__ FUNC_6 (struct RArray*) ;
 int FUNC_7 (struct RArray*) ;
 int FUNC_8 (struct RArray*) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int *,struct RArray*,scalar_t__) ;
 int FUNC_11 (int *,struct RArray*) ;
 int FUNC_12 (int *,struct RArray*) ;
 int FUNC_13 (int *,TYPE_4__*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (struct RArray*) ;
 int FUNC_16 (int *,struct RBasic*) ;

__attribute__((used)) static void
FUNC_17(mrb_state *VAR_1, struct RArray *VAR_2, struct RArray *VAR_3)
{
  mrb_int VAR_4 = FUNC_2(VAR_3);

  FUNC_12(VAR_1, VAR_2);
  if (VAR_2 == VAR_3) return;
  if (FUNC_6(VAR_2)) {
    FUNC_13(VAR_1, VAR_2->as.heap.aux.shared);
    VAR_2->as.heap.aux.capa = 0;
    VAR_2->as.heap.len = 0;
    VAR_2->as.heap.ptr = ((void*)0);
    FUNC_8(VAR_2);
  }
  if (FUNC_6(VAR_3)) {
  shared_b:
    if (FUNC_1(VAR_2)) {
      FUNC_7(VAR_2);
    }
    else {
      FUNC_14(VAR_1, VAR_2->as.heap.ptr);
    }
    VAR_2->as.heap.ptr = VAR_3->as.heap.ptr;
    VAR_2->as.heap.len = VAR_4;
    VAR_2->as.heap.aux.shared = VAR_3->as.heap.aux.shared;
    VAR_2->as.heap.aux.shared->refcnt++;
    FUNC_5(VAR_2);
    FUNC_16(VAR_1, (struct RBasic*)VAR_2);
    return;
  }
  if (!FUNC_15(VAR_3) && VAR_4 > VAR_0) {
    FUNC_11(VAR_1, VAR_3);
    goto shared_b;
  }
  if (FUNC_0(VAR_2) < VAR_4)
    FUNC_10(VAR_1, VAR_2, VAR_4);
  FUNC_9(FUNC_3(VAR_2), FUNC_3(VAR_3), VAR_4);
  FUNC_16(VAR_1, (struct RBasic*)VAR_2);
  FUNC_4(VAR_2, VAR_4);
}
