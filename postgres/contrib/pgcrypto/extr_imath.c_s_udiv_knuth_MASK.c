
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int* digits; int used; int alloc; void* sign; } ;
typedef TYPE_1__ mpz_t ;
typedef int mp_word ;
typedef int mp_size ;
typedef int mp_result ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int* FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 void* VAR_4 ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (int*,int,int*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_19 (int*,int*,int*,int,int) ;

__attribute__((used)) static mp_result
FUNC_20(mp_int VAR_5, mp_int VAR_6)
{

 VAR_5->sign = VAR_4;
 VAR_6->sign = VAR_4;


 if (FUNC_6(VAR_6) == 1)
 {
  mp_digit VAR_7,
     VAR_8;

  VAR_7 = VAR_6->digits[0];
  VAR_8 = FUNC_14(VAR_5, VAR_7);
  FUNC_12(VAR_6, VAR_8);
  return VAR_3;
 }
 mp_size VAR_9 = FUNC_6(VAR_6);
 mp_size VAR_10 = FUNC_6(VAR_5) - VAR_9;

 FUNC_10(VAR_9 > 1);
 int VAR_11 = FUNC_15(VAR_5, VAR_6);
 if (VAR_11 == 0 || FUNC_6(VAR_5) != VAR_10 + VAR_9 + 1)
 {
  if (!FUNC_16(VAR_5, VAR_10 + VAR_9 + 1))
   return VAR_2;
  VAR_5->digits[VAR_10 + VAR_9] = 0;
  VAR_5->used = VAR_10 + VAR_9 + 1;
 }
 if (!FUNC_16(VAR_6, VAR_9 + 1))
  return VAR_2;
 VAR_6->digits[VAR_9] = 0;






 FUNC_2(2);
 FUNC_7(FUNC_3(FUNC_8(0), VAR_10 + 1));
 FUNC_7(FUNC_3(FUNC_8(1), VAR_9 + 1));


 int VAR_12 = VAR_10;
 mpz_t VAR_13;

 VAR_13.digits = FUNC_5(VAR_5) + VAR_12;
 VAR_13.used = VAR_9 + 1;
 VAR_13.sign = VAR_4;
 VAR_13.alloc = FUNC_4(VAR_5);
 FUNC_9(FUNC_8(1)->digits, FUNC_8(1)->alloc);


 for (; VAR_12 >= 0; VAR_12--)
 {


  mp_word VAR_14,
     VAR_15;

  VAR_14 = VAR_13.digits[VAR_9];
  VAR_14 <<= VAR_0 / 2;
  VAR_14 <<= VAR_0 / 2;
  VAR_14 |= VAR_13.digits[VAR_9 - 1];

  VAR_15 = VAR_14 / VAR_6->digits[VAR_9 - 1];







  if (VAR_15 > VAR_1)
   VAR_15 = VAR_1;
  FUNC_13(FUNC_5(VAR_6), (mp_digit) VAR_15, FUNC_8(1)->digits, VAR_9 + 1);
  FUNC_8(1)->used = VAR_9 + 1;
  FUNC_0(FUNC_8(1));


  FUNC_0(&VAR_13);
  if (FUNC_18(FUNC_8(1), &VAR_13) > 0)
  {
   VAR_15 -= 1;
   FUNC_13(FUNC_5(VAR_6), (mp_digit) VAR_15, FUNC_8(1)->digits, VAR_9 + 1);
   FUNC_8(1)->used = VAR_9 + 1;
   FUNC_0(FUNC_8(1));
   if (FUNC_18(FUNC_8(1), &VAR_13) > 0)
   {
    FUNC_10(VAR_15 > 0);
    VAR_15 -= 1;
    FUNC_13(FUNC_5(VAR_6), (mp_digit) VAR_15, FUNC_8(1)->digits, VAR_9 + 1);
    FUNC_8(1)->used = VAR_9 + 1;
    FUNC_0(FUNC_8(1));
   }
   FUNC_10(FUNC_18(FUNC_8(1), &VAR_13) <= 0 && "The mathematics failed us.");
  }





  VAR_13.used = VAR_9 + 1;







  FUNC_19(VAR_13.digits, FUNC_8(1)->digits, VAR_13.digits, VAR_13.used, FUNC_8(1)->used);
  FUNC_8(0)->digits[VAR_12] = (mp_digit) VAR_15;







  VAR_13.digits--;
  FUNC_9(FUNC_8(1)->digits, FUNC_8(1)->alloc);
 }


 FUNC_8(0)->used = VAR_10 + 1;
 FUNC_0(FUNC_8(0));


 FUNC_0(VAR_5);

 if (VAR_11 != 0)
  FUNC_17(VAR_5, VAR_11);

 FUNC_11(VAR_5, VAR_6);
 FUNC_11(FUNC_8(0), VAR_5);

 FUNC_1();
 return VAR_3;
}
