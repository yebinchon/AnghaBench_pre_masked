
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int TimestampTz ;
struct TYPE_2__ {int lastQueueFillWarn; } ;
typedef int QueuePosition ;
typedef scalar_t__ BackendId ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 double FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,double) ;

__attribute__((used)) static void
FUNC_13(void)
{
 double VAR_6;
 TimestampTz VAR_7;

 VAR_6 = FUNC_8();
 if (VAR_6 < 0.5)
  return;

 VAR_7 = FUNC_1();

 if (FUNC_7(VAR_5->lastQueueFillWarn,
           VAR_7, VAR_2))
 {
  QueuePosition VAR_8 = VAR_3;
  int32 VAR_9 = VAR_0;

  for (BackendId VAR_10 = VAR_1; VAR_10 > 0; VAR_10 = FUNC_4(VAR_10))
  {
   FUNC_0(FUNC_2(VAR_10) != VAR_0);
   VAR_8 = FUNC_6(VAR_8, FUNC_3(VAR_10));
   if (FUNC_5(VAR_8, FUNC_3(VAR_10)))
    VAR_9 = FUNC_2(VAR_10);
  }

  FUNC_9(VAR_4,
    (FUNC_12("NOTIFY queue is %.0f%% full", VAR_6 * 100),
     (VAR_9 != VAR_0 ?
      FUNC_10("The server process with PID %d is among those with the oldest transactions.", VAR_9)
      : 0),
     (VAR_9 != VAR_0 ?
      FUNC_11("The NOTIFY queue cannot be emptied until that process ends its current transaction.")
      : 0)));

  VAR_5->lastQueueFillWarn = VAR_7;
 }
}
