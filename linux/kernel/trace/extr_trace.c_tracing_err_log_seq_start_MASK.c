
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int err_log; } ;
struct seq_file {struct trace_array* private; } ;
typedef int loff_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->private;

 FUNC_0(&VAR_0);

 return FUNC_1(&VAR_3->err_log, *VAR_2);
}
