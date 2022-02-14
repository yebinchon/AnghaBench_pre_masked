
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_5__ {int bits; } ;
typedef int RAnalOpMask ;
typedef int RAnalOp ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (TYPE_1__*,int *,int ,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int const*,int) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_0, RAnalOp *VAR_1, ut64 VAR_2, const ut8 *VAR_3, int VAR_4, RAnalOpMask VAR_5) {
 if (VAR_0->bits == 64) {
  return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
 return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
