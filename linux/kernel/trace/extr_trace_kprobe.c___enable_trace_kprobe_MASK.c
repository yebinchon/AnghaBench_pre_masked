
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kp; } ;
struct trace_kprobe {TYPE_1__ rp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct trace_kprobe*) ;
 scalar_t__ FUNC_3 (struct trace_kprobe*) ;
 scalar_t__ FUNC_4 (struct trace_kprobe*) ;

__attribute__((used)) static inline int FUNC_5(struct trace_kprobe *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_3(VAR_0) && !FUNC_2(VAR_0)) {
  if (FUNC_4(VAR_0))
   VAR_1 = FUNC_1(&VAR_0->rp);
  else
   VAR_1 = FUNC_0(&VAR_0->rp.kp);
 }

 return VAR_1;
}
