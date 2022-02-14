
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_buf; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* BulkInsertState ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__,int ,TYPE_1__*) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,char*,scalar_t__,...) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_33 (int) ;
 int FUNC_34 (int ,scalar_t__,scalar_t__*) ;

Buffer
FUNC_35(Relation VAR_14, Size VAR_15,
        Buffer VAR_16, int VAR_17,
        BulkInsertState VAR_18,
        Buffer *VAR_19, Buffer *VAR_20)
{
 bool VAR_21 = !(VAR_17 & VAR_6);
 Buffer VAR_22 = VAR_8;
 Page VAR_23;
 Size VAR_24 = 0,
    VAR_25 = 0;
 BlockNumber VAR_26,
    VAR_27;
 bool VAR_28;

 VAR_15 = FUNC_10(VAR_15);


 FUNC_0(VAR_16 == VAR_8 || !VAR_18);




 if (VAR_15 > VAR_9)
  FUNC_30(VAR_3,
    (FUNC_31(VAR_2),
     FUNC_32("row is too big: size %zu, maximum size %zu",
      VAR_15, VAR_9)));


 VAR_25 = FUNC_24(VAR_14,
               VAR_5);

 if (VAR_16 != VAR_8)
  VAR_27 = FUNC_1(VAR_16);
 else
  VAR_27 = VAR_7;
 if (VAR_15 + VAR_25 > VAR_9)
 {

  VAR_26 = VAR_7;
  VAR_21 = 0;
 }
 else if (VAR_18 && VAR_18->current_buf != VAR_8)
  VAR_26 = FUNC_1(VAR_18->current_buf);
 else
  VAR_26 = FUNC_23(VAR_14);

 if (VAR_26 == VAR_7 && VAR_21)
 {




  VAR_26 = FUNC_6(VAR_14, VAR_15 + VAR_25);






  if (VAR_26 == VAR_7)
  {
   BlockNumber VAR_29 = FUNC_21(VAR_14);

   if (VAR_29 > 0)
    VAR_26 = VAR_29 - 1;
  }
 }

loop:
 while (VAR_26 != VAR_7)
 {
  if (VAR_16 == VAR_8)
  {

   VAR_22 = FUNC_18(VAR_14, VAR_26, VAR_12, VAR_18);
   if (FUNC_14(FUNC_2(VAR_22)))
    FUNC_34(VAR_14, VAR_26, VAR_19);
   FUNC_8(VAR_22, VAR_0);
  }
  else if (VAR_27 == VAR_26)
  {

   VAR_22 = VAR_16;
   if (FUNC_14(FUNC_2(VAR_22)))
    FUNC_34(VAR_14, VAR_26, VAR_19);
   FUNC_8(VAR_22, VAR_0);
  }
  else if (VAR_27 < VAR_26)
  {

   VAR_22 = FUNC_17(VAR_14, VAR_26);
   if (FUNC_14(FUNC_2(VAR_22)))
    FUNC_34(VAR_14, VAR_26, VAR_19);
   FUNC_8(VAR_16, VAR_0);
   FUNC_8(VAR_22, VAR_0);
  }
  else
  {

   VAR_22 = FUNC_17(VAR_14, VAR_26);
   if (FUNC_14(FUNC_2(VAR_22)))
    FUNC_34(VAR_14, VAR_26, VAR_19);
   FUNC_8(VAR_22, VAR_0);
   FUNC_8(VAR_16, VAR_0);
  }
  if (VAR_16 == VAR_8 || VAR_26 <= VAR_27)
   FUNC_7(VAR_14, VAR_22, VAR_16,
         VAR_26, VAR_27, VAR_19,
         VAR_20);
  else
   FUNC_7(VAR_14, VAR_16, VAR_22,
         VAR_27, VAR_26, VAR_20,
         VAR_19);





  VAR_23 = FUNC_2(VAR_22);







  if (FUNC_15(VAR_23))
  {
   FUNC_13(VAR_23, FUNC_3(VAR_22), 0);
   FUNC_11(VAR_22);
  }

  VAR_24 = FUNC_12(VAR_23);
  if (VAR_15 + VAR_25 <= VAR_24)
  {

   FUNC_25(VAR_14, VAR_26);
   return VAR_22;
  }







  FUNC_8(VAR_22, VAR_1);
  if (VAR_16 == VAR_8)
   FUNC_26(VAR_22);
  else if (VAR_27 != VAR_26)
  {
   FUNC_8(VAR_16, VAR_1);
   FUNC_26(VAR_22);
  }


  if (!VAR_21)
   break;





  VAR_26 = FUNC_19(VAR_14,
             VAR_26,
             VAR_24,
             VAR_15 + VAR_25);
 }
 VAR_28 = !FUNC_16(VAR_14);







 if (VAR_28)
 {
  if (!VAR_21)
   FUNC_9(VAR_14, VAR_4);
  else if (!FUNC_5(VAR_14, VAR_4))
  {

   FUNC_9(VAR_14, VAR_4);





   VAR_26 = FUNC_6(VAR_14, VAR_15 + VAR_25);





   if (VAR_26 != VAR_7)
   {
    FUNC_27(VAR_14, VAR_4);
    goto loop;
   }


   FUNC_20(VAR_14, VAR_18);
  }
 }
 VAR_22 = FUNC_18(VAR_14, VAR_11, VAR_13, VAR_18);






 VAR_23 = FUNC_2(VAR_22);

 if (!FUNC_15(VAR_23))
  FUNC_29(VAR_3, "page %u of relation \"%s\" should be empty but is not",
    FUNC_1(VAR_22),
    FUNC_22(VAR_14));

 FUNC_13(VAR_23, FUNC_3(VAR_22), 0);
 FUNC_11(VAR_22);





 if (VAR_28)
  FUNC_27(VAR_14, VAR_4);
 if (VAR_16 != VAR_8)
 {
  FUNC_0(VAR_16 != VAR_22);

  if (FUNC_33(!FUNC_4(VAR_16)))
  {
   FUNC_8(VAR_22, VAR_1);
   FUNC_8(VAR_16, VAR_0);
   FUNC_8(VAR_22, VAR_0);






   if (VAR_15 > FUNC_12(VAR_23))
   {
    FUNC_8(VAR_16, VAR_1);
    FUNC_28(VAR_22);

    goto loop;
   }
  }
 }

 if (VAR_15 > FUNC_12(VAR_23))
 {

  FUNC_29(VAR_10, "tuple is too big: size %zu", VAR_15);
 }
 FUNC_25(VAR_14, FUNC_1(VAR_22));

 return VAR_22;
}
