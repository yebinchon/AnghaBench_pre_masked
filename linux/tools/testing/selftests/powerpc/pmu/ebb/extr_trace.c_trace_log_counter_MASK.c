
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u64 ;
struct trace_entry {scalar_t__ data; int type; } ;
struct trace_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_entry* FUNC_0 (struct trace_buffer*,int) ;

int FUNC_1(struct trace_buffer *VAR_2, u64 VAR_3)
{
 struct trace_entry *VAR_4;
 u64 *VAR_5;

 VAR_4 = FUNC_0(VAR_2, sizeof(VAR_3));
 if (!VAR_4)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_5 = (u64 *)VAR_4->data;
 *VAR_5++ = VAR_3;

 return 0;
}
