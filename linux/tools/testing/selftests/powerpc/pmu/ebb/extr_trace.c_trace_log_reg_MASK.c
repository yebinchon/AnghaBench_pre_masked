
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef void* u64 ;
struct trace_entry {scalar_t__ data; int type; } ;
struct trace_buffer {int dummy; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_entry* FUNC_0 (struct trace_buffer*,int) ;

int FUNC_1(struct trace_buffer *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct trace_entry *VAR_5;
 u64 *VAR_6;

 VAR_5 = FUNC_0(VAR_2, sizeof(VAR_3) + sizeof(VAR_4));
 if (!VAR_5)
  return -VAR_0;

 VAR_5->type = VAR_1;
 VAR_6 = (u64 *)VAR_5->data;
 *VAR_6++ = VAR_3;
 *VAR_6++ = VAR_4;

 return 0;
}
