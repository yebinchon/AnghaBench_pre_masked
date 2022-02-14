
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {int size; int jump; int fail; int ptr; int val; scalar_t__ addr; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;
typedef TYPE_2__ HexInsn ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_0, RAnalOp *VAR_1, ut64 VAR_2, const ut8 *VAR_3, int VAR_4, RAnalOpMask VAR_5) {
 HexInsn VAR_6 = {0};;
 ut32 VAR_7 = 0;
 FUNC_2 (VAR_1, 0, sizeof (RAnalOp));
 VAR_7 = FUNC_3 (VAR_3);
 int VAR_8 = FUNC_1 (VAR_7, &VAR_6, (ut32) VAR_2);
 VAR_1->size = VAR_8;
 if (VAR_8 <= 0) {
  return VAR_8;
 }

 VAR_1->addr = VAR_2;
 VAR_1->jump = VAR_1->fail = -1;
 VAR_1->ptr = VAR_1->val = -1;
 return FUNC_0 (&VAR_6, VAR_1);
}
