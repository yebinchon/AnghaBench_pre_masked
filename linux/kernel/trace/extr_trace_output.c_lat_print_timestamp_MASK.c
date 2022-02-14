
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {unsigned long iter_flags; unsigned long long ts; struct trace_seq seq; TYPE_1__* trace_buffer; struct trace_array* tr; } ;
struct trace_array {unsigned long trace_flags; } ;
struct TYPE_2__ {unsigned long long time_start; } ;


 unsigned long long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,unsigned long long,...) ;

__attribute__((used)) static int
FUNC_5(struct trace_iterator *VAR_4, u64 VAR_5)
{
 struct trace_array *VAR_6 = VAR_4->tr;
 unsigned long VAR_7 = VAR_6->trace_flags & VAR_2;
 unsigned long VAR_8 = VAR_4->iter_flags & VAR_1;
 unsigned long long VAR_9 = VAR_4->ts - VAR_4->trace_buffer->time_start;
 unsigned long long VAR_10 = VAR_5 - VAR_4->ts;
 struct trace_seq *VAR_11 = &VAR_4->seq;

 if (VAR_8) {
  VAR_9 = FUNC_1(VAR_9);
  VAR_10 = FUNC_1(VAR_10);
 }

 if (VAR_7 && VAR_8) {
  unsigned long VAR_12 = FUNC_0(VAR_9, VAR_3);
  unsigned long VAR_13 = (unsigned long)VAR_9;
  unsigned long VAR_14 = FUNC_0(VAR_10, VAR_3);
  unsigned long VAR_15 = (unsigned long)VAR_10;

  FUNC_4(
   VAR_11, "[%08llx] %ld.%03ldms (+%ld.%03ldms): ",
   FUNC_1(VAR_4->ts),
   VAR_13, VAR_12,
   VAR_15, VAR_14);

 } else if (VAR_7 && !VAR_8) {
  FUNC_4(
   VAR_11, "[%016llx] %lld (+%lld): ",
   VAR_4->ts, VAR_9, VAR_10);

 } else if (!VAR_7 && VAR_8) {
  FUNC_4(
   VAR_11, " %4lldus%c: ",
   VAR_9,
   FUNC_2(VAR_10 * VAR_0));

 } else {
  FUNC_4(VAR_11, " %4lld: ", VAR_9);
 }

 return !FUNC_3(VAR_11);
}
