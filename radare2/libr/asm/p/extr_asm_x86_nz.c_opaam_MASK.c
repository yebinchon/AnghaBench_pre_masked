
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int immediate; int sign; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_0, ut8 *VAR_1, const Opcode *VAR_2) {
 FUNC_0 (VAR_2);
 int VAR_3 = 0;
 int VAR_4 = VAR_2->operands[0].immediate * VAR_2->operands[0].sign;
 VAR_1[VAR_3++] = 0xd4;
 if (VAR_4 == 0) {
  VAR_1[VAR_3++] = 0x0a;
 } else if (VAR_4 < 256 && VAR_4 > -129) {
  VAR_1[VAR_3++] = VAR_4;
 }
 return VAR_3;
}
