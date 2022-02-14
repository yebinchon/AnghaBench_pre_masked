
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int regs; } ;
struct perf_sample {TYPE_4__ user_stack; TYPE_3__ user_regs; } ;
struct TYPE_5__ {int sample_type; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct callchain_cursor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct callchain_cursor*,struct thread*,struct perf_sample*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct thread *VAR_3,
         struct callchain_cursor *VAR_4,
         struct evsel *VAR_5,
         struct perf_sample *VAR_6,
         int VAR_7)
{

 if (!((VAR_5->core.attr.sample_type & VAR_0) &&
       (VAR_5->core.attr.sample_type & VAR_1)))
  return 0;


 if ((!VAR_6->user_regs.regs) ||
     (!VAR_6->user_stack.size))
  return 0;

 return FUNC_0(VAR_2, VAR_4,
       VAR_3, VAR_6, VAR_7);
}
