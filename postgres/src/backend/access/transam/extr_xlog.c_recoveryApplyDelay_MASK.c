
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef int XLogReaderState ;
typedef int TimestampTz ;
struct TYPE_2__ {int recoveryWakeupLatch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,long*,int*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int,long,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,long,int) ;
 int FUNC_10 (int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static bool
FUNC_11(XLogReaderState *VAR_14)
{
 uint8 VAR_15;
 TimestampTz VAR_16;
 long VAR_17;
 int VAR_18;


 if (VAR_13 <= 0)
  return 0;


 if (!VAR_11)
  return 0;


 if (!VAR_0)
  return 0;
 if (FUNC_8(VAR_14) != VAR_2)
  return 0;

 VAR_15 = FUNC_7(VAR_14) & VAR_9;

 if (VAR_15 != VAR_7 &&
  VAR_15 != VAR_8)
  return 0;

 if (!FUNC_10(VAR_14, &VAR_16))
  return 0;

 VAR_12 =
  FUNC_5(VAR_16, VAR_13);





 FUNC_4(FUNC_1(), VAR_12,
      &VAR_17, &VAR_18);
 if (VAR_17 <= 0 && VAR_18 <= 0)
  return 0;

 while (1)
 {
  FUNC_3(&VAR_10->recoveryWakeupLatch);


  FUNC_2();

  if (FUNC_0())
   break;





  FUNC_4(FUNC_1(), VAR_12,
       &VAR_17, &VAR_18);





  if (VAR_17 <= 0 && VAR_18 / 1000 <= 0)
   break;

  FUNC_9(VAR_1, "recovery apply delay %ld seconds, %d milliseconds",
    VAR_17, VAR_18 / 1000);

  (void) FUNC_6(&VAR_10->recoveryWakeupLatch,
       VAR_5 | VAR_6 | VAR_4,
       VAR_17 * 1000L + VAR_18 / 1000,
       VAR_3);
 }
 return 1;
}
