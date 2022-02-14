
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {int M; int X; } ;
struct TYPE_8__ {int pc; } ;
struct TYPE_7__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (int,int,int ,TYPE_1__*,int const*,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_1, RAsmOp *VAR_2, const ut8 *VAR_3, int VAR_4) {
 int VAR_5 = FUNC_0 (VAR_0->M, VAR_0->X, VAR_1->pc, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  VAR_5 = 0;
 }
 VAR_2->size = VAR_5;
 if (VAR_3[0] == 0xc2) {
  if (VAR_3[1] & 0x10) {
   VAR_0->X = 0;
  }
  if (VAR_3[1] & 0x20) {
   VAR_0->M = 0;
  }
 } else if (VAR_3[0] == 0xe2) {
  if (VAR_3[1] & 0x10) {
   VAR_0->X = 1;
  }
  if (VAR_3[1] & 0x20) {
   VAR_0->M = 1;
  }
 }
 return VAR_5;
}
