
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int bits; } ;
typedef TYPE_1__ RAsm ;
typedef int Opcode ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_0, ut8 *VAR_1, const Opcode *VAR_2) {
 FUNC_0 (VAR_2);
 int VAR_3 = 0;
 if (VAR_0->bits == 64) {
  VAR_1[VAR_3++] = 0x48;
 }
 VAR_1[VAR_3++] = 0x98;
 return VAR_3;
}
