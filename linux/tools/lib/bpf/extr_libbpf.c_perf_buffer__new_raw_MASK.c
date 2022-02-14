
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_buffer_raw_opts {int map_keys; int cpus; int cpu_cnt; int ctx; int event_cb; int attr; } ;
struct perf_buffer_params {int map_keys; int cpus; int cpu_cnt; int ctx; int event_cb; int attr; } ;
struct perf_buffer {int dummy; } ;


 struct perf_buffer* FUNC_0 (int,size_t,struct perf_buffer_params*) ;

struct perf_buffer *
FUNC_1(int VAR_0, size_t VAR_1,
       const struct perf_buffer_raw_opts *VAR_2)
{
 struct perf_buffer_params VAR_3 = {};

 VAR_3.attr = VAR_2->attr;
 VAR_3.event_cb = VAR_2->event_cb;
 VAR_3.ctx = VAR_2->ctx;
 VAR_3.cpu_cnt = VAR_2->cpu_cnt;
 VAR_3.cpus = VAR_2->cpus;
 VAR_3.map_keys = VAR_2->map_keys;

 return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
