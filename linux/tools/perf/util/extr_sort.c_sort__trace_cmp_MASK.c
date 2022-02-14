
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {int * trace_output; int hists; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct hist_entry*) ;
 struct evsel* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int64_t
FUNC_3(struct hist_entry *VAR_1, struct hist_entry *VAR_2)
{
 struct evsel *VAR_3;

 VAR_3 = FUNC_1(VAR_1->hists);
 if (VAR_3->core.attr.type != VAR_0)
  return 0;

 if (VAR_1->trace_output == ((void*)0))
  VAR_1->trace_output = FUNC_0(VAR_1);
 if (VAR_2->trace_output == ((void*)0))
  VAR_2->trace_output = FUNC_0(VAR_2);

 return FUNC_2(VAR_2->trace_output, VAR_1->trace_output);
}
