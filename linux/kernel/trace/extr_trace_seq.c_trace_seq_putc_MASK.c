
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int full; int seq; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (int *,unsigned char) ;

void FUNC_3(struct trace_seq *VAR_0, unsigned char VAR_1)
{
 if (VAR_0->full)
  return;

 FUNC_1(VAR_0);

 if (FUNC_0(VAR_0) < 1) {
  VAR_0->full = 1;
  return;
 }

 FUNC_2(&VAR_0->seq, VAR_1);
}
