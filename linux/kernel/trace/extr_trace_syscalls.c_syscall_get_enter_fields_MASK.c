
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {struct syscall_metadata* data; } ;
struct list_head {int dummy; } ;
struct syscall_metadata {struct list_head enter_fields; } ;



__attribute__((used)) static struct list_head *
FUNC_0(struct trace_event_call *VAR_0)
{
 struct syscall_metadata *VAR_1 = VAR_0->data;

 return &VAR_1->enter_fields;
}
