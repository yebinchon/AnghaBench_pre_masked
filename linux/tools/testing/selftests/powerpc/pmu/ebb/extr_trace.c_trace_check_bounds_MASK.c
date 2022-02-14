
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int size; } ;



__attribute__((used)) static bool FUNC_0(struct trace_buffer *VAR_0, void *VAR_1)
{
 return VAR_1 < ((void *)VAR_0 + VAR_0->size);
}
