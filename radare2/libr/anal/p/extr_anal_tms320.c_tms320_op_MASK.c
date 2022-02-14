
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_8__ {scalar_t__ cpu; } ;
typedef int (* TMS_ANAL_OP_FN ) (TYPE_1__*,int *,int ,int const*,int) ;
typedef int RAnalOpMask ;
typedef int RAnalOp ;
typedef TYPE_1__ RAnal ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int const*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int const*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int const*,int,int ) ;

int FUNC_5(RAnal * VAR_0, RAnalOp * VAR_1, ut64 VAR_2, const ut8 * VAR_3, int VAR_4, RAnalOpMask VAR_5) {
 TMS_ANAL_OP_FN VAR_6 = FUNC_2;

 if (VAR_0->cpu && FUNC_0(VAR_0->cpu, "c64x") == 0) {



  return -1;

 }
 if (VAR_0->cpu && FUNC_0(VAR_0->cpu, "c54x") == 0) {
  VAR_6 = FUNC_1;
 } else if (VAR_0->cpu && FUNC_0(VAR_0->cpu, "c55x") == 0) {
  VAR_6 = FUNC_2;
 } else if (VAR_0->cpu && FUNC_0(VAR_0->cpu, "c55x+") == 0) {
  VAR_6 = FUNC_3;
 }
 return VAR_6 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
