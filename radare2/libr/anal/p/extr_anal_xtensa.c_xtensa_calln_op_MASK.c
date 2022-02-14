
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_3__ {int jump; scalar_t__ size; scalar_t__ fail; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*) ;

__attribute__((used)) static void FUNC_1 (RAnal *VAR_1, RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4) {
 VAR_2->type = VAR_0;
 VAR_2->fail = VAR_3 + VAR_2->size;
 VAR_2->jump = FUNC_0 (VAR_3, VAR_4);
}
