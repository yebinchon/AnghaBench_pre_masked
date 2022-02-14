
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {scalar_t__ readpos; scalar_t__ len; } ;


 int FUNC_0 (struct trace_seq*) ;

void FUNC_1(struct trace_seq *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0);
 VAR_0->len = 0;
 VAR_0->readpos = 0;
}
