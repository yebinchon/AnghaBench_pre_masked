
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int,int *) ;

void
FUNC_15(Relation VAR_6, Buffer VAR_7)
{
 Page VAR_8 = FUNC_1(VAR_7);
 Size VAR_9;
 TransactionId VAR_10;






 if (FUNC_9())
  return;
 if (FUNC_3(VAR_6) ||
  FUNC_11(VAR_6))
  VAR_10 = VAR_5;
 else
  VAR_10 =
   FUNC_13(VAR_4,
            VAR_6);

 FUNC_0(FUNC_12(VAR_10));







 if (!FUNC_8(VAR_8, VAR_10))
  return;
 VAR_9 = FUNC_10(VAR_6,
            VAR_2);
 VAR_9 = FUNC_5(VAR_9, VAR_0 / 10);

 if (FUNC_7(VAR_8) || FUNC_6(VAR_8) < VAR_9)
 {

  if (!FUNC_2(VAR_7))
   return;







  if (FUNC_7(VAR_8) || FUNC_6(VAR_8) < VAR_9)
  {
   TransactionId VAR_11 = VAR_3;



   (void) FUNC_14(VAR_6, VAR_7, VAR_10, 1, &VAR_11);
  }


  FUNC_4(VAR_7, VAR_1);
 }
}
