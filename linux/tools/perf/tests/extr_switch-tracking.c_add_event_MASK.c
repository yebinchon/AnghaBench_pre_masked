
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {scalar_t__ time; } ;
struct list_head {int dummy; } ;
struct evlist {int dummy; } ;
struct event_node {scalar_t__ event_time; int list; union perf_event* event; } ;


 int FUNC_0 (int *,struct list_head*) ;
 struct event_node* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct evlist*,union perf_event*,struct perf_sample*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct evlist *VAR_0, struct list_head *VAR_1,
       union perf_event *VAR_2)
{
 struct perf_sample VAR_3;
 struct event_node *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct event_node));
 if (!VAR_4) {
  FUNC_3("malloc failed\n");
  return -1;
 }
 VAR_4->event = VAR_2;
 FUNC_0(&VAR_4->list, VAR_1);

 if (FUNC_2(VAR_0, VAR_2, &VAR_3)) {
  FUNC_3("perf_evlist__parse_sample failed\n");
  return -1;
 }

 if (!VAR_3.time) {
  FUNC_3("event with no time\n");
  return -1;
 }

 VAR_4->event_time = VAR_3.time;

 return 0;
}
