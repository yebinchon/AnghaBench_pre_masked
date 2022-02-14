
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

int32
FUNC_2(Oid VAR_1, int32 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 int32 VAR_4;




 if (VAR_3 > 0)
  return VAR_3;





 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 > 0)
 {





  if (VAR_1 == VAR_0)
   return VAR_4;
  if (VAR_4 <= 32)
   return VAR_4;
  if (VAR_4 < 1000)
   return 32 + (VAR_4 - 32) / 2;






  return 32 + (1000 - 32) / 2;
 }




 return 32;
}
