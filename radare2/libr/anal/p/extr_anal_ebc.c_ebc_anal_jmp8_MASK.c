
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
typedef int int8_t ;
struct TYPE_3__ {int type; void* fail; void* addr; void* jump; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 int VAR_5 = (int8_t)VAR_4[1];
 VAR_2->jump = VAR_3 + 2 + (VAR_5 * 2);
 VAR_2->addr = VAR_3;
 VAR_2->fail = VAR_3 + 2;

 if (FUNC_0(VAR_4[0], 7)) {
  VAR_2->type = VAR_0;
 } else {
  VAR_2->type = VAR_1;
 }
}
