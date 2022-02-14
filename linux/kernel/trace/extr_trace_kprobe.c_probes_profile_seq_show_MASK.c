
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nmissed; } ;
struct TYPE_4__ {TYPE_1__ kp; } ;
struct trace_kprobe {TYPE_2__ rp; int tp; } ;
struct seq_file {int dummy; } ;
struct dyn_event {int dummy; } ;


 int FUNC_0 (struct dyn_event*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ) ;
 struct trace_kprobe* FUNC_2 (struct dyn_event*) ;
 int FUNC_3 (struct trace_kprobe*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct dyn_event *VAR_2 = VAR_1;
 struct trace_kprobe *VAR_3;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_0, "  %-44s %15lu %15lu\n",
     FUNC_4(&VAR_3->tp),
     FUNC_3(VAR_3),
     VAR_3->rp.kp.nmissed);

 return 0;
}
