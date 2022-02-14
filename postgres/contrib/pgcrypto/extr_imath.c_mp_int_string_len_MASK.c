
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_size ;
typedef int mp_result ;
typedef int * mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__) ;

mp_result
FUNC_3(mp_int VAR_3, mp_size VAR_4)
{
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 >= VAR_1 && VAR_4 <= VAR_0);

 int VAR_5 = FUNC_2(VAR_3, VAR_4) + 1;


 if (FUNC_0(VAR_3) == VAR_2)
  VAR_5 += 1;

 return VAR_5;
}
