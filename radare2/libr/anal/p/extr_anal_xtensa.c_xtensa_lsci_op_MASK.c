
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int family; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int const*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_3 (RAnal *VAR_1, RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 ut8 VAR_5 = VAR_4[1] >> 4;
 VAR_2->family = VAR_0;
 if ((VAR_5 & 3) == 0) {
  if (VAR_5 & 4) {
   FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
  } else {
   FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  }
 } else {
  FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
