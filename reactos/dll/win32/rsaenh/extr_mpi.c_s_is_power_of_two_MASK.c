
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_digit ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(mp_digit VAR_3, int *VAR_4)
{
   int VAR_5;

   for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
      if (VAR_3 == (((mp_digit)1)<<VAR_5)) {
         *VAR_4 = VAR_5;
         return VAR_2;
      }
   }
   return VAR_1;
}
