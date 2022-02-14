
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample_raw {int size; int data; } ;
struct perf_sample_lost {int lost; } ;
struct perf_event_header {int type; } ;
struct perf_cpu_buf {int cpu; struct perf_buffer* pb; } ;
struct perf_buffer {int (* event_cb ) (int ,int ,struct perf_event_header*) ;int ctx; int (* lost_cb ) (int ,int ,int ) ;int (* sample_cb ) (int ,int ,int ,int ) ;} ;
typedef enum bpf_perf_event_ret { ____Placeholder_bpf_perf_event_ret } bpf_perf_event_ret ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,struct perf_event_header*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static enum bpf_perf_event_ret
FUNC_4(struct perf_event_header *VAR_2, void *VAR_3)
{
 struct perf_cpu_buf *VAR_4 = VAR_3;
 struct perf_buffer *VAR_5 = VAR_4->pb;
 void *VAR_6 = VAR_2;


 if (VAR_5->event_cb)
  return VAR_5->event_cb(VAR_5->ctx, VAR_4->cpu, VAR_2);

 switch (VAR_2->type) {
 case 128: {
  struct perf_sample_raw *VAR_7 = VAR_6;

  if (VAR_5->sample_cb)
   VAR_5->sample_cb(VAR_5->ctx, VAR_4->cpu, VAR_7->data, VAR_7->size);
  break;
 }
 case 129: {
  struct perf_sample_lost *VAR_8 = VAR_6;

  if (VAR_5->lost_cb)
   VAR_5->lost_cb(VAR_5->ctx, VAR_4->cpu, VAR_8->lost);
  break;
 }
 default:
  FUNC_0("unknown perf sample type %d\n", VAR_2->type);
  return VAR_1;
 }
 return VAR_0;
}
