
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (unsigned long long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 unsigned long long FUNC_7 (int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long long FUNC_8 (int ) ;
 int* FUNC_9 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_10 (int ,int) ;
 unsigned long long FUNC_11 (int ) ;
 int FUNC_12 (int ,struct ring_buffer_event*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ VAR_17 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_18(void)
{
 ktime_t VAR_20, VAR_21, VAR_22;
 unsigned long long VAR_23;
 unsigned long long VAR_24;
 unsigned long long VAR_25;
 unsigned long VAR_26 = 0;
 unsigned long VAR_27 = 0;
 unsigned long VAR_28;
 int VAR_29 = 0;





 FUNC_15("Starting ring buffer hammer\n");
 VAR_20 = FUNC_6();
 VAR_22 = FUNC_4(VAR_20, VAR_3 * VAR_2);
 do {
  struct ring_buffer_event *VAR_30;
  int *VAR_31;
  int VAR_32;

  for (VAR_32 = 0; VAR_32 < VAR_19; VAR_32++) {
   VAR_30 = FUNC_10(VAR_5, 10);
   if (!VAR_30) {
    VAR_26++;
   } else {
    VAR_27++;
    VAR_31 = FUNC_9(VAR_30);
    *VAR_31 = FUNC_13();
    FUNC_12(VAR_5, VAR_30);
   }
  }
  VAR_21 = FUNC_6();

  VAR_29++;
  if (VAR_6 && !(VAR_29 % VAR_18))
   FUNC_17(VAR_6);
  if (VAR_29 % VAR_18)
   FUNC_1();

 } while (FUNC_5(VAR_21, VAR_22) && !FUNC_0());
 FUNC_15("End ring buffer hammer\n");

 if (VAR_6) {

  FUNC_3(&VAR_15);
  FUNC_3(&VAR_13);

  FUNC_14();
  VAR_16 = 1;
  FUNC_17(VAR_6);
  FUNC_16(&VAR_13);
 }

 VAR_23 = FUNC_7(VAR_21, VAR_20);

 VAR_24 = FUNC_8(VAR_5);
 VAR_25 = FUNC_11(VAR_5);

 if (VAR_17)
  FUNC_15("ERROR!\n");

 if (!VAR_9) {
  if (VAR_7 < 0)
   FUNC_15("Running Consumer at nice: %d\n",
         VAR_8);
  else
   FUNC_15("Running Consumer at SCHED_FIFO %d\n",
         VAR_7);
 }
 if (VAR_10 < 0)
  FUNC_15("Running Producer at nice: %d\n",
        VAR_11);
 else
  FUNC_15("Running Producer at SCHED_FIFO %d\n",
        VAR_10);


 if (VAR_10 < 0 && VAR_7 < 0 &&
     VAR_11 == VAR_0 && VAR_8 == VAR_0)
  FUNC_15("WARNING!!! This test is running at lowest priority.\n");

 FUNC_15("Time:     %lld (usecs)\n", VAR_23);
 FUNC_15("Overruns: %lld\n", VAR_25);
 if (VAR_9)
  FUNC_15("Read:     (reader disabled)\n");
 else
  FUNC_15("Read:     %ld  (by %s)\n", VAR_12,
   VAR_14 ? "events" : "pages");
 FUNC_15("Entries:  %lld\n", VAR_24);
 FUNC_15("Total:    %lld\n", VAR_24 + VAR_25 + VAR_12);
 FUNC_15("Missed:   %ld\n", VAR_26);
 FUNC_15("Hit:      %ld\n", VAR_27);


 FUNC_2(VAR_23, VAR_4);
 if (VAR_23)
  VAR_27 /= (long)VAR_23;
 else
  FUNC_15("TIME IS ZERO??\n");

 FUNC_15("Entries per millisec: %ld\n", VAR_27);

 if (VAR_27) {

  VAR_28 = VAR_1 / VAR_27;
  FUNC_15("%ld ns per entry\n", VAR_28);
 }

 if (VAR_26) {
  if (VAR_23)
   VAR_26 /= (long)VAR_23;

  FUNC_15("Total iterations per millisec: %ld\n",
        VAR_27 + VAR_26);


  if (!(VAR_27 + VAR_26)) {
   FUNC_15("hit + missed overflowed and totalled zero!\n");
   VAR_27--;
  }


  VAR_28 = VAR_1 / (VAR_27 + VAR_26);
  FUNC_15("%ld ns per entry\n", VAR_28);
 }
}
