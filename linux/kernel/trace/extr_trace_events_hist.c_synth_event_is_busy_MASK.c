
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_event {scalar_t__ ref; } ;
struct dyn_event {int dummy; } ;


 struct synth_event* FUNC_0 (struct dyn_event*) ;

__attribute__((used)) static bool FUNC_1(struct dyn_event *VAR_0)
{
 struct synth_event *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ref != 0;
}
