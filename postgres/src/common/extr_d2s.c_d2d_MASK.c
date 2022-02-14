
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int int32 ;
struct TYPE_3__ {int exponent; int mantissa; } ;
typedef TYPE_1__ floating_decimal_64 ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int const FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int const,int*,int*,int const) ;
 int FUNC_7 (int const,int const) ;
 int FUNC_8 (int const,int const) ;
 int FUNC_9 (int const) ;

__attribute__((used)) static inline floating_decimal_64
FUNC_10(const uint64 VAR_6, const uint32 VAR_7)
{
 int32 VAR_8;
 uint64 VAR_9;

 if (VAR_7 == 0)
 {

  VAR_8 = 1 - VAR_0 - VAR_1 - 2;
  VAR_9 = VAR_6;
 }
 else
 {
  VAR_8 = VAR_7 - VAR_0 - VAR_1 - 2;
  VAR_9 = (FUNC_0(1) << VAR_1) | VAR_6;
 }





 const bool VAR_10 = 0;



 const uint64 VAR_11 = 4 * VAR_9;


 const uint32 VAR_12 = VAR_6 != 0 || VAR_7 <= 1;






 uint64 VAR_13,
    VAR_14,
    VAR_15;
 int32 VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;

 if (VAR_8 >= 0)
 {






  const uint32 VAR_19 = FUNC_4(VAR_8) - (VAR_8 > 3);
  const int32 VAR_20 = VAR_3 + FUNC_9(VAR_19) - 1;
  const int32 VAR_21 = -VAR_8 + VAR_19 + VAR_20;

  VAR_16 = VAR_19;

  VAR_13 = FUNC_6(VAR_9, VAR_4[VAR_19], VAR_21, &VAR_14, &VAR_15, VAR_12);

  if (VAR_19 <= 21)
  {







   const uint32 VAR_22 = (uint32) (VAR_11 - 5 * FUNC_3(VAR_11));

   if (VAR_22 == 0)
   {
    VAR_18 = FUNC_8(VAR_11, VAR_19);
   }
   else if (VAR_10)
   {






    VAR_17 = FUNC_8(VAR_11 - 1 - VAR_12, VAR_19);
   }
   else
   {

    VAR_14 -= FUNC_8(VAR_11 + 2, VAR_19);
   }
  }
 }
 else
 {



  const uint32 VAR_23 = FUNC_5(-VAR_8) - (-VAR_8 > 1);
  const int32 VAR_24 = -VAR_8 - VAR_23;
  const int32 VAR_25 = FUNC_9(VAR_24) - VAR_2;
  const int32 VAR_26 = VAR_23 - VAR_25;

  VAR_16 = VAR_23 + VAR_8;

  VAR_13 = FUNC_6(VAR_9, VAR_5[VAR_24], VAR_26, &VAR_14, &VAR_15, VAR_12);

  if (VAR_23 <= 1)
  {





   VAR_18 = 1;
   if (VAR_10)
   {




    VAR_17 = VAR_12 == 1;
   }
   else
   {



    --VAR_14;
   }
  }
  else if (VAR_23 < 63)
  {
   VAR_18 = FUNC_7(VAR_11, VAR_23 - 1);
  }
 }





 uint32 VAR_27 = 0;
 uint8 VAR_28 = 0;
 uint64 VAR_29;


 if (VAR_17 || VAR_18)
 {

  for (;;)
  {
   const uint64 VAR_30 = FUNC_1(VAR_14);
   const uint64 VAR_31 = FUNC_1(VAR_15);

   if (VAR_30 <= VAR_31)
    break;

   const uint32 VAR_32 = (uint32) (VAR_15 - 10 * VAR_31);
   const uint64 VAR_33 = FUNC_1(VAR_13);
   const uint32 VAR_34 = (uint32) (VAR_13 - 10 * VAR_33);

   VAR_17 &= VAR_32 == 0;
   VAR_18 &= VAR_28 == 0;
   VAR_28 = (uint8) VAR_34;
   VAR_13 = VAR_33;
   VAR_14 = VAR_30;
   VAR_15 = VAR_31;
   ++VAR_27;
  }

  if (VAR_17)
  {
   for (;;)
   {
    const uint64 VAR_35 = FUNC_1(VAR_15);
    const uint32 VAR_36 = (uint32) (VAR_15 - 10 * VAR_35);

    if (VAR_36 != 0)
     break;

    const uint64 VAR_37 = FUNC_1(VAR_14);
    const uint64 VAR_38 = FUNC_1(VAR_13);
    const uint32 VAR_39 = (uint32) (VAR_13 - 10 * VAR_38);

    VAR_18 &= VAR_28 == 0;
    VAR_28 = (uint8) VAR_39;
    VAR_13 = VAR_38;
    VAR_14 = VAR_37;
    VAR_15 = VAR_35;
    ++VAR_27;
   }
  }

  if (VAR_18 && VAR_28 == 5 && VAR_13 % 2 == 0)
  {

   VAR_28 = 4;
  }





  VAR_29 = VAR_13 + ((VAR_13 == VAR_15 && (!VAR_10 || !VAR_17)) || VAR_28 >= 5);
 }
 else
 {




  bool VAR_40 = 0;
  const uint64 VAR_41 = FUNC_2(VAR_14);
  const uint64 VAR_42 = FUNC_2(VAR_15);

  if (VAR_41 > VAR_42)
  {

   const uint64 VAR_43 = FUNC_2(VAR_13);
   const uint32 VAR_44 = (uint32) (VAR_13 - 100 * VAR_43);

   VAR_40 = VAR_44 >= 50;
   VAR_13 = VAR_43;
   VAR_14 = VAR_41;
   VAR_15 = VAR_42;
   VAR_27 += 2;
  }
  for (;;)
  {
   const uint64 VAR_45 = FUNC_1(VAR_14);
   const uint64 VAR_46 = FUNC_1(VAR_15);

   if (VAR_45 <= VAR_46)
    break;

   const uint64 VAR_47 = FUNC_1(VAR_13);
   const uint32 VAR_48 = (uint32) (VAR_13 - 10 * VAR_47);

   VAR_40 = VAR_48 >= 5;
   VAR_13 = VAR_47;
   VAR_14 = VAR_45;
   VAR_15 = VAR_46;
   ++VAR_27;
  }





  VAR_29 = VAR_13 + (VAR_13 == VAR_15 || VAR_40);
 }

 const int32 VAR_49 = VAR_16 + VAR_27;

 floating_decimal_64 VAR_50;

 VAR_50.exponent = VAR_49;
 VAR_50.mantissa = VAR_29;
 return VAR_50;
}
