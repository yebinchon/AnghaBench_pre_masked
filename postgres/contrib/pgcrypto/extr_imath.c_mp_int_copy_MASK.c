
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_7__ {int sign; int used; } ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

mp_result
FUNC_5(mp_int VAR_2, mp_int VAR_3)
{
 FUNC_3(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 if (VAR_2 != VAR_3)
 {
  mp_size VAR_4 = FUNC_2(VAR_2);
  mp_digit *VAR_5,
       *VAR_6;

  if (!FUNC_4(VAR_3, VAR_4))
   return VAR_0;

  VAR_5 = FUNC_1(VAR_2);
  VAR_6 = FUNC_1(VAR_3);
  FUNC_0(VAR_5, VAR_6, VAR_4);

  VAR_3->used = VAR_4;
  VAR_3->sign = VAR_2->sign;
 }

 return VAR_1;
}
