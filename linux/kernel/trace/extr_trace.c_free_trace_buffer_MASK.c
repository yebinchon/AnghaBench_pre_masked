
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer {int * data; int * buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct trace_buffer *VAR_0)
{
 if (VAR_0->buffer) {
  FUNC_1(VAR_0->buffer);
  VAR_0->buffer = ((void*)0);
  FUNC_0(VAR_0->data);
  VAR_0->data = ((void*)0);
 }
}
