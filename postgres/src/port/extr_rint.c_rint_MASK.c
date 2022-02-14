
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;

double
FUNC_3(double VAR_0)
{
 double VAR_1;
 double VAR_2;


 if (FUNC_2(VAR_0))
  return VAR_0;

 if (VAR_0 <= 0.0)
 {

  if (VAR_0 == 0.0)
   return VAR_0;
  VAR_1 = VAR_0;
  VAR_0 += 0.5;





  if (VAR_0 >= 0.0)
   return -0.0;






  if (VAR_0 == VAR_1 + 1.0)
   return VAR_1;


  VAR_2 = FUNC_1(VAR_0);




  if (VAR_2 != VAR_0)
   return VAR_2;
  return FUNC_1(VAR_0 * 0.5) * 2.0;
 }
 else
 {




  VAR_1 = VAR_0;
  VAR_0 -= 0.5;
  if (VAR_0 <= 0.0)
   return 0.0;
  if (VAR_0 == VAR_1 - 1.0)
   return VAR_1;
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 != VAR_0)
   return VAR_2;
  return FUNC_0(VAR_0 * 0.5) * 2.0;
 }
}
