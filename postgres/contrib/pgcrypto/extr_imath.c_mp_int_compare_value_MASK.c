
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_small ;
typedef scalar_t__ mp_sign ;
typedef int * mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;

int
FUNC_3(mp_int VAR_2, mp_small VAR_3)
{
 FUNC_1(VAR_2 != ((void*)0));

 mp_sign VAR_4 = (VAR_3 < 0) ? VAR_0 : VAR_1;

 if (VAR_4 == FUNC_0(VAR_2))
 {
  int VAR_5 = FUNC_2(VAR_2, VAR_3);

  return (VAR_4 == VAR_1) ? VAR_5 : -VAR_5;
 }
 else
 {
  return (VAR_3 < 0) ? 1 : -1;
 }
}
