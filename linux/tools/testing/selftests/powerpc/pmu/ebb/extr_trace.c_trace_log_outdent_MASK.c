
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int type; } ;
struct trace_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_entry* FUNC_0 (struct trace_buffer*,int ) ;

int FUNC_1(struct trace_buffer *VAR_2)
{
 struct trace_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->type = VAR_1;

 return 0;
}
