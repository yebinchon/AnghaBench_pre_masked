
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(void *VAR_4)
{
 unsigned long VAR_5;
 uint64_t VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  asm __volatile__(
   "tbegin.;"
   "beq    3f ;"
   "tabort. 0 ;"
   "tend.;"


   "3: ;"
   ::: "memory");


                VAR_6 = FUNC_0(VAR_0);
  if ((VAR_6 & VAR_1) == 0) {
   VAR_3 = 0;
   return;
  }
 }
 return;
}
