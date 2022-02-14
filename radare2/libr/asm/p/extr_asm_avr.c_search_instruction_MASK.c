
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mnemonic; int numOperands; int opcodeMask; scalar_t__* operandTypes; } ;
typedef int RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_4(RAsm *VAR_4, char VAR_5[3][VAR_1], int VAR_6) {
 int VAR_7, VAR_8 = 0, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0 - 1; VAR_7++) {

  if (!FUNC_3 (VAR_5[0], VAR_3[VAR_7].mnemonic, VAR_1)) {

   if (VAR_3[VAR_7].numOperands == VAR_6) {


    if (VAR_6 != 2) {
     return VAR_7;
    }

    if (VAR_3[VAR_7].opcodeMask >= 0x9004 &&
     VAR_3[VAR_7].opcodeMask <= 0x9007) {
     if (VAR_3[VAR_7].operandTypes[1] == FUNC_1 (VAR_5[2])) {
      return VAR_7;
     }

    } else if (VAR_3[VAR_7].mnemonic[0] == 'l'
     && VAR_3[VAR_7].mnemonic[1] == 'd'
     && (VAR_3[VAR_7].mnemonic[2] == 'd' || VAR_3[VAR_7].mnemonic[2] == '\0')) {
     if (VAR_3[VAR_7].operandTypes[1] == FUNC_1 (VAR_5[2])) {
      return VAR_7;
     }

    } else if (VAR_3[VAR_7].mnemonic[0] == 'l'
     && VAR_3[VAR_7].mnemonic[1] == 'd'
     && VAR_3[VAR_7].mnemonic[2] == 's'
     && VAR_3[VAR_7].operandTypes[1] == VAR_2) {

     if (FUNC_2(VAR_5[2]) > 0) {
      VAR_9 = FUNC_0 (VAR_4, VAR_5[2]);
      if (VAR_9 > 127) {
       return VAR_7;
      }
     }

    } else if (VAR_3[VAR_7].mnemonic[0] == 's'
     && VAR_3[VAR_7].mnemonic[1] == 't'
     && (VAR_3[VAR_7].mnemonic[2] == 'd' || VAR_3[VAR_7].mnemonic[2] == '\0')) {

     if (VAR_3[VAR_7].operandTypes[0] == FUNC_1 (VAR_5[1])) {
      return VAR_7;
     }

    } else if (VAR_3[VAR_7].mnemonic[0] == 's'
     && VAR_3[VAR_7].mnemonic[1] == 't'
     && VAR_3[VAR_7].mnemonic[2] == 's'
     && VAR_3[VAR_7].operandTypes[0] == VAR_2) {

     if (FUNC_2(VAR_5[1]) > 0) {
      VAR_8 = FUNC_0 (VAR_4, VAR_5[1]);
      if (VAR_8 > 127) {
       return VAR_7;
      }
     }
    } else {
     return VAR_7;
    }
   }
  }
 }
 return -1;
}
