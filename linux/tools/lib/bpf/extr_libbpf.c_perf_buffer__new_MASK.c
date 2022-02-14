
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_period; int wakeup_events; int sample_type; int type; int config; int member_0; } ;
struct perf_buffer_params {int * ctx; int * lost_cb; int * sample_cb; struct perf_event_attr* attr; } ;
struct perf_buffer_opts {int * ctx; int * lost_cb; int * sample_cb; } ;
struct perf_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct perf_buffer* FUNC_0 (int,size_t,struct perf_buffer_params*) ;

struct perf_buffer *FUNC_1(int VAR_3, size_t VAR_4,
         const struct perf_buffer_opts *VAR_5)
{
 struct perf_buffer_params VAR_6 = {};
 struct perf_event_attr VAR_7 = { 0, };

 VAR_7.config = VAR_0,
 VAR_7.type = VAR_2;
 VAR_7.sample_type = VAR_1;
 VAR_7.sample_period = 1;
 VAR_7.wakeup_events = 1;

 VAR_6.attr = &VAR_7;
 VAR_6.sample_cb = VAR_5 ? VAR_5->sample_cb : ((void*)0);
 VAR_6.lost_cb = VAR_5 ? VAR_5->lost_cb : ((void*)0);
 VAR_6.ctx = VAR_5 ? VAR_5->ctx : ((void*)0);

 return FUNC_0(VAR_3, VAR_4, &VAR_6);
}
