
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_8__ {int alloc; int used; int sign; int * digits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int) ;

mp_result
FUNC_11(mp_int VAR_4, mp_int VAR_5)
{
 FUNC_5(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));


 mp_size VAR_6 = (mp_size) 4 * ((FUNC_3(VAR_4) + 1) / 2);
 mp_size VAR_7 = 0;
 mp_digit *VAR_8;

 if (VAR_4 == VAR_5)
 {
  VAR_7 = FUNC_10(VAR_6);
  VAR_7 = FUNC_1(VAR_7, VAR_3);

  if ((VAR_8 = FUNC_6(VAR_7)) == ((void*)0))
   return VAR_0;
 }
 else
 {
  if (!FUNC_9(VAR_5, VAR_6))
   return VAR_0;

  VAR_8 = FUNC_2(VAR_5);
 }
 FUNC_4(VAR_8, VAR_6);

 FUNC_8(FUNC_2(VAR_4), VAR_8, FUNC_3(VAR_4));





 if (VAR_8 != FUNC_2(VAR_5))
 {
  if ((void *) FUNC_2(VAR_5) != (void *) VAR_5)
   FUNC_7(FUNC_2(VAR_5));
  VAR_5->digits = VAR_8;
  VAR_5->alloc = VAR_7;
 }

 VAR_5->used = VAR_6;
 FUNC_0(VAR_5);
 VAR_5->sign = VAR_2;

 return VAR_1;
}
