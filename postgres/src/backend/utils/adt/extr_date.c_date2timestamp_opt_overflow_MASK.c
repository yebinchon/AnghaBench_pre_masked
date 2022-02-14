
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Timestamp ;
typedef int DateADT ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

Timestamp
FUNC_7(DateADT VAR_5, int *VAR_6)
{
 Timestamp VAR_7;

 if (FUNC_0(VAR_5))
  FUNC_2(VAR_7);
 else if (FUNC_1(VAR_5))
  FUNC_3(VAR_7);
 else
 {





  if (VAR_5 >= (VAR_3 - VAR_2))
  {
   if (VAR_6)
   {
    *VAR_6 = 1;
    return (Timestamp) 0;
   }
   else
   {
    FUNC_4(VAR_1,
      (FUNC_5(VAR_0),
       FUNC_6("date out of range for timestamp")));
   }
  }


  VAR_7 = VAR_5 * VAR_4;
 }

 return VAR_7;
}
