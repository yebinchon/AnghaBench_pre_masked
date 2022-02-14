
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_opt {int bit; } ;
struct tracer_flags {int val; struct tracer* trace; } ;
struct tracer {int (* set_flag ) (struct trace_array*,int ,int ,int) ;} ;
struct trace_array {int dummy; } ;


 int FUNC_0 (struct trace_array*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct trace_array *VAR_0,
          struct tracer_flags *VAR_1,
          struct tracer_opt *VAR_2, int VAR_3)
{
 struct tracer *VAR_4 = VAR_1->trace;
 int VAR_5;

 VAR_5 = VAR_4->set_flag(VAR_0, VAR_1->val, VAR_2->bit, !VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_3)
  VAR_1->val &= ~VAR_2->bit;
 else
  VAR_1->val |= VAR_2->bit;
 return 0;
}
