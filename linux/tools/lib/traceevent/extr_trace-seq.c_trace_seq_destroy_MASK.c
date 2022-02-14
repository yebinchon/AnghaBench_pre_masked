
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int buffer; } ;


 int FUNC_0 (struct trace_seq*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct trace_seq *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1->buffer);
 VAR_1->buffer = VAR_0;
}
