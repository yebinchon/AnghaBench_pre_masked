
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_buffer_struct {int nesting; char** buffer; } ;


 int FUNC_0 () ;
 struct trace_buffer_struct* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_2(void)
{
 struct trace_buffer_struct *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1 || VAR_1->nesting >= 4)
  return ((void*)0);

 VAR_1->nesting++;


 FUNC_0();
 return &VAR_1->buffer[VAR_1->nesting][0];
}
