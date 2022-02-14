
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
 uint64_t VAR_7;
 int VAR_8;







 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = VAR_3 + VAR_8 * VAR_2;
  *(uint64_t *)VAR_7 = FUNC_1(VAR_5);
 }

 while (1) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_7 = VAR_3;
   VAR_7 += (FUNC_1(VAR_6[VAR_8]) % VAR_1)
    * VAR_2;
   VAR_7 &= ~(VAR_4 - 1);
   *(uint64_t *)VAR_7 = FUNC_1(VAR_5);
  }


  FUNC_0(1);
 }
}
