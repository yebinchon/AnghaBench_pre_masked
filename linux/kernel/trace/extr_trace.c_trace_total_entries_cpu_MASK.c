
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int trace_buffer; } ;


 int FUNC_0 (int *,unsigned long*,unsigned long*,int) ;
 struct trace_array VAR_0 ;

unsigned long FUNC_1(struct trace_array *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (!VAR_1)
  VAR_1 = &VAR_0;

 FUNC_0(&VAR_1->trace_buffer, &VAR_3, &VAR_4, VAR_2);

 return VAR_4;
}
