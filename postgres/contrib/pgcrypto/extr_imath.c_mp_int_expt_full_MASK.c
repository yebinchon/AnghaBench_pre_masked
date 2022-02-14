
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_11__ {int* digits; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ,int ) ;

mp_result
FUNC_11(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 FUNC_6(VAR_4 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));
 if (FUNC_2(VAR_5) == VAR_1)
  return VAR_3;

 FUNC_1(1);
 FUNC_4(FUNC_7(VAR_4, FUNC_5(0)));

 (void) FUNC_9(VAR_6, 1);
 for (unsigned VAR_7 = 0; VAR_7 < FUNC_3(VAR_5); ++VAR_7)
 {
  mp_digit VAR_8 = VAR_5->digits[VAR_7];

  for (unsigned VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  {
   if (VAR_8 & 1)
   {
    FUNC_4(FUNC_8(VAR_6, FUNC_5(0), VAR_6));
   }

   VAR_8 >>= 1;
   if (VAR_8 == 0 && VAR_7 + 1 == FUNC_3(VAR_5))
    break;
   FUNC_4(FUNC_10(FUNC_5(0), FUNC_5(0)));
  }
 }

 FUNC_0();
 return VAR_2;
}
