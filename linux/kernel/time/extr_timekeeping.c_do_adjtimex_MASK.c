
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct timekeeper {scalar_t__ tai_offset; } ;
struct audit_ntp_data {int dummy; } ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
struct __kernel_timex {int modes; TYPE_1__ time; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct __kernel_timex*,struct timespec64*,scalar_t__*,struct audit_ntp_data*) ;
 int FUNC_1 (struct timekeeper*,scalar_t__) ;
 int FUNC_2 (struct audit_ntp_data*) ;
 int FUNC_3 (struct audit_ntp_data*) ;
 int FUNC_4 (struct timespec64) ;
 int FUNC_5 () ;
 int FUNC_6 (struct timespec64*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct timespec64*) ;
 int FUNC_12 (struct timekeeper*,int) ;
 int FUNC_13 (struct __kernel_timex*) ;
 TYPE_2__ VAR_8 ;
 int FUNC_14 (struct timekeeper*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct __kernel_timex *VAR_9)
{
 struct timekeeper *VAR_10 = &VAR_8.timekeeper;
 struct audit_ntp_data VAR_11;
 unsigned long VAR_12;
 struct timespec64 VAR_13;
 s32 VAR_14, VAR_15;
 int VAR_16;


 VAR_16 = FUNC_13(VAR_9);
 if (VAR_16)
  return VAR_16;

 if (VAR_9->modes & VAR_2) {
  struct timespec64 VAR_17;
  VAR_17.tv_sec = VAR_9->time.tv_sec;
  VAR_17.tv_nsec = VAR_9->time.tv_usec;
  if (!(VAR_9->modes & VAR_1))
   VAR_17.tv_nsec *= 1000;
  VAR_16 = FUNC_11(&VAR_17);
  if (VAR_16)
   return VAR_16;

  FUNC_4(VAR_17);
 }

 FUNC_2(&VAR_11);

 FUNC_6(&VAR_13);

 FUNC_8(&VAR_7, VAR_12);
 FUNC_15(&VAR_8.seq);

 VAR_14 = VAR_15 = VAR_10->tai_offset;
 VAR_16 = FUNC_0(VAR_9, &VAR_13, &VAR_15, &VAR_11);

 if (VAR_15 != VAR_14) {
  FUNC_1(VAR_10, VAR_15);
  FUNC_12(VAR_10, VAR_6 | VAR_5);
 }
 FUNC_14(VAR_10);

 FUNC_16(&VAR_8.seq);
 FUNC_9(&VAR_7, VAR_12);

 FUNC_3(&VAR_11);


 if (VAR_9->modes & (VAR_0 | VAR_3))
  FUNC_10(VAR_4);

 if (VAR_15 != VAR_14)
  FUNC_5();

 FUNC_7();

 return VAR_16;
}
