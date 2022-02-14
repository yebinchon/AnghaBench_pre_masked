
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int mp_result ;
typedef int mp_int ;
typedef int mp_digit ;
struct TYPE_10__ {int alloc; int digits; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (TYPE_1__*,int ,int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static mp_result
FUNC_15(mp_int VAR_4, mp_int VAR_5, mp_int VAR_6, mp_int VAR_7, mp_int VAR_8)
{
 mp_digit VAR_9 = FUNC_5(VAR_7);
 mp_digit *VAR_10 = FUNC_3(VAR_5);
 mp_digit *VAR_11 = VAR_10 + FUNC_5(VAR_5) - 1;

 FUNC_1(3);
 FUNC_6(FUNC_2(FUNC_7(0), 4 * VAR_9));
 FUNC_6(FUNC_2(FUNC_7(1), 4 * VAR_9));
 FUNC_6(FUNC_2(FUNC_7(2), 4 * VAR_9));
 FUNC_10(FUNC_7(0)->digits, FUNC_7(0)->alloc);
 FUNC_10(FUNC_7(1)->digits, FUNC_7(1)->alloc);
 FUNC_10(FUNC_7(2)->digits, FUNC_7(2)->alloc);

 (void) FUNC_13(VAR_8, 1);


 while (VAR_10 < VAR_11)
 {
  mp_digit VAR_12 = *VAR_10;

  for (int VAR_13 = VAR_0; VAR_13 > 0; --VAR_13, VAR_12 >>= 1)
  {
   if (VAR_12 & 1)
   {

    FUNC_8(VAR_8, VAR_4, FUNC_7(0));
    if (!FUNC_14(FUNC_7(0), VAR_6, VAR_7, FUNC_7(1), FUNC_7(2)))
    {
     FUNC_6(VAR_1);
    }
    FUNC_12(FUNC_7(0), VAR_8);
   }

   FUNC_9(VAR_4, FUNC_7(0));
   FUNC_11(FUNC_4(FUNC_7(0)) == VAR_3);
   if (!FUNC_14(FUNC_7(0), VAR_6, VAR_7, FUNC_7(1), FUNC_7(2)))
   {
    FUNC_6(VAR_1);
   }
   FUNC_11(FUNC_4(FUNC_7(0)) == VAR_3);
   FUNC_12(FUNC_7(0), VAR_4);
  }

  ++VAR_10;
 }


 mp_digit VAR_14 = *VAR_11;

 for (;;)
 {
  if (VAR_14 & 1)
  {
   FUNC_8(VAR_8, VAR_4, FUNC_7(0));
   if (!FUNC_14(FUNC_7(0), VAR_6, VAR_7, FUNC_7(1), FUNC_7(2)))
   {
    FUNC_6(VAR_1);
   }
   FUNC_12(FUNC_7(0), VAR_8);
  }

  VAR_14 >>= 1;
  if (!VAR_14)
   break;

  FUNC_9(VAR_4, FUNC_7(0));
  if (!FUNC_14(FUNC_7(0), VAR_6, VAR_7, FUNC_7(1), FUNC_7(2)))
  {
   FUNC_6(VAR_1);
  }
  (void) FUNC_12(FUNC_7(0), VAR_4);
 }

 FUNC_0();
 return VAR_2;
}
