
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int size; } ;


 int FUNC_0 (char*,int ,struct trace_buffer*) ;

void FUNC_1(struct trace_buffer *VAR_0)
{
 FUNC_0("Trace buffer 0x%llx bytes @ %p\n", VAR_0->size, VAR_0);
}
