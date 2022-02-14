
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__*,int) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,scalar_t__*,int,int ) ;
 int FUNC_16 (int ,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_3, Page VAR_4, Buffer VAR_5, Relation VAR_6)
{
 OffsetNumber VAR_7[VAR_2];
 int VAR_8 = 0;
 OffsetNumber VAR_9,
    VAR_10;
 TransactionId VAR_11 = VAR_1;

 FUNC_0(FUNC_3(VAR_4));





 VAR_10 = FUNC_8(VAR_4);
 for (VAR_9 = VAR_0;
   VAR_9 <= VAR_10;
   VAR_9 = FUNC_6(VAR_9))
 {
  ItemId VAR_12 = FUNC_7(VAR_4, VAR_9);

  if (FUNC_4(VAR_12))
   VAR_7[VAR_8++] = VAR_9;
 }

 if (FUNC_13() && FUNC_11(VAR_3))
  VAR_11 =
   FUNC_16(VAR_3, VAR_6, VAR_5,
             VAR_7, VAR_8);

 if (VAR_8 > 0)
 {
  FUNC_12();

  FUNC_9(VAR_4, VAR_7, VAR_8);
  FUNC_2(VAR_4);

  FUNC_5(VAR_5);


  if (FUNC_11(VAR_3))
  {
   XLogRecPtr VAR_13;

   VAR_13 = FUNC_15(VAR_5,
         VAR_7, VAR_8,
         VAR_11);

   FUNC_10(VAR_4, VAR_13);
  }
  else
   FUNC_10(VAR_4, FUNC_14(VAR_3));

  FUNC_1();
 }







}
