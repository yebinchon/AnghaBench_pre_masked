
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_3__ {int num_dead_tuples; int latestRemovedXid; int * dead_tuples; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_1__ LVRelStats ;
typedef int ItemId ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (int ,int ,int *,int*) ;
 int FUNC_16 (int ,int ,int *,int ,int *,int ,int *,int,int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (int ,scalar_t__,int *) ;
 int FUNC_19 (int ,scalar_t__,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_20(Relation VAR_5, BlockNumber VAR_6, Buffer VAR_7,
     int VAR_8, LVRelStats *VAR_9, Buffer *VAR_10)
{
 Page VAR_11 = FUNC_1(VAR_7);
 OffsetNumber VAR_12[VAR_1];
 int VAR_13 = 0;
 TransactionId VAR_14;
 bool VAR_15;

 FUNC_17(VAR_2, VAR_6);

 FUNC_14();

 for (; VAR_8 < VAR_9->num_dead_tuples; VAR_8++)
 {
  BlockNumber VAR_16;
  OffsetNumber VAR_17;
  ItemId VAR_18;

  VAR_16 = FUNC_5(&VAR_9->dead_tuples[VAR_8]);
  if (VAR_16 != VAR_6)
   break;
  VAR_17 = FUNC_6(&VAR_9->dead_tuples[VAR_8]);
  VAR_18 = FUNC_8(VAR_11, VAR_17);
  FUNC_4(VAR_18);
  VAR_12[VAR_13++] = VAR_17;
 }

 FUNC_10(VAR_11);




 FUNC_7(VAR_7);


 if (FUNC_13(VAR_5))
 {
  XLogRecPtr VAR_19;

  VAR_19 = FUNC_16(VAR_5, VAR_7,
        ((void*)0), 0, ((void*)0), 0,
        VAR_12, VAR_13,
        VAR_9->latestRemovedXid);
  FUNC_12(VAR_11, VAR_19);
 }







 FUNC_3();







 if (FUNC_15(VAR_5, VAR_7, &VAR_14,
         &VAR_15))
  FUNC_11(VAR_11);






 if (FUNC_9(VAR_11))
 {
  uint8 VAR_20 = FUNC_18(VAR_5, VAR_6, VAR_10);
  uint8 VAR_21 = 0;


  if ((VAR_20 & VAR_4) == 0)
   VAR_21 |= VAR_4;
  if ((VAR_20 & VAR_3) == 0 && VAR_15)
   VAR_21 |= VAR_3;

  FUNC_0(FUNC_2(*VAR_10));
  if (VAR_21 != 0)
   FUNC_19(VAR_5, VAR_6, VAR_7, VAR_0,
         *VAR_10, VAR_14, VAR_21);
 }

 return VAR_8;
}
