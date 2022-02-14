
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rt_delay_jiffies; scalar_t__ rt_delay_ms; scalar_t__ rt_delay_us; scalar_t__ rt_preempted; int rt_readstate; } ;
struct TYPE_4__ {int (* cleanup ) () ;int (* cb_barrier ) () ;int name; int ttype; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 () ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int ,int*,unsigned long*) ;
 int * VAR_19 ;
 int VAR_20 ;
 int FUNC_10 () ;
 int VAR_21 ;
 int FUNC_11 (int ,int ,int*,unsigned long*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_19(void)
{
 int VAR_25;
 int VAR_26 = 0;
 unsigned long VAR_27 = 0;
 int VAR_28;

 if (FUNC_15()) {
  if (VAR_0->cb_barrier != ((void*)0))
   VAR_0->cb_barrier();
  return;
 }
 if (!VAR_0) {
  FUNC_16();
  return;
 }

 FUNC_10();
 FUNC_5();
 FUNC_18(VAR_13, VAR_5);
 FUNC_18(VAR_15, VAR_22);
 FUNC_18(VAR_17, VAR_24);

 if (VAR_19) {
  for (VAR_28 = 0; VAR_28 < VAR_9; VAR_28++)
   FUNC_18(VAR_14,
          VAR_19[VAR_28]);
  FUNC_2(VAR_19);
 }
 VAR_10 = ((void*)0);

 if (VAR_3) {
  for (VAR_28 = 0; VAR_28 < VAR_8; VAR_28++) {
   FUNC_18(VAR_11,
          VAR_3[VAR_28]);
  }
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
 }

 FUNC_9(VAR_0->ttype, &VAR_26, &VAR_27);
 FUNC_11(VAR_0->ttype, VAR_21, &VAR_26, &VAR_27);
 FUNC_3("%s:  End-test grace-period state: g%lu f%#x\n",
   VAR_0->name, VAR_27, VAR_26);
 FUNC_18(VAR_16, VAR_23);
 FUNC_18(VAR_12, VAR_4);
 if (FUNC_6())
  FUNC_1(VAR_18);





 if (VAR_0->cb_barrier != ((void*)0))
  VAR_0->cb_barrier();
 if (VAR_0->cleanup != ((void*)0))
  VAR_0->cleanup();

 FUNC_8();

 if (VAR_2) {
  FUNC_3("Failure/close-call rcutorture reader segments:\n");
  if (VAR_20 == 0)
   FUNC_3("\t: No segments recorded!!!\n");
  VAR_25 = 1;
  for (VAR_28 = 0; VAR_28 < VAR_20; VAR_28++) {
   FUNC_3("\t%d: %#x ", VAR_28, VAR_1[VAR_28].rt_readstate);
   if (VAR_1[VAR_28].rt_delay_jiffies != 0) {
    FUNC_4("%s%ldjiffies", VAR_25 ? "" : "+",
     VAR_1[VAR_28].rt_delay_jiffies);
    VAR_25 = 0;
   }
   if (VAR_1[VAR_28].rt_delay_ms != 0) {
    FUNC_4("%s%ldms", VAR_25 ? "" : "+",
     VAR_1[VAR_28].rt_delay_ms);
    VAR_25 = 0;
   }
   if (VAR_1[VAR_28].rt_delay_us != 0) {
    FUNC_4("%s%ldus", VAR_25 ? "" : "+",
     VAR_1[VAR_28].rt_delay_us);
    VAR_25 = 0;
   }
   FUNC_4("%s\n",
    VAR_1[VAR_28].rt_preempted ? "preempted" : "");

  }
 }
 if (FUNC_0(&VAR_7) || VAR_6)
  FUNC_7(VAR_0, "End of test: FAILURE");
 else if (FUNC_17())
  FUNC_7(VAR_0,
            "End of test: RCU_HOTPLUG");
 else
  FUNC_7(VAR_0, "End of test: SUCCESS");
 FUNC_16();
}
