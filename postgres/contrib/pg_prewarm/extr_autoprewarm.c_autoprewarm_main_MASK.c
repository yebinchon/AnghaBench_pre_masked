
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_4__ {int procLatch; } ;
struct TYPE_3__ {scalar_t__ bgworker_pid; int lock; } ;
typedef int Datum ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,long*,int*) ;
 int FUNC_7 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,int,long,int ) ;
 int VAR_13 ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,unsigned long) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int VAR_20 ;

void
FUNC_16(Datum VAR_21)
{
 bool VAR_22 = 1;
 TimestampTz VAR_23 = 0;


 FUNC_15(VAR_8, VAR_15);
 FUNC_15(VAR_7, VAR_14);
 FUNC_15(VAR_9, VAR_20);
 FUNC_0();


 if (FUNC_10())
  VAR_22 = 0;


 FUNC_14(VAR_13, 0);





 FUNC_2(&VAR_16->lock, VAR_2);
 if (VAR_16->bgworker_pid != VAR_0)
 {
  FUNC_3(&VAR_16->lock);
  FUNC_12(VAR_1,
    (FUNC_13("autoprewarm worker is already running under PID %lu",
      (unsigned long) VAR_16->bgworker_pid)));
  return;
 }
 VAR_16->bgworker_pid = VAR_4;
 FUNC_3(&VAR_16->lock);
 if (VAR_22)
 {
  FUNC_11();
  VAR_23 = FUNC_1();
 }


 while (!VAR_19)
 {

  if (VAR_18)
  {
   VAR_18 = 0;
   FUNC_4(VAR_5);
  }

  if (VAR_17 <= 0)
  {

   (void) FUNC_8(&VAR_3->procLatch,
        VAR_11 | VAR_10,
        -1L,
        VAR_6);
  }
  else
  {
   long VAR_24 = 0;
   TimestampTz VAR_25 = 0;
   long VAR_26 = 0;
   int VAR_27 = 0;


   VAR_25 =
    FUNC_7(VAR_23,
           VAR_17 * 1000);
   FUNC_6(FUNC_1(), VAR_25,
        &VAR_26, &VAR_27);
   VAR_24 = VAR_26 + (VAR_27 / 1000);


   if (VAR_24 <= 0)
   {
    VAR_23 = FUNC_1();
    FUNC_9(1, 0);
    continue;
   }


   (void) FUNC_8(&VAR_3->procLatch,
        VAR_11 | VAR_12 | VAR_10,
        VAR_24,
        VAR_6);
  }


  FUNC_5(&VAR_3->procLatch);
 }





 FUNC_9(1, 1);
}
