
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ st8 ;
struct TYPE_9__ {TYPE_1__* operands; } ;
struct TYPE_8__ {scalar_t__ pc; } ;
struct TYPE_7__ {scalar_t__ immediate; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_0, ut8 *VAR_1, const Opcode *VAR_2) {
 FUNC_0 (VAR_2);
 int VAR_3 = 0;
 VAR_1[VAR_3++] = 0xe2;
 st8 VAR_4 = VAR_2->operands[0].immediate - VAR_0->pc - 2;
 VAR_1[VAR_3++] = (ut8)VAR_4;
 return VAR_3;
}
