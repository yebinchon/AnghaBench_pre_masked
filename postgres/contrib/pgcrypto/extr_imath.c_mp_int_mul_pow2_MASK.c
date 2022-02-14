
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_small ;
typedef int mp_size ;
typedef scalar_t__ mp_result ;
typedef int * mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;

mp_result
FUNC_3(mp_int VAR_2, mp_small VAR_3, mp_int VAR_4)
{
 FUNC_0(VAR_2 != ((void*)0) && VAR_4 != ((void*)0) && VAR_3 >= 0);

 mp_result VAR_5 = FUNC_1(VAR_2, VAR_4);

 if (VAR_5 != VAR_1)
  return VAR_5;

 if (FUNC_2(VAR_4, (mp_size) VAR_3))
 {
  return VAR_1;
 }
 else
 {
  return VAR_0;
 }
}
