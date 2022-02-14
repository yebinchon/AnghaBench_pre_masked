
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct thread_stat {int dummy; } ;
struct perf_sample {int time; int tid; } ;
struct lock_stat {int discard; int nr_acquire; int nr_acquired; int nr_readlock; int nr_trylock; } ;
struct lock_seq_stat {int state; int read_count; int prev_event_time; int list; } ;
struct evsel {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct lock_seq_stat*) ;
 struct lock_seq_stat* FUNC_2 (struct thread_stat*,void*) ;
 int FUNC_3 (int *) ;
 struct lock_stat* FUNC_4 (void*,char const*) ;
 int FUNC_5 (void**,void**,int) ;
 void* FUNC_6 (struct evsel*,struct perf_sample*,char*) ;
 char* FUNC_7 (struct evsel*,struct perf_sample*,char*) ;
 struct thread_stat* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct evsel *VAR_5,
         struct perf_sample *VAR_6)
{
 void *VAR_7;
 struct lock_stat *VAR_8;
 struct thread_stat *VAR_9;
 struct lock_seq_stat *VAR_10;
 const char *VAR_11 = FUNC_7(VAR_5, VAR_6, "name");
 u64 VAR_12 = FUNC_6(VAR_5, VAR_6, "lockdep_addr");
 int VAR_13 = FUNC_6(VAR_5, VAR_6, "flag");

 FUNC_5(&VAR_7, &VAR_12, sizeof(void *));

 VAR_8 = FUNC_4(VAR_7, VAR_11);
 if (!VAR_8)
  return -VAR_1;
 if (VAR_8->discard)
  return 0;

 VAR_9 = FUNC_8(VAR_6->tid);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_9, VAR_7);
 if (!VAR_10)
  return -VAR_1;

 switch (VAR_10->state) {
 case 128:
 case 129:
  if (!VAR_13) {
   VAR_10->state = 132;
  } else {
   if (VAR_13 & VAR_3)
    VAR_8->nr_trylock++;
   if (VAR_13 & VAR_2)
    VAR_8->nr_readlock++;
   VAR_10->state = 130;
   VAR_10->read_count = 1;
   VAR_8->nr_acquired++;
  }
  break;
 case 130:
  if (VAR_13 & VAR_2) {
   VAR_10->read_count++;
   VAR_8->nr_acquired++;
   goto end;
  } else {
   goto broken;
  }
  break;
 case 133:
 case 132:
 case 131:
broken:

  VAR_8->discard = 1;
  VAR_4[VAR_0]++;
  FUNC_3(&VAR_10->list);
  FUNC_1(VAR_10);
  goto end;
 default:
  FUNC_0("Unknown state of lock sequence found!\n");
  break;
 }

 VAR_8->nr_acquire++;
 VAR_10->prev_event_time = VAR_6->time;
end:
 return 0;
}
