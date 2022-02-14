
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_4__ {scalar_t__* digits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

mp_result
FUNC_2(mp_int VAR_1)
{
 FUNC_1(VAR_1 != ((void*)0));

 mp_size VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == 1 && VAR_1->digits[0] == 0)
  return 1;

 --VAR_2;
 mp_size VAR_3 = VAR_2 * VAR_0;
 mp_digit VAR_4 = VAR_1->digits[VAR_2];

 while (VAR_4 != 0)
 {
  VAR_4 >>= 1;
  ++VAR_3;
 }

 return VAR_3;
}
