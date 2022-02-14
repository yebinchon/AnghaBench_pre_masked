
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int full; int seq; } ;


 unsigned int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (int *,void const*,unsigned int) ;

void FUNC_3(struct trace_seq *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 if (VAR_0->full)
  return;

 FUNC_1(VAR_0);

 if (VAR_2 > FUNC_0(VAR_0)) {
  VAR_0->full = 1;
  return;
 }

 FUNC_2(&VAR_0->seq, VAR_1, VAR_2);
}
