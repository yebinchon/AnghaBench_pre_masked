
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hist_entry {scalar_t__ thread; TYPE_1__* callchain; } ;
typedef int s64 ;
typedef int (* hpp_field_fn ) (struct hist_entry*) ;
struct TYPE_6__ {scalar_t__ order; } ;
struct TYPE_5__ {int use_callchain; scalar_t__ cumulate_callchain; } ;
struct TYPE_4__ {int max_depth; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hist_entry*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_3, struct hist_entry *VAR_4,
      hpp_field_fn VAR_5)
{
 s64 VAR_6 = 0;

 if (VAR_2.cumulate_callchain) {



  VAR_6 = FUNC_0(VAR_5(VAR_3), VAR_5(VAR_4));
  if (VAR_6)
   return VAR_6;

  if (VAR_3->thread != VAR_4->thread || !FUNC_1(VAR_3) || !VAR_2.use_callchain)
   return 0;

  VAR_6 = VAR_4->callchain->max_depth - VAR_3->callchain->max_depth;
  if (VAR_1.order == VAR_0)
   VAR_6 = -VAR_6;
 }
 return VAR_6;
}
