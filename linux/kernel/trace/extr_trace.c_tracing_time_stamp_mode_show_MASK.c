
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct seq_file {struct trace_array* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->private;

 FUNC_0(&VAR_0);

 if (FUNC_2(VAR_3->trace_buffer.buffer))
  FUNC_3(VAR_1, "delta [absolute]\n");
 else
  FUNC_3(VAR_1, "[delta] absolute\n");

 FUNC_1(&VAR_0);

 return 0;
}
