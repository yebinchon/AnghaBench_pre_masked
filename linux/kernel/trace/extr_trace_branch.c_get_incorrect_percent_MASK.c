
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_branch_data {int correct; int incorrect; } ;



__attribute__((used)) static inline long FUNC_0(struct ftrace_branch_data *VAR_0)
{
 long VAR_1;

 if (VAR_0->correct) {
  VAR_1 = VAR_0->incorrect * 100;
  VAR_1 /= VAR_0->correct + VAR_0->incorrect;
 } else
  VAR_1 = VAR_0->incorrect ? 100 : -1;

 return VAR_1;
}
