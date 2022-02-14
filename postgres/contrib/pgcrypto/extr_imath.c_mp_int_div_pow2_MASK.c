
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_small ;
typedef int mp_size ;
typedef scalar_t__ mp_result ;
typedef int * mp_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

mp_result
FUNC_4(mp_int VAR_1, mp_small VAR_2, mp_int VAR_3, mp_int VAR_4)
{
 FUNC_0(VAR_1 != ((void*)0) && VAR_2 >= 0 && VAR_3 != VAR_4);

 mp_result VAR_5 = VAR_0;

 if (VAR_3 != ((void*)0) && (VAR_5 = FUNC_1(VAR_1, VAR_3)) == VAR_0)
 {
  FUNC_2(VAR_3, (mp_size) VAR_2);
 }

 if (VAR_5 == VAR_0 && VAR_4 != ((void*)0) && (VAR_5 = FUNC_1(VAR_1, VAR_4)) == VAR_0)
 {
  FUNC_3(VAR_4, (mp_size) VAR_2);
 }

 return VAR_5;
}
