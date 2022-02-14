
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {TYPE_6__* operands; } ;
typedef int RAsm ;
typedef TYPE_1__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,int *,TYPE_1__ const*,int) ;
 int FUNC_2 (int *,int *,TYPE_1__ const*,int) ;
 int FUNC_3 (int *,int *,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(RAsm *VAR_3, ut8 *VAR_4, const Opcode *VAR_5) {
 if (VAR_5->operands[1].type & VAR_0) {
  if (VAR_5->operands[0].type & VAR_1 &&
      VAR_5->operands[0].type & VAR_2) {
   return FUNC_1 (VAR_3, VAR_4, VAR_5, 0x00);
  }
  if (!FUNC_0 (&VAR_5->operands[0])) {
   return FUNC_3 (VAR_3, VAR_4, VAR_5);
  }
 }
 return FUNC_2 (VAR_3, VAR_4, VAR_5, 0x00);
}
