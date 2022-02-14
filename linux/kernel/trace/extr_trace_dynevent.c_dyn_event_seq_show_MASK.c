
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dyn_event {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* show ) (struct seq_file*,struct dyn_event*) ;} ;


 int FUNC_0 (struct seq_file*,struct dyn_event*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct dyn_event *VAR_2 = VAR_1;

 if (VAR_2 && VAR_2->ops)
  return VAR_2->ops->show(VAR_0, VAR_2);

 return 0;
}
