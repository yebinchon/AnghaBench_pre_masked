
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
typedef scalar_t__ ut32 ;
typedef int buffer ;
typedef scalar_t__ WasmOpCodes ;
struct TYPE_12__ {scalar_t__ core; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ op; int txt; TYPE_1__ member_0; } ;
typedef TYPE_4__ WasmOp ;
struct TYPE_11__ {int io; scalar_t__ (* read_at ) (int ,void*,int *,int) ;} ;
struct TYPE_15__ {TYPE_2__ iob; } ;
struct TYPE_14__ {void* jump; scalar_t__ type; } ;
typedef TYPE_5__ RAnalOp ;
typedef TYPE_6__ RAnal ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,void*,int *,int) ;
 int FUNC_1 (TYPE_4__*,int *,int) ;

__attribute__((used)) static bool FUNC_2(RAnal* VAR_7, RAnalOp *VAR_8, ut64 VAR_9, ut32 VAR_10, ut32 VAR_11, bool VAR_12) {
 ut8 VAR_13[16];
 ut8 *VAR_14 = VAR_13;
 ut8 *VAR_15 = VAR_14 + sizeof (VAR_13);
 WasmOp VAR_16 = {0};
 int VAR_17 = 0;
 while (VAR_7->iob.read_at (VAR_7->iob.io, VAR_9, VAR_13, sizeof (VAR_13))) {
  VAR_17 = FUNC_1 (&VAR_16, VAR_14, VAR_15 - VAR_14);
  if (!VAR_16.txt || (VAR_16.type == VAR_6 && VAR_16.op.core == VAR_5)) {

   break;
  }
  if (VAR_16.type == VAR_6) {
   WasmOpCodes VAR_18 = VAR_16.op.core;
   if (VAR_18 == VAR_4 || VAR_18 == VAR_0 || VAR_18 == VAR_3) {
    VAR_11++;
   }
   if (VAR_12 && VAR_18 == VAR_1 && !VAR_11) {
    VAR_8->type = VAR_10;
    VAR_8->jump = VAR_9 + 1;
    return 1;
   } else if (VAR_18 == VAR_2 && VAR_11 > 0) {

    VAR_11--;
   } else if (VAR_18 == VAR_2 && !VAR_11) {
    VAR_8->type = VAR_10;
    VAR_8->jump = VAR_9;
    return 1;
   }
  }
  VAR_9 += VAR_17;
 }
 return 0;
}
