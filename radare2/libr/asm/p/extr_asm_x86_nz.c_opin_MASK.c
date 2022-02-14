
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int st32 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {scalar_t__ reg; int type; int immediate; int sign; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_8, ut8 *VAR_9, const Opcode *VAR_10) {
 FUNC_0 (VAR_10);
 int VAR_11 = 0;
 st32 VAR_12 = 0;
 if (VAR_10->operands[1].reg == VAR_6) {
  if (VAR_10->operands[0].reg == VAR_4 &&
   VAR_10->operands[0].type & VAR_0) {
   VAR_9[VAR_11++] = 0xec;
   return VAR_11;
  }
  if (VAR_10->operands[0].reg == VAR_5 &&
   VAR_10->operands[0].type & VAR_3) {
   VAR_9[VAR_11++] = 0x66;
   VAR_9[VAR_11++] = 0xed;
   return VAR_11;
  }
  if (VAR_10->operands[0].reg == VAR_7 &&
   VAR_10->operands[0].type & VAR_2) {
   VAR_9[VAR_11++] = 0xed;
   return VAR_11;
  }
 } else if (VAR_10->operands[1].type & VAR_1) {
  VAR_12 = VAR_10->operands[1].immediate * VAR_10->operands[1].sign;
  if (VAR_12 > 255 || VAR_12 < -128) {
   return -1;
  }
  if (VAR_10->operands[0].reg == VAR_4 &&
   VAR_10->operands[0].type & VAR_0) {
   VAR_9[VAR_11++] = 0xe4;
  } else if (VAR_10->operands[0].reg == VAR_5 &&
       VAR_10->operands[0].type & VAR_0) {
   VAR_9[VAR_11++] = 0x66;
   VAR_9[VAR_11++] = 0xe5;
  } else if (VAR_10->operands[0].reg == VAR_7 &&
       VAR_10->operands[0].type & VAR_2) {
   VAR_9[VAR_11++] = 0xe5;
  }
  VAR_9[VAR_11++] = VAR_12;
 }
 return VAR_11;
}
