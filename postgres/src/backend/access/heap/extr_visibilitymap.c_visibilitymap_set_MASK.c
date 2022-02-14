
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef size_t uint32 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {int rd_node; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 () ;
 int VAR_5 ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int ,int ,int ,int ,int) ;

void
FUNC_20(Relation VAR_6, BlockNumber VAR_7, Buffer VAR_8,
      XLogRecPtr VAR_9, Buffer VAR_10, TransactionId VAR_11,
      uint8 VAR_12)
{
 BlockNumber VAR_13 = FUNC_5(VAR_7);
 uint32 VAR_14 = FUNC_6(VAR_7);
 uint8 VAR_15 = FUNC_7(VAR_7);
 Page VAR_16;
 uint8 *VAR_17;





 FUNC_0(VAR_4 || FUNC_17(VAR_9));
 FUNC_0(VAR_4 || FUNC_3(VAR_8));
 FUNC_0(VAR_12 & VAR_5);


 if (FUNC_3(VAR_8) && FUNC_1(VAR_8) != VAR_7)
  FUNC_18(VAR_3, "wrong heap buffer passed to visibilitymap_set");


 if (!FUNC_3(VAR_10) || FUNC_1(VAR_10) != VAR_13)
  FUNC_18(VAR_3, "wrong VM buffer passed to visibilitymap_set");

 VAR_16 = FUNC_2(VAR_10);
 VAR_17 = (uint8 *) FUNC_10(VAR_16);
 FUNC_8(VAR_10, VAR_0);

 if (VAR_12 != (VAR_17[VAR_14] >> VAR_15 & VAR_5))
 {
  FUNC_15();

  VAR_17[VAR_14] |= (VAR_12 << VAR_15);
  FUNC_9(VAR_10);

  if (FUNC_14(VAR_6))
  {
   if (FUNC_17(VAR_9))
   {
    FUNC_0(!VAR_4);
    VAR_9 = FUNC_19(VAR_6->rd_node, VAR_8, VAR_10,
            VAR_11, VAR_12);





    if (FUNC_16())
    {
     Page VAR_18 = FUNC_2(VAR_8);


     FUNC_0(FUNC_11(VAR_18));
     FUNC_12(VAR_18, VAR_9);
    }
   }
   FUNC_12(VAR_16, VAR_9);
  }

  FUNC_4();
 }

 FUNC_8(VAR_10, VAR_1);
}
