
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct perf_event_attr {int config; int type; } ;
struct parse_events_state {int idx; int error; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct list_head*,int *,struct perf_event_attr*,int ,int *) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*,struct list_head*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct list_head*) ;
 scalar_t__ FUNC_4 (struct list_head*,int *) ;
 int FUNC_5 (struct perf_event_attr*,int ,int) ;

int FUNC_6(struct parse_events_state *VAR_4,
        struct list_head *VAR_5,
        u32 VAR_6, u64 VAR_7,
        struct list_head *VAR_8)
{
 struct perf_event_attr VAR_9;
 FUNC_0(VAR_3);

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.type = VAR_6;
 VAR_9.config = VAR_7;

 if (VAR_8) {
  if (FUNC_2(&VAR_9, VAR_8, VAR_4->error,
    VAR_2))
   return -VAR_0;

  if (FUNC_4(VAR_8, &VAR_3))
   return -VAR_1;
 }

 return FUNC_1(VAR_5, &VAR_4->idx, &VAR_9,
    FUNC_3(VAR_8), &VAR_3);
}
