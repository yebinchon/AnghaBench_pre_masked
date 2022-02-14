
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {struct ring_buffer_iter** buffer_iter; } ;
struct ring_buffer_iter {int dummy; } ;



__attribute__((used)) static inline struct ring_buffer_iter *
FUNC_0(struct trace_iterator *VAR_0, int VAR_1)
{
 return VAR_0->buffer_iter ? VAR_0->buffer_iter[VAR_1] : ((void*)0);
}
