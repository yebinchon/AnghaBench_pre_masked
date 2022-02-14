
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NumericDigit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int,int,int const*,int,int) ;

__attribute__((used)) static int
FUNC_1(const NumericDigit *VAR_2, int VAR_3,
      int VAR_4, int VAR_5,
      const NumericDigit *VAR_6, int VAR_7,
      int VAR_8, int VAR_9)
{
 if (VAR_3 == 0)
 {
  if (VAR_7 == 0)
   return 0;
  if (VAR_9 == VAR_0)
   return 1;
  return -1;
 }
 if (VAR_7 == 0)
 {
  if (VAR_5 == VAR_1)
   return 1;
  return -1;
 }

 if (VAR_5 == VAR_1)
 {
  if (VAR_9 == VAR_0)
   return 1;
  return FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_6, VAR_7, VAR_8);
 }

 if (VAR_9 == VAR_1)
  return -1;

 return FUNC_0(VAR_6, VAR_7, VAR_8,
        VAR_2, VAR_3, VAR_4);
}
