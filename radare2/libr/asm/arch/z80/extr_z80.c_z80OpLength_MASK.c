
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ op_moar; } ;
typedef TYPE_1__ z80_opcode ;
typedef size_t ut8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (size_t const) ;
 size_t FUNC_1 (size_t const) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_2 (const ut8 *VAR_9, int VAR_10) {
 z80_opcode *VAR_11;
 int VAR_12 = 0, VAR_13 = 0;
 if (VAR_10 < 1) {
  return 0;
 }
 VAR_11 = VAR_8;
 if (VAR_11[VAR_9[0]].type & VAR_7) {
  if (VAR_10 < 2) {
   return 0;
  }
  if (VAR_11[VAR_9[0]].type & VAR_2) {
   VAR_11 = (z80_opcode *)VAR_11[VAR_9[0]].op_moar;
   VAR_12 = VAR_11[FUNC_1(VAR_9[1])].type;
  } else if (VAR_11[VAR_9[0]].type & VAR_3) {
   VAR_11 = (z80_opcode *)VAR_11[VAR_9[0]].op_moar;
   VAR_12 = VAR_11[FUNC_0(VAR_9[1])].type;
  }
 } else {
  VAR_12 = VAR_11[VAR_9[0]].type;
 }
 if (VAR_12 & VAR_6) {
  VAR_13++;
 }
 if ((VAR_12 & VAR_1) && !(VAR_12 & VAR_0)) {
  VAR_13++;
 }
 if (VAR_12 & VAR_4) {
  VAR_13 += 2;
 }
 if (VAR_12 & VAR_0) {
  VAR_13 += 2;
 }
 if (VAR_12 & VAR_5) {
  VAR_13 += 3;
 }
 if (VAR_13 > VAR_10) {
  return 0;
 }
 return VAR_13;
}
