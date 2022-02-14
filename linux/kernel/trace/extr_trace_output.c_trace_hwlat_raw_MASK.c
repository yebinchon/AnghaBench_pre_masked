
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct trace_event {int dummy; } ;
struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct hwlat_entry {int seqnum; TYPE_1__ timestamp; int outer_duration; int duration; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct hwlat_entry*,int ) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char*,int ,int ,long long,int ,int ) ;

__attribute__((used)) static enum print_line_t
FUNC_3(struct trace_iterator *VAR_0, int VAR_1,
  struct trace_event *VAR_2)
{
 struct hwlat_entry *VAR_3;
 struct trace_seq *VAR_4 = &VAR_0->seq;

 FUNC_0(VAR_3, VAR_0->ent);

 FUNC_2(VAR_4, "%llu %lld %lld %09ld %u\n",
    VAR_3->duration,
    VAR_3->outer_duration,
    (long long)VAR_3->timestamp.tv_sec,
    VAR_3->timestamp.tv_nsec,
    VAR_3->seqnum);

 return FUNC_1(VAR_4);
}
