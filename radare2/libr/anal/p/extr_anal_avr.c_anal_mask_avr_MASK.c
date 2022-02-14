
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_12__ {int mask; } ;
struct TYPE_11__ {int cpu; } ;
struct TYPE_10__ {int size; scalar_t__ ptr; scalar_t__ jump; } ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;
typedef TYPE_3__ OPCODE_DESC ;
typedef int CPU_MODEL ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,TYPE_1__*,scalar_t__,int const*,int,int *) ;
 int * FUNC_1 (int ) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static ut8 *FUNC_6(RAnal *VAR_1, int VAR_2, const ut8 *VAR_3, ut64 VAR_4) {
 RAnalOp *VAR_5 = ((void*)0);
 ut8 *VAR_6 = ((void*)0);
 int VAR_7;

 if (!(VAR_5 = FUNC_5 ())) {
  return ((void*)0);
 }

 if (!(VAR_6 = FUNC_2 (VAR_2))) {
  FUNC_4 (VAR_5);
  return ((void*)0);
 }

 FUNC_3 (VAR_6, 0xff, VAR_2);

 CPU_MODEL *VAR_8 = FUNC_1 (VAR_1->cpu);

 for (VAR_7 = 0; VAR_7 + 1 < VAR_2; VAR_7 += VAR_5->size) {
  OPCODE_DESC* VAR_9 = FUNC_0 (VAR_1, VAR_5, VAR_4 + VAR_7, VAR_3 + VAR_7, VAR_2 - VAR_7, VAR_8);

  if (VAR_5->size < 1) {
   break;
  }

  if (!VAR_9) {
   continue;
  }



  if (VAR_5->size == 4) {
   VAR_6[VAR_7 + 2] = 0;
   VAR_6[VAR_7 + 3] = 0;
  }

  if (VAR_5->ptr != VAR_0 || VAR_5->jump != VAR_0) {
   VAR_6[VAR_7] = VAR_9->mask;
   VAR_6[VAR_7 + 1] = VAR_9->mask >> 8;
  }
 }

 FUNC_4 (VAR_5);

 return VAR_6;
}
