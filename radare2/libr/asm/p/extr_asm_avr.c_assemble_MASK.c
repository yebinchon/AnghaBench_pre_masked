
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int numOperands; int opcodeMask; scalar_t__* operandTypes; int * operandMasks; } ;
struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__,int*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,char**,unsigned int) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(RAsm *VAR_5, RAsmOp *VAR_6, const char *VAR_7) {
 char VAR_8[3][VAR_0];
 char *VAR_9;
 uint32_t VAR_10 = 0;
 int VAR_11 = 0;
 uint32_t VAR_12 = 0, VAR_13 = 0;
 unsigned int VAR_14 = 0;
 int VAR_15 = -1;



 VAR_9 = FUNC_6 ((char *)VAR_7, VAR_3);
 while (VAR_9 != ((void*)0) && VAR_14 < 3) {
  FUNC_1 (VAR_8[VAR_14], 0, VAR_0);
  FUNC_5 (VAR_8[VAR_14], VAR_9, VAR_0-1);
  VAR_9 = FUNC_6 (((void*)0), VAR_3);
  VAR_14 += 1;
 }

 if (VAR_14 > 0) {

  VAR_15 = FUNC_4 (VAR_5, VAR_8, VAR_14 - 1);

  if (VAR_15 >= 0) {

   if (VAR_4[VAR_15].numOperands == 0 && VAR_14 == 1) {
    VAR_10 = VAR_4[VAR_15].opcodeMask;
    VAR_11 = 2;







   } else if (VAR_4[VAR_15].numOperands == 1 && VAR_14 == 2) {

    if (FUNC_0 (VAR_5, VAR_8[1], VAR_4[VAR_15].operandTypes[0], &VAR_12) >= 0) {

     if (VAR_4[VAR_15].operandTypes[0] == VAR_1) {
      VAR_12 = VAR_12/2;
      VAR_10 = VAR_4[VAR_15].opcodeMask
      | FUNC_2((VAR_12 >> 16), VAR_4[VAR_15].operandMasks[0]);

      VAR_10 |= ((uint16_t)VAR_12) << 16;
      VAR_11 = 4;
     } else {


      if (VAR_4[VAR_15].operandTypes[1] == VAR_2) {
       VAR_10 = VAR_4[VAR_15].opcodeMask
       | FUNC_2(VAR_12, VAR_4[VAR_15].operandMasks[0])
       | FUNC_2(VAR_12, VAR_4[VAR_15].operandMasks[1]);
      } else {
       VAR_10 = VAR_4[VAR_15].opcodeMask
       | FUNC_2(VAR_12, VAR_4[VAR_15].operandMasks[0]);
      }

      VAR_11 = 2;
     }
    }

   } else if (VAR_4[VAR_15].numOperands == 2 && VAR_14 == 3) {
    if (FUNC_0(VAR_5, VAR_8[1], VAR_4[VAR_15].operandTypes[0], &VAR_12) >= 0 &&
       FUNC_0(VAR_5, VAR_8[2], VAR_4[VAR_15].operandTypes[1], &VAR_13) >= 0) {

     VAR_10 = VAR_4[VAR_15].opcodeMask
      | FUNC_2(VAR_12, VAR_4[VAR_15].operandMasks[0])
      | FUNC_2(VAR_13, VAR_4[VAR_15].operandMasks[1]);

     VAR_11 = 2;


     if (VAR_4[VAR_15].operandTypes[0] == VAR_1) {
      VAR_10 |= ((uint16_t)VAR_12) << 16;
      VAR_11 = 4;
     } else if (VAR_4[VAR_15].operandTypes[1] == VAR_1) {
      VAR_10 |= ((uint16_t)VAR_13) << 16;
      VAR_11 = 4;
     }
    }
   }
  }
 }


 if (VAR_11 > 0) {
  FUNC_3 (&VAR_6->buf, (const ut8*)&VAR_10, VAR_11);
 }
 return VAR_11;
}
