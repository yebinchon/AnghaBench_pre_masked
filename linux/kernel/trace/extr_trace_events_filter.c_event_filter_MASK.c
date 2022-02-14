
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {struct event_filter* filter; } ;
struct event_filter {int dummy; } ;



__attribute__((used)) static inline struct event_filter *FUNC_0(struct trace_event_file *VAR_0)
{
 return VAR_0->filter;
}
