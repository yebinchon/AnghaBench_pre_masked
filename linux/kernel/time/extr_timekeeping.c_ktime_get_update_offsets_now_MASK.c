
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ base; } ;
struct timekeeper {unsigned int clock_was_set_seq; scalar_t__ offs_real; scalar_t__ offs_boot; scalar_t__ offs_tai; scalar_t__ next_leap_ktime; TYPE_2__ tkr_mono; } ;
typedef scalar_t__ ktime_t ;
struct TYPE_3__ {int seq; struct timekeeper timekeeper; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

ktime_t FUNC_7(unsigned int *VAR_1, ktime_t *VAR_2,
         ktime_t *VAR_3, ktime_t *VAR_4)
{
 struct timekeeper *VAR_5 = &VAR_0.timekeeper;
 unsigned int VAR_6;
 ktime_t VAR_7;
 u64 VAR_8;

 do {
  VAR_6 = FUNC_3(&VAR_0.seq);

  VAR_7 = VAR_5->tkr_mono.base;
  VAR_8 = FUNC_5(&VAR_5->tkr_mono);
  VAR_7 = FUNC_0(VAR_7, VAR_8);

  if (*VAR_1 != VAR_5->clock_was_set_seq) {
   *VAR_1 = VAR_5->clock_was_set_seq;
   *VAR_2 = VAR_5->offs_real;
   *VAR_3 = VAR_5->offs_boot;
   *VAR_4 = VAR_5->offs_tai;
  }


  if (FUNC_6(VAR_7 >= VAR_5->next_leap_ktime))
   *VAR_2 = FUNC_2(VAR_5->offs_real, FUNC_1(1, 0));

 } while (FUNC_4(&VAR_0.seq, VAR_6));

 return VAR_7;
}
