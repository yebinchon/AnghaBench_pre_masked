
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_5__ {int used; int alloc; int sign; scalar_t__* digits; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (int) ;

mp_result
FUNC_5(mp_int VAR_4, mp_size VAR_5)
{
 FUNC_1(VAR_4 != ((void*)0));

 if (VAR_5 == 0)
 {
  VAR_5 = VAR_3;
 }
 else if (VAR_5 == 1)
 {
  return FUNC_2(VAR_4);
 }
 else
 {
  VAR_5 = FUNC_4(VAR_5);
 }

 VAR_4->digits = FUNC_3(VAR_5);
 if (FUNC_0(VAR_4) == ((void*)0))
  return VAR_0;

 VAR_4->digits[0] = 0;
 VAR_4->used = 1;
 VAR_4->alloc = VAR_5;
 VAR_4->sign = VAR_2;

 return VAR_1;
}
