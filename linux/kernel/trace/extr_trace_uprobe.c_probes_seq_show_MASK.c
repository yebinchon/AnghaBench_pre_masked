
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;


 int FUNC_0 (struct dyn_event*) ;
 int FUNC_1 (struct seq_file*,struct dyn_event*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct dyn_event *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_2))
  return 0;

 return FUNC_1(VAR_0, VAR_2);
}
