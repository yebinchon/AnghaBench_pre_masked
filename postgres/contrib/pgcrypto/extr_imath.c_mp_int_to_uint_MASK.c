
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_usmall ;
typedef scalar_t__ mp_size ;
typedef int mp_result ;
typedef int * mp_int ;
typedef int mp_digit ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

mp_result
FUNC_5(mp_int VAR_5, mp_usmall *VAR_6)
{
 FUNC_3(VAR_5 != ((void*)0));


 mp_size VAR_7 = FUNC_1(VAR_5);

 if (VAR_7 == VAR_1 || FUNC_4(VAR_5, VAR_4) > 0)
 {
  return VAR_3;
 }

 mp_size VAR_8 = FUNC_2(VAR_5);
 mp_digit *VAR_9 = FUNC_0(VAR_5) + VAR_8 - 1;
 mp_usmall VAR_10 = 0;

 while (VAR_8 > 0)
 {
  VAR_10 <<= VAR_0 / 2;
  VAR_10 = (VAR_10 << (VAR_0 / 2)) | *VAR_9--;
  --VAR_8;
 }

 if (VAR_6)
  *VAR_6 = VAR_10;

 return VAR_2;
}
