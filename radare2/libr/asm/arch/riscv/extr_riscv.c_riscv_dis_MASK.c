
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ insn_t ;
typedef int insn ;
struct TYPE_9__ {int bits; } ;
typedef int RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int ) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_1__,int ,int) ;
 int FUNC_3 (TYPE_1__) ;

__attribute__((used)) static int FUNC_4(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, ut64 VAR_3) {
 insn_t VAR_4 = {0};
 if (VAR_3 < 2) {
  return -1;
 }
 FUNC_1 (&VAR_4, VAR_2, FUNC_0 (sizeof (VAR_4), VAR_3));
 int VAR_5 = FUNC_3(VAR_4);
 if (VAR_3 < VAR_5) {
  return -1;
 }
 FUNC_2 (VAR_0, VAR_1, VAR_4, VAR_0->bits, VAR_3);
 return VAR_5;
}
