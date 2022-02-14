
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_sign ;
typedef int * mp_int ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(mp_int VAR_1, mp_int VAR_2)
{
 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 mp_sign VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == FUNC_0(VAR_2))
 {
  int VAR_4 = FUNC_2(VAR_1, VAR_2);





  if (VAR_3 == VAR_0)
  {
   return VAR_4;
  }
  else
  {
   return -VAR_4;
  }
 }
 else if (VAR_3 == VAR_0)
 {
  return 1;
 }
 else
 {
  return -1;
 }
}
