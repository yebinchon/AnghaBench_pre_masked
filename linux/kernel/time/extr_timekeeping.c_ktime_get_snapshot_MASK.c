
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int base; } ;
struct timekeeper {TYPE_2__ tkr_raw; TYPE_2__ tkr_mono; int offs_real; int clock_was_set_seq; int cs_was_changed_seq; } ;
struct system_time_snapshot {void* raw; void* real; int cycles; int clock_was_set_seq; int cs_was_changed_seq; } ;
typedef int ktime_t ;
struct TYPE_4__ {struct timekeeper timekeeper; int seq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__ VAR_1 ;

void FUNC_7(struct system_time_snapshot *VAR_2)
{
 struct timekeeper *VAR_3 = &VAR_1.timekeeper;
 unsigned int VAR_4;
 ktime_t VAR_5;
 ktime_t VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 u64 VAR_9;

 FUNC_0(VAR_0);

 do {
  VAR_4 = FUNC_3(&VAR_1.seq);
  VAR_9 = FUNC_6(&VAR_3->tkr_mono);
  VAR_2->cs_was_changed_seq = VAR_3->cs_was_changed_seq;
  VAR_2->clock_was_set_seq = VAR_3->clock_was_set_seq;
  VAR_6 = FUNC_1(VAR_3->tkr_mono.base,
          VAR_1.timekeeper.offs_real);
  VAR_5 = VAR_3->tkr_raw.base;
  VAR_8 = FUNC_5(&VAR_3->tkr_mono, VAR_9);
  VAR_7 = FUNC_5(&VAR_3->tkr_raw, VAR_9);
 } while (FUNC_4(&VAR_1.seq, VAR_4));

 VAR_2->cycles = VAR_9;
 VAR_2->real = FUNC_2(VAR_6, VAR_8);
 VAR_2->raw = FUNC_2(VAR_5, VAR_7);
}
