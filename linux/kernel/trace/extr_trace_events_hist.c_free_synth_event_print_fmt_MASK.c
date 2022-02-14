
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int * print_fmt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct trace_event_call *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->print_fmt);
  VAR_0->print_fmt = ((void*)0);
 }
}
