
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_7__ {TYPE_1__* operands; } ;
struct TYPE_8__ {TYPE_2__ arm64; } ;
struct TYPE_6__ {unsigned int reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

__attribute__((used)) static int FUNC_0(cs_insn *VAR_11, int VAR_12) {
 unsigned int VAR_13 = VAR_11->detail->arm64.operands[VAR_12].reg;
 if ( (VAR_13 >= VAR_6 && VAR_13 <= VAR_7) ||
  (VAR_13 >= VAR_8 && VAR_13 <= VAR_9) ||
  VAR_13 == VAR_10) {
  return 4;
 }
 if (VAR_13 >= VAR_0 && VAR_13 <= VAR_1) {
  return 1;
 }
 if (VAR_13 >= VAR_2 && VAR_13 <= VAR_3) {
  return 2;
 }
 if (VAR_13 >= VAR_4 && VAR_13 <= VAR_5) {
  return 16;
 }
 return 8;
}
