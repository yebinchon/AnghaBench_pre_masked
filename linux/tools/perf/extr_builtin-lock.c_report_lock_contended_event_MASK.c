
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread_stat {int dummy; } ;
struct perf_sample {int time; int tid; } ;
struct lock_stat {int discard; int nr_contended; int avg_wait_time; int wait_time_total; } ;
struct lock_seq_stat {int state; int prev_event_time; int list; } ;
struct evsel {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;






 int * VAR_2 ;
 int FUNC_1 (struct lock_seq_stat*) ;
 struct lock_seq_stat* FUNC_2 (struct thread_stat*,void*) ;
 int FUNC_3 (int *) ;
 struct lock_stat* FUNC_4 (void*,char const*) ;
 int FUNC_5 (void**,int *,int) ;
 int FUNC_6 (struct evsel*,struct perf_sample*,char*) ;
 char* FUNC_7 (struct evsel*,struct perf_sample*,char*) ;
 struct thread_stat* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct evsel *VAR_3,
           struct perf_sample *VAR_4)
{
 void *VAR_5;
 struct lock_stat *VAR_6;
 struct thread_stat *VAR_7;
 struct lock_seq_stat *VAR_8;
 const char *VAR_9 = FUNC_7(VAR_3, VAR_4, "name");
 u64 VAR_10 = FUNC_6(VAR_3, VAR_4, "lockdep_addr");

 FUNC_5(&VAR_5, &VAR_10, sizeof(void *));

 VAR_6 = FUNC_4(VAR_5, VAR_9);
 if (!VAR_6)
  return -VAR_1;
 if (VAR_6->discard)
  return 0;

 VAR_7 = FUNC_8(VAR_4->tid);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (!VAR_8)
  return -VAR_1;

 switch (VAR_8->state) {
 case 128:

  return 0;
 case 132:
  break;
 case 129:
 case 133:
 case 130:
 case 131:

  VAR_6->discard = 1;
  VAR_2[VAR_0]++;
  FUNC_3(&VAR_8->list);
  FUNC_1(VAR_8);
  goto end;
 default:
  FUNC_0("Unknown state of lock sequence found!\n");
  break;
 }

 VAR_8->state = 131;
 VAR_6->nr_contended++;
 VAR_6->avg_wait_time = VAR_6->wait_time_total/VAR_6->nr_contended;
 VAR_8->prev_event_time = VAR_4->time;
end:
 return 0;
}
