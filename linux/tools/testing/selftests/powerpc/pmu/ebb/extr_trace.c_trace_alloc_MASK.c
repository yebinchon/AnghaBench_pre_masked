
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {void* tail; } ;


 int FUNC_0 (struct trace_buffer*,void*) ;

__attribute__((used)) static void *FUNC_1(struct trace_buffer *VAR_0, int VAR_1)
{
 void *VAR_2, *VAR_3;

 VAR_2 = VAR_0->tail;
 VAR_3 = VAR_0->tail + VAR_1;
 if (!FUNC_0(VAR_0, VAR_3))
  return ((void*)0);

 VAR_0->tail = VAR_3;

 return VAR_2;
}
