
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int system; } ;
struct synth_event {TYPE_1__ class; } ;
struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;


 int FUNC_0 (struct seq_file*,struct synth_event*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 struct synth_event* FUNC_2 (struct dyn_event*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct dyn_event *VAR_1)
{
 struct synth_event *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0, "s:%s/", VAR_2->class.system);

 return FUNC_0(VAR_0, VAR_2);
}
