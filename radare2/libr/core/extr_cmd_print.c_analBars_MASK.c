
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_19__ {int bbs; } ;
struct TYPE_18__ {int size; } ;
struct TYPE_17__ {int anal; } ;
struct TYPE_16__ {TYPE_1__* block; } ;
struct TYPE_15__ {scalar_t__ blocks; scalar_t__ strings; scalar_t__ flags; scalar_t__ symbols; scalar_t__ comments; scalar_t__ in_functions; scalar_t__ functions; } ;
typedef TYPE_2__ RCoreAnalStats ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RAnalOp ;
typedef TYPE_5__ RAnalFunction ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;
 TYPE_5__* FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 () ;
 TYPE_2__* FUNC_11 (TYPE_3__*,scalar_t__,scalar_t__,int) ;
 TYPE_4__* FUNC_12 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static ut8 *FUNC_15(RCore *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, ut64 VAR_6) {
 int VAR_7, VAR_8 = 0;
 ut8 *VAR_9 = FUNC_2 (1, VAR_3);
 if (!VAR_9) {
  FUNC_4 ("Error: failed to malloc memory");
  return ((void*)0);
 }

 ut8 *VAR_10 = FUNC_6 (VAR_4);
 if (!VAR_10) {
  FUNC_0 (VAR_9);
  FUNC_4 ("Error: failed to malloc memory");
  return ((void*)0);
 }
 if (VAR_2 == 'A') {
  ut64 VAR_11 = VAR_6 + (VAR_4 * VAR_3);
  RCoreAnalStats *VAR_12 = FUNC_11 (VAR_1, VAR_6, VAR_11, VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   int VAR_13 = 0;
   VAR_13 += VAR_12->block[VAR_8].functions;
   VAR_13 += VAR_12->block[VAR_8].in_functions;
   VAR_13 += VAR_12->block[VAR_8].comments;
   VAR_13 += VAR_12->block[VAR_8].symbols;
   VAR_13 += VAR_12->block[VAR_8].flags;
   VAR_13 += VAR_12->block[VAR_8].strings;
   VAR_13 += VAR_12->block[VAR_8].blocks;
   VAR_9[VAR_8] = FUNC_1 (255, VAR_13);
  }
  FUNC_13 (VAR_12);
  FUNC_5 (VAR_10);
  return VAR_9;
 }
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_10 ()) {
   break;
  }
  ut64 VAR_14 = VAR_6 + (VAR_8 + VAR_5) * VAR_4;
  for (VAR_7 = 0; VAR_7 < VAR_4 ; VAR_7++) {
   if (VAR_2 == 'a') {
    RAnalFunction *VAR_15 = FUNC_8 (VAR_1->anal, VAR_14 + VAR_7, 0);
    if (VAR_15) {
     VAR_9[VAR_8] = FUNC_14 (VAR_15->bbs);
    }
    continue;
   }
   RAnalOp *VAR_16 = FUNC_12 (VAR_1, VAR_14 + VAR_7, VAR_0);
   if (VAR_16) {
    if (VAR_16->size < 1) {

     if (VAR_2 == 'i') {
      FUNC_7 (VAR_9, VAR_8);
     }
    } else {
     if (FUNC_3 (VAR_16, VAR_2)) {
      FUNC_7 (VAR_9, VAR_8);
     }
    }
    if (VAR_16->size > 0) {
     VAR_7 += VAR_16->size - 1;
    }
    FUNC_9 (VAR_16);
   } else {
    if (VAR_2 == 'i') {
     FUNC_7 (VAR_9, VAR_8);
    }
   }
  }
 }
 FUNC_5 (VAR_10);
 return VAR_9;
}
