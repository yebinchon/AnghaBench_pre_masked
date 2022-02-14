
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct timekeeper {int wall_to_monotonic; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec64) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_4 (struct timekeeper*) ;
 int FUNC_5 (struct timekeeper*,int) ;
 scalar_t__ FUNC_6 (int *,struct timespec64*) ;
 int FUNC_7 (int ,struct timespec64) ;
 int FUNC_8 (struct timespec64 const*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (struct timekeeper*,int ) ;
 int FUNC_10 (struct timekeeper*,struct timespec64 const*) ;
 struct timespec64 FUNC_11 (struct timekeeper*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(const struct timespec64 *VAR_6)
{
 struct timekeeper *VAR_7 = &VAR_5.timekeeper;
 struct timespec64 VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (!FUNC_8(VAR_6))
  return -VAR_0;

 FUNC_2(&VAR_4, VAR_10);
 FUNC_12(&VAR_5.seq);

 FUNC_4(VAR_7);

 VAR_9 = FUNC_11(VAR_7);
 VAR_8.tv_sec = VAR_6->tv_sec - VAR_9.tv_sec;
 VAR_8.tv_nsec = VAR_6->tv_nsec - VAR_9.tv_nsec;

 if (FUNC_6(&VAR_7->wall_to_monotonic, &VAR_8) > 0) {
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_9(VAR_7, FUNC_7(VAR_7->wall_to_monotonic, VAR_8));

 FUNC_10(VAR_7, VAR_6);
out:
 FUNC_5(VAR_7, VAR_1 | VAR_3 | VAR_2);

 FUNC_13(&VAR_5.seq);
 FUNC_3(&VAR_4, VAR_10);


 FUNC_1();

 if (!VAR_11)
  FUNC_0(VAR_8);

 return VAR_11;
}
