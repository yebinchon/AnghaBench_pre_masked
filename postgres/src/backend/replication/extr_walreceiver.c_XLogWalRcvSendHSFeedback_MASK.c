
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ TransactionId ;
typedef int TimestampTz ;
struct TYPE_6__ {int len; int data; } ;
typedef int FullTransactionId ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (TYPE_1__*,char) ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_15 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_16(bool VAR_8)
{
 TimestampTz VAR_9;
 FullTransactionId VAR_10;
 TransactionId VAR_11;
 uint32 VAR_12,
    VAR_13;
 TransactionId VAR_14,
    VAR_15;
 static TimestampTz VAR_16 = 0;


 static bool VAR_17 = 1;





 if ((VAR_6 <= 0 || !VAR_4) &&
  !VAR_17)
  return;


 VAR_9 = FUNC_1();

 if (!VAR_8)
 {



  if (!FUNC_6(VAR_16, VAR_9,
          VAR_6 * 1000))
   return;
  VAR_16 = VAR_9;
 }
 if (!FUNC_3())
  return;





 if (VAR_4)
 {
  TransactionId VAR_18;







  VAR_14 = FUNC_2(((void*)0),
        VAR_2 | VAR_3);

  FUNC_4(&VAR_18, &VAR_15);

  if (FUNC_7(VAR_18) &&
   FUNC_8(VAR_18, VAR_14))
   VAR_14 = VAR_18;
 }
 else
 {
  VAR_14 = VAR_1;
  VAR_15 = VAR_1;
 }





 VAR_10 = FUNC_5();
 VAR_11 = FUNC_9(VAR_10);
 VAR_12 = FUNC_0(VAR_10);
 VAR_13 = VAR_12;
 if (VAR_11 < VAR_14)
  VAR_12--;
 if (VAR_11 < VAR_15)
  VAR_13--;

 FUNC_10(VAR_0, "sending hot standby feedback xmin %u epoch %u catalog_xmin %u catalog_xmin_epoch %u",
   VAR_14, VAR_12, VAR_15, VAR_13);


 FUNC_14(&VAR_5);
 FUNC_11(&VAR_5, 'h');
 FUNC_13(&VAR_5, FUNC_1());
 FUNC_12(&VAR_5, VAR_14);
 FUNC_12(&VAR_5, VAR_12);
 FUNC_12(&VAR_5, VAR_15);
 FUNC_12(&VAR_5, VAR_13);
 FUNC_15(VAR_7, VAR_5.data, VAR_5.len);
 if (FUNC_7(VAR_14) || FUNC_7(VAR_15))
  VAR_17 = 1;
 else
  VAR_17 = 0;
}
