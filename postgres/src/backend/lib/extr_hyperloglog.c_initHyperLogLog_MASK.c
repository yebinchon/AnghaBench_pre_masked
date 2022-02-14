
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int registerWidth; int nRegisters; int arrSize; double alphaMM; int hashesArr; } ;
typedef TYPE_1__ hyperLogLogState ;
typedef int Size ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;

void
FUNC_2(hyperLogLogState *VAR_1, uint8 VAR_2)
{
 double VAR_3;

 if (VAR_2 < 4 || VAR_2 > 16)
  FUNC_0(VAR_0, "bit width must be between 4 and 16 inclusive");

 VAR_1->registerWidth = VAR_2;
 VAR_1->nRegisters = (Size) 1 << VAR_2;
 VAR_1->arrSize = sizeof(uint8) * VAR_1->nRegisters + 1;





 VAR_1->hashesArr = FUNC_1(VAR_1->arrSize);







 switch (VAR_1->nRegisters)
 {
  case 16:
   VAR_3 = 0.673;
   break;
  case 32:
   VAR_3 = 0.697;
   break;
  case 64:
   VAR_3 = 0.709;
   break;
  default:
   VAR_3 = 0.7213 / (1.0 + 1.079 / VAR_1->nRegisters);
 }





 VAR_1->alphaMM = VAR_3 * VAR_1->nRegisters * VAR_1->nRegisters;
}
