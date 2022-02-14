
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int nNumUsed; scalar_t__ nTableMask; } ;
typedef TYPE_1__ HashTable ;
typedef int Bucket ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(HashTable *VAR_3)
{
 if ((FUNC_1(VAR_3) & VAR_1) || VAR_3->nNumUsed == 0) {
  return;
 }

 if (!(FUNC_1(VAR_3) & VAR_0) && VAR_3->nNumUsed > VAR_2 && VAR_3->nNumUsed < (uint32_t)(-(int32_t)VAR_3->nTableMask) / 4) {

  uint32_t VAR_4;

  VAR_4 = (uint32_t)(-(int32_t)VAR_3->nTableMask);
  while (VAR_4 >> 2 > VAR_3->nNumUsed) {
   VAR_4 >>= 1;
  }
  FUNC_0(VAR_4 * sizeof(uint32_t) + VAR_3->nNumUsed * sizeof(Bucket));
 } else {
  FUNC_0(FUNC_2(VAR_3));
 }
}
