
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef int BulkInsertState ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12(Relation VAR_5, BulkInsertState VAR_6)
{
 BlockNumber VAR_7,
    VAR_8 = VAR_1;
 int VAR_9;
 int VAR_10;


 VAR_10 = FUNC_8(VAR_5);
 if (VAR_10 <= 0)
  return;







 VAR_9 = FUNC_4(512, VAR_10 * 20);

 do
 {
  Buffer VAR_11;
  Page VAR_12;
  Size VAR_13;







  VAR_11 = FUNC_6(VAR_5, VAR_2, VAR_3, VAR_6);
  VAR_12 = FUNC_1(VAR_11);

  if (!FUNC_5(VAR_12))
   FUNC_11(VAR_0, "page %u of relation \"%s\" should be empty but is not",
     FUNC_0(VAR_11),
     FUNC_9(VAR_5));
  VAR_7 = FUNC_0(VAR_11);
  VAR_13 = FUNC_2(VAR_11) - VAR_4;

  FUNC_10(VAR_11);


  if (VAR_8 == VAR_1)
   VAR_8 = VAR_7;






  FUNC_7(VAR_5, VAR_7, VAR_13);
 }
 while (--VAR_9 > 0);







 FUNC_3(VAR_5, VAR_8, VAR_7 + 1);
}
