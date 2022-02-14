
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int length; } ;
struct trace_buffer {int dummy; } ;


 struct trace_entry* FUNC_0 (struct trace_buffer*,int) ;

__attribute__((used)) static struct trace_entry *FUNC_1(struct trace_buffer *VAR_0, int VAR_1)
{
 struct trace_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, sizeof(*VAR_2) + VAR_1);
 if (VAR_2)
  VAR_2->length = VAR_1;

 return VAR_2;
}
