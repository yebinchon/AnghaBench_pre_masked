
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_usmall ;
typedef int mp_small ;
typedef scalar_t__ mp_sign ;
typedef int mp_result ;
typedef int * mp_int ;
typedef int mp_digit ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

mp_result
FUNC_5(mp_int VAR_7, mp_small *VAR_8)
{
 FUNC_3(VAR_7 != ((void*)0));


 mp_sign VAR_9 = FUNC_1(VAR_7);

 if ((VAR_9 == VAR_6 && FUNC_4(VAR_7, VAR_4) > 0) ||
  FUNC_4(VAR_7, VAR_5) < 0)
 {
  return VAR_3;
 }

 mp_usmall VAR_10 = FUNC_2(VAR_7);
 mp_digit *VAR_11 = FUNC_0(VAR_7) + VAR_10 - 1;
 mp_small VAR_12 = 0;

 while (VAR_10 > 0)
 {
  VAR_12 <<= VAR_0 / 2;
  VAR_12 = (VAR_12 << (VAR_0 / 2)) | *VAR_11--;
  --VAR_10;
 }

 if (VAR_8)
  *VAR_8 = (mp_small) ((VAR_9 == VAR_1) ? -VAR_12 : VAR_12);

 return VAR_2;
}
