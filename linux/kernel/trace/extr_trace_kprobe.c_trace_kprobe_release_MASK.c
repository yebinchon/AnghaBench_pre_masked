
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int dummy; } ;
struct dyn_event {int dummy; } ;


 int FUNC_0 (struct trace_kprobe*) ;
 struct trace_kprobe* FUNC_1 (struct dyn_event*) ;
 int FUNC_2 (struct trace_kprobe*) ;

__attribute__((used)) static int FUNC_3(struct dyn_event *VAR_0)
{
 struct trace_kprobe *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  FUNC_0(VAR_1);
 return VAR_2;
}
