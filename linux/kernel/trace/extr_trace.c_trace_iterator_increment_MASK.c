
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int idx; int cpu; } ;
struct ring_buffer_iter {int dummy; } ;


 int FUNC_0 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_iter* FUNC_1 (struct trace_iterator*,int ) ;

__attribute__((used)) static void FUNC_2(struct trace_iterator *VAR_0)
{
 struct ring_buffer_iter *VAR_1 = FUNC_1(VAR_0, VAR_0->cpu);

 VAR_0->idx++;
 if (VAR_1)
  FUNC_0(VAR_1, ((void*)0));
}
