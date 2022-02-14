
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_event {scalar_t__ ref; } ;
struct dyn_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dyn_event*) ;
 int FUNC_1 (struct synth_event*) ;
 struct synth_event* FUNC_2 (struct dyn_event*) ;
 int FUNC_3 (struct synth_event*) ;

__attribute__((used)) static int FUNC_4(struct dyn_event *VAR_1)
{
 struct synth_event *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (VAR_2->ref)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 return 0;
}
