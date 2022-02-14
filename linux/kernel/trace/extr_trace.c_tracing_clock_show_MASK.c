
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trace_array {int clock_id; } ;
struct seq_file {struct trace_array* private; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct seq_file*,char*,char*,char*,int ,char*) ;
 int FUNC_2 (struct seq_file*,char) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->private;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_1,
   "%s%s%s%s", VAR_4 ? " " : "",
   VAR_4 == VAR_3->clock_id ? "[" : "", VAR_0[VAR_4].name,
   VAR_4 == VAR_3->clock_id ? "]" : "");
 FUNC_2(VAR_1, '\n');

 return 0;
}
