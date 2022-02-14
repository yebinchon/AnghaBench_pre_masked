
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_event {int dummy; } ;
struct trace_entry {int dummy; } ;
struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct hwlat_entry {scalar_t__ nmi_count; scalar_t__ nmi_total_ts; TYPE_1__ timestamp; int outer_duration; int duration; int seqnum; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hwlat_entry*,struct trace_entry*) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,scalar_t__,...) ;
 int FUNC_4 (struct trace_seq*,char) ;

__attribute__((used)) static enum print_line_t
FUNC_5(struct trace_iterator *VAR_1, int VAR_2,
    struct trace_event *VAR_3)
{
 struct trace_entry *VAR_4 = VAR_1->ent;
 struct trace_seq *VAR_5 = &VAR_1->seq;
 struct hwlat_entry *VAR_6;

 FUNC_1(VAR_6, VAR_4);

 FUNC_3(VAR_5, "#%-5u inner/outer(us): %4llu/%-5llu ts:%lld.%09ld",
    VAR_6->seqnum,
    VAR_6->duration,
    VAR_6->outer_duration,
    (long long)VAR_6->timestamp.tv_sec,
    VAR_6->timestamp.tv_nsec);

 if (VAR_6->nmi_count) {




  if (!FUNC_0(VAR_0))
   FUNC_3(VAR_5, " nmi-total:%llu",
      VAR_6->nmi_total_ts);
  FUNC_3(VAR_5, " nmi-count:%u",
     VAR_6->nmi_count);
 }

 FUNC_4(VAR_5, '\n');

 return FUNC_2(VAR_5);
}
