
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_id_all; int watermark; int bpf_event; int size; int wakeup_watermark; int config; int type; } ;
struct perf_env {int dummy; } ;
struct evlist {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evlist**,struct perf_event_attr*,int ,struct perf_env*) ;

int FUNC_1(struct evlist **VAR_3,
       struct perf_env *VAR_4)
{
 struct perf_event_attr VAR_5 = {
  .type = VAR_1,
  .config = VAR_0,
  .sample_id_all = 1,
  .watermark = 1,
  .bpf_event = 1,
  .size = sizeof(VAR_5),
 };





 VAR_5.wakeup_watermark = 1;

 return FUNC_0(VAR_3, &VAR_5, VAR_2, VAR_4);
}
