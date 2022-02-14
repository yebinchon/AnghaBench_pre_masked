
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


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct hist_entry*) ;
 struct evsel* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,unsigned int,int *) ;
 int FUNC_3 (char*,size_t,char*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(struct hist_entry *VAR_1, char *VAR_2,
        size_t VAR_3, unsigned int VAR_4)
{
 struct evsel *VAR_5;

 VAR_5 = FUNC_1(VAR_1->hists);
 if (VAR_5->core.attr.type != VAR_0)
  return FUNC_3(VAR_2, VAR_3, "%-.*s", VAR_4, "N/A");

 if (VAR_1->trace_output == ((void*)0))
  VAR_1->trace_output = FUNC_0(VAR_1);
 return FUNC_2(VAR_2, VAR_3, "%-.*s", VAR_4, VAR_1->trace_output);
}
