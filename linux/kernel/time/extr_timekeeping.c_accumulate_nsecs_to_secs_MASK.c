
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {scalar_t__ shift; scalar_t__ xtime_nsec; } ;
struct timekeeper {int skip_second_overflow; scalar_t__ tai_offset; int wall_to_monotonic; scalar_t__ xtime_sec; TYPE_1__ tkr_mono; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct timekeeper*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct timespec64) ;
 int FUNC_3 (struct timekeeper*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline unsigned int FUNC_5(struct timekeeper *VAR_2)
{
 u64 VAR_3 = (u64)VAR_0 << VAR_2->tkr_mono.shift;
 unsigned int VAR_4 = 0;

 while (VAR_2->tkr_mono.xtime_nsec >= VAR_3) {
  int VAR_5;

  VAR_2->tkr_mono.xtime_nsec -= VAR_3;
  VAR_2->xtime_sec++;





  if (FUNC_4(VAR_2->skip_second_overflow)) {
   VAR_2->skip_second_overflow = 0;
   continue;
  }


  VAR_5 = FUNC_1(VAR_2->xtime_sec);
  if (FUNC_4(VAR_5)) {
   struct timespec64 VAR_6;

   VAR_2->xtime_sec += VAR_5;

   VAR_6.tv_sec = VAR_5;
   VAR_6.tv_nsec = 0;
   FUNC_3(VAR_2,
    FUNC_2(VAR_2->wall_to_monotonic, VAR_6));

   FUNC_0(VAR_2, VAR_2->tai_offset - VAR_5);

   VAR_4 = VAR_1;
  }
 }
 return VAR_4;
}
