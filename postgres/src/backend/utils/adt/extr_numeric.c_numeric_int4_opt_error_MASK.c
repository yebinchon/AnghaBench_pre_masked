
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int NumericVar ;
typedef int Numeric ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;

int32
FUNC_6(Numeric VAR_3, bool *VAR_4)
{
 NumericVar VAR_5;
 int32 VAR_6;

 if (VAR_4)
  *VAR_4 = 0;


 if (FUNC_0(VAR_3))
 {
  if (VAR_4)
  {
   *VAR_4 = 1;
   return 0;
  }
  else
  {
   FUNC_1(VAR_2,
     (FUNC_2(VAR_0),
      FUNC_3("cannot convert NaN to integer")));
  }
 }


 FUNC_4(VAR_3, &VAR_5);

 if (!FUNC_5(&VAR_5, &VAR_6))
 {
  if (VAR_4)
  {
   *VAR_4 = 1;
   return 0;
  }
  else
  {
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("integer out of range")));
  }
 }

 return VAR_6;
}
