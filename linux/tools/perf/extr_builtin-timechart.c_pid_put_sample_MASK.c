
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timechart {int dummy; } ;
struct per_pidcomm {scalar_t__ start_time; int total_time; struct cpu_sample* samples; struct per_pidcomm* next; } ;
struct per_pid {scalar_t__ start_time; int total_time; struct per_pidcomm* all; struct per_pidcomm* current; } ;
struct cpu_sample {int type; unsigned int cpu; char const* backtrace; struct cpu_sample* next; scalar_t__ end_time; scalar_t__ start_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct per_pid* FUNC_1 (struct timechart*,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct timechart *VAR_1, int VAR_2, int VAR_3,
      unsigned int VAR_4, u64 VAR_5, u64 VAR_6,
      const char *VAR_7)
{
 struct per_pid *VAR_8;
 struct per_pidcomm *VAR_9;
 struct cpu_sample *VAR_10;

 VAR_8 = FUNC_1(VAR_1, VAR_2);
 VAR_9 = VAR_8->current;
 if (!VAR_9) {
  VAR_9 = FUNC_2(sizeof(*VAR_9));
  FUNC_0(VAR_9 != ((void*)0));
  VAR_8->current = VAR_9;
  VAR_9->next = VAR_8->all;
  VAR_8->all = VAR_9;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10));
 FUNC_0(VAR_10 != ((void*)0));
 VAR_10->start_time = VAR_5;
 VAR_10->end_time = VAR_6;
 VAR_10->type = VAR_3;
 VAR_10->next = VAR_9->samples;
 VAR_10->cpu = VAR_4;
 VAR_10->backtrace = VAR_7;
 VAR_9->samples = VAR_10;

 if (VAR_10->type == VAR_0 && VAR_6 > VAR_5 && VAR_5 > 0) {
  VAR_9->total_time += (VAR_6-VAR_5);
  VAR_8->total_time += (VAR_6-VAR_5);
 }

 if (VAR_9->start_time == 0 || VAR_9->start_time > VAR_5)
  VAR_9->start_time = VAR_5;
 if (VAR_8->start_time == 0 || VAR_8->start_time > VAR_5)
  VAR_8->start_time = VAR_5;
}
