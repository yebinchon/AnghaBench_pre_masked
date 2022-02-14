
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_sign ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_12__ {int alloc; int used; int sign; int * digits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,int,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (int) ;

mp_result
FUNC_14(mp_int VAR_5, mp_int VAR_6, mp_int VAR_7)
{
 FUNC_6(VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && VAR_7 != ((void*)0));


 if (FUNC_7(VAR_5) == 0 || FUNC_7(VAR_6) == 0)
 {
  FUNC_8(VAR_7);
  return VAR_2;
 }


 mp_sign VAR_8 = (FUNC_3(VAR_5) == FUNC_3(VAR_6)) ? VAR_3 : VAR_1;





 mp_size VAR_9 = FUNC_4(VAR_5);
 mp_size VAR_10 = FUNC_4(VAR_6);
 mp_size VAR_11 = FUNC_1(VAR_9, VAR_10);

 VAR_11 = 4 * ((VAR_11 + 1) / 2);

 mp_digit *VAR_12;
 mp_size VAR_13 = 0;

 if (VAR_7 == VAR_5 || VAR_7 == VAR_6)
 {
  VAR_13 = FUNC_1(FUNC_13(VAR_11), VAR_4);

  if ((VAR_12 = FUNC_9(VAR_13)) == ((void*)0))
   return VAR_0;
 }
 else
 {
  if (!FUNC_12(VAR_7, VAR_11))
   return VAR_0;

  VAR_12 = FUNC_2(VAR_7);
 }
 FUNC_5(VAR_12, VAR_11);

 if (!FUNC_11(FUNC_2(VAR_5), FUNC_2(VAR_6), VAR_12, VAR_9, VAR_10))
  return VAR_0;





 if (VAR_12 != FUNC_2(VAR_7))
 {
  if ((void *) FUNC_2(VAR_7) != (void *) VAR_7)
   FUNC_10(FUNC_2(VAR_7));
  VAR_7->digits = VAR_12;
  VAR_7->alloc = VAR_13;
 }

 VAR_7->used = VAR_11;
 FUNC_0(VAR_7);
 VAR_7->sign = VAR_8;

 return VAR_2;
}
