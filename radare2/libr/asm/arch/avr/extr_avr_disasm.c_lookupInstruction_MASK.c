
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__* operandTypes; scalar_t__* operandMasks; scalar_t__ opcodeMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(uint16_t VAR_4, int VAR_5) {
 uint16_t VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_8 = VAR_5; VAR_8 < VAR_1; VAR_8++) {
  VAR_6 = VAR_4;


  VAR_9 = 1;





  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_3[VAR_8].operandTypes[VAR_10] == VAR_2) {

    VAR_7 = FUNC_0(VAR_4, VAR_3[VAR_8].operandMasks[0]);

    for (VAR_11 = 1; VAR_11 < VAR_0; VAR_11++) {
     if (FUNC_0(VAR_4, VAR_3[VAR_8].operandMasks[VAR_10]) !=
       VAR_7)
      VAR_9 = 0;
    }
   }
   VAR_6 &= ~(VAR_3[VAR_8].operandMasks[VAR_10]);
  }



  if (VAR_9 == 0)
   continue;

  if (VAR_6 == VAR_3[VAR_8].opcodeMask)
   break;
 }




 return VAR_8;
}
