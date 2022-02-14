
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {int dummy; } ;
struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct hwlat_sample {int nmi_count; int nmi_total_ts; int timestamp; int outer_duration; int duration; int seqnum; } ;
struct hwlat_entry {int nmi_count; int nmi_total_ts; int timestamp; int outer_duration; int duration; int seqnum; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_call*,struct hwlat_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_1 ;
 struct trace_array* VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 struct hwlat_entry* FUNC_3 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_5 (struct ring_buffer*,struct ring_buffer_event*) ;

__attribute__((used)) static void FUNC_6(struct hwlat_sample *VAR_3)
{
 struct trace_array *VAR_4 = VAR_2;
 struct trace_event_call *VAR_5 = &VAR_1;
 struct ring_buffer *VAR_6 = VAR_4->trace_buffer.buffer;
 struct ring_buffer_event *VAR_7;
 struct hwlat_entry *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2();
 FUNC_1(VAR_9);

 VAR_7 = FUNC_4(VAR_6, VAR_0, sizeof(*VAR_8),
       VAR_9, VAR_10);
 if (!VAR_7)
  return;
 VAR_8 = FUNC_3(VAR_7);
 VAR_8->seqnum = VAR_3->seqnum;
 VAR_8->duration = VAR_3->duration;
 VAR_8->outer_duration = VAR_3->outer_duration;
 VAR_8->timestamp = VAR_3->timestamp;
 VAR_8->nmi_total_ts = VAR_3->nmi_total_ts;
 VAR_8->nmi_count = VAR_3->nmi_count;

 if (!FUNC_0(VAR_5, VAR_8, VAR_6, VAR_7))
  FUNC_5(VAR_6, VAR_7);
}
