
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {scalar_t__ tv_nsec; } ;
struct timekeeper {int wall_to_monotonic; } ;
struct TYPE_2__ {int seq; struct timekeeper timekeeper; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_3 (struct timekeeper*) ;
 int FUNC_4 (struct timekeeper*,int) ;
 struct timespec64 FUNC_5 (int ,struct timespec64 const) ;
 scalar_t__ FUNC_6 (int *,struct timespec64 const*) ;
 int FUNC_7 (int ,struct timespec64 const) ;
 int FUNC_8 (struct timespec64*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_9 (struct timekeeper*,int ) ;
 int FUNC_10 (struct timekeeper*) ;
 int FUNC_11 (struct timekeeper*,struct timespec64 const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(const struct timespec64 *VAR_7)
{
 struct timekeeper *VAR_8 = &VAR_6.timekeeper;
 unsigned long VAR_9;
 struct timespec64 VAR_10;
 int VAR_11 = 0;

 if (VAR_7->tv_nsec < 0 || VAR_7->tv_nsec >= VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_5, VAR_9);
 FUNC_12(&VAR_6.seq);

 FUNC_3(VAR_8);


 VAR_10 = FUNC_5(FUNC_10(VAR_8), *VAR_7);
 if (FUNC_6(&VAR_8->wall_to_monotonic, VAR_7) > 0 ||
     !FUNC_8(&VAR_10)) {
  VAR_11 = -VAR_0;
  goto error;
 }

 FUNC_11(VAR_8, VAR_7);
 FUNC_9(VAR_8, FUNC_7(VAR_8->wall_to_monotonic, *VAR_7));

error:
 FUNC_4(VAR_8, VAR_2 | VAR_4 | VAR_3);

 FUNC_13(&VAR_6.seq);
 FUNC_2(&VAR_5, VAR_9);


 FUNC_0();

 return VAR_11;
}
