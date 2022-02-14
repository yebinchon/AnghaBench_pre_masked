
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_3__ {int type; int jump; scalar_t__ size; scalar_t__ fail; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_2, RAnalOp *VAR_3, ut64 VAR_4, const ut8 *VAR_5) {
 if (VAR_5[0] & 0x80) {
  VAR_3->type = VAR_0;
  VAR_3->fail = VAR_4 + VAR_3->size;
  VAR_3->jump = FUNC_0 (VAR_4, VAR_5);
 } else {
  VAR_3->type = VAR_1;
 }
}
