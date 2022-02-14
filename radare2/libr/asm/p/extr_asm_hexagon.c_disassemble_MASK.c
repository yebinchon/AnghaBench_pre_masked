
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_9__ {int mnem; int member_0; } ;
struct TYPE_8__ {scalar_t__ pc; } ;
struct TYPE_7__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ HexInsn ;


 int FUNC_0 (int ,TYPE_3__*,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3 (RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 HexInsn VAR_4 = {0};
 ut32 VAR_5 = FUNC_1 (VAR_2);
 VAR_1->size = FUNC_0 (VAR_5, &VAR_4, (ut32) VAR_0->pc);
 FUNC_2 (&VAR_1->buf_asm, VAR_4.mnem);
 return VAR_1->size;
}
