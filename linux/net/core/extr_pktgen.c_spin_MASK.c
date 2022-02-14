
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {int delay; int next_tx; int idle_acc; scalar_t__ running; } ;
struct hrtimer_sleeper {int timer; scalar_t__ task; } ;
typedef int s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hrtimer_sleeper*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct hrtimer_sleeper*,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct pktgen_dev *VAR_5, ktime_t VAR_6)
{
 ktime_t VAR_7, VAR_8;
 s64 VAR_9;
 struct hrtimer_sleeper VAR_10;

 FUNC_4(&VAR_10, VAR_0, VAR_1);
 FUNC_5(&VAR_10.timer, VAR_6);

 VAR_9 = FUNC_11(FUNC_3(&VAR_10.timer));
 if (VAR_9 <= 0)
  goto out;

 VAR_7 = FUNC_9();
 if (VAR_9 < 100000) {

  do {
   VAR_8 = FUNC_9();
  } while (FUNC_8(VAR_8, VAR_6) < 0);
 } else {
  do {
   FUNC_14(VAR_2);
   FUNC_6(&VAR_10, VAR_1);

   if (FUNC_12(VAR_10.task))
    FUNC_13();

   FUNC_2(&VAR_10.timer);
  } while (VAR_10.task && VAR_5->running && !FUNC_15(VAR_4));
  FUNC_0(VAR_3);
  VAR_8 = FUNC_9();
 }

 VAR_5->idle_acc += FUNC_11(FUNC_10(VAR_8, VAR_7));
out:
 VAR_5->next_tx = FUNC_7(VAR_6, VAR_5->delay);
 FUNC_1(&VAR_10.timer);
}
