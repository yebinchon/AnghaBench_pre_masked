
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tracer ;
struct trace_array {int dummy; } ;
struct seq_file {struct trace_array* private; } ;
typedef scalar_t__ loff_t ;


 void* FUNC_0 (struct trace_array*,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct seq_file*,void*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct trace_array *VAR_4 = VAR_2->private;
 struct tracer *VAR_5;
 loff_t VAR_6 = 0;

 FUNC_1(&VAR_1);

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 for (; VAR_5 && VAR_6 < *VAR_3; VAR_5 = FUNC_2(VAR_2, VAR_5, &VAR_6))
   ;

 return VAR_5;
}
