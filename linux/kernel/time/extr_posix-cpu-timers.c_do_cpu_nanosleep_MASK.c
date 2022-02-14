
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ expires; } ;
struct restart_block {TYPE_2__ nanosleep; } ;
struct TYPE_5__ {int cpu; } ;
struct k_itimer {int it_overrun; struct timespec64 it_value; int it_lock; TYPE_1__ it; TYPE_3__* it_process; int it_clock; } ;
struct itimerspec64 {int it_overrun; struct timespec64 it_value; int it_lock; TYPE_1__ it; TYPE_3__* it_process; int it_clock; } ;
typedef int it ;
typedef int clockid_t ;
struct TYPE_7__ {struct restart_block restart_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (struct k_itimer*,int ,int) ;
 int FUNC_3 (struct restart_block*,struct timespec64*) ;
 int FUNC_4 (struct k_itimer*) ;
 int FUNC_5 (struct k_itimer*) ;
 int FUNC_6 (struct k_itimer*,int,struct k_itimer*,struct k_itimer*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(const clockid_t VAR_5, int VAR_6,
       const struct timespec64 *VAR_7)
{
 struct itimerspec64 VAR_8;
 struct k_itimer VAR_9;
 u64 VAR_10;
 int VAR_11;




 FUNC_2(&VAR_9, 0, sizeof VAR_9);
 FUNC_9(&VAR_9.it_lock);
 VAR_9.it_clock = VAR_5;
 VAR_9.it_overrun = -1;
 VAR_11 = FUNC_4(&VAR_9);
 VAR_9.it_process = VAR_4;

 if (!VAR_11) {
  static struct itimerspec64 VAR_12;
  struct restart_block *VAR_13;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.it_value = *VAR_7;

  FUNC_10(&VAR_9.it_lock);
  VAR_11 = FUNC_6(&VAR_9, VAR_6, &VAR_8, ((void*)0));
  if (VAR_11) {
   FUNC_11(&VAR_9.it_lock);
   return VAR_11;
  }

  while (!FUNC_8(VAR_4)) {
   if (!FUNC_1(&VAR_9.it.cpu)) {




    FUNC_5(&VAR_9);
    FUNC_11(&VAR_9.it_lock);
    return 0;
   }




   FUNC_0(VAR_1);
   FUNC_11(&VAR_9.it_lock);
   FUNC_7();
   FUNC_10(&VAR_9.it_lock);
  }




  VAR_10 = FUNC_1(&VAR_9.it.cpu);
  VAR_11 = FUNC_6(&VAR_9, 0, &VAR_12, &VAR_8);
  if (!VAR_11) {



   FUNC_5(&VAR_9);
  }
  FUNC_11(&VAR_9.it_lock);

  while (VAR_11 == VAR_2) {





   FUNC_10(&VAR_9.it_lock);
   VAR_11 = FUNC_5(&VAR_9);
   FUNC_11(&VAR_9.it_lock);
  }

  if ((VAR_8.it_value.tv_sec | VAR_8.it_value.tv_nsec) == 0) {



   return 0;
  }

  VAR_11 = -VAR_0;



  VAR_13 = &VAR_4->restart_block;
  VAR_13->nanosleep.expires = VAR_10;
  if (VAR_13->nanosleep.type != VAR_3)
   VAR_11 = FUNC_3(VAR_13, &VAR_8.it_value);
 }

 return VAR_11;
}
