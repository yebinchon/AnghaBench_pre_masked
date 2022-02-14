
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* no_inherit; } ;
struct trace {int show_zeros; int args_alignment; TYPE_1__ opts; void* show_string_prefix; void* show_arg_names; void* show_duration; void* show_tstamp; int evlist; } ;
struct option {int dummy; } ;


 struct option FUNC_0 (char,char*,int *,char*,char*,scalar_t__ (*) (struct option*,char const*,int )) ;
 scalar_t__ FUNC_1 (struct option*,char const*,int ) ;
 void* FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (int*,char const*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct trace *VAR_3 = VAR_2;
 int VAR_4 = 0;

 if (!FUNC_5(VAR_0, "trace.add_events")) {
  struct option VAR_5 = FUNC_0('e', "event", &VAR_3->evlist, "event",
            "event selector. use 'perf list' to list available events",
            FUNC_1);




  if (FUNC_1(&VAR_5, VAR_1, 0))
   VAR_4 = -1;
 } else if (!FUNC_5(VAR_0, "trace.show_timestamp")) {
  VAR_3->show_tstamp = FUNC_2(VAR_0, VAR_1);
 } else if (!FUNC_5(VAR_0, "trace.show_duration")) {
  VAR_3->show_duration = FUNC_2(VAR_0, VAR_1);
 } else if (!FUNC_5(VAR_0, "trace.show_arg_names")) {
  VAR_3->show_arg_names = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3->show_arg_names)
   VAR_3->show_zeros = 1;
 } else if (!FUNC_5(VAR_0, "trace.show_zeros")) {
  bool VAR_6 = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3->show_arg_names && !VAR_6) {
   FUNC_4("trace.show_zeros has to be set when trace.show_arg_names=no\n");
   goto out;
  }
  VAR_3->show_zeros = VAR_6;
 } else if (!FUNC_5(VAR_0, "trace.show_prefix")) {
  VAR_3->show_string_prefix = FUNC_2(VAR_0, VAR_1);
 } else if (!FUNC_5(VAR_0, "trace.no_inherit")) {
  VAR_3->opts.no_inherit = FUNC_2(VAR_0, VAR_1);
 } else if (!FUNC_5(VAR_0, "trace.args_alignment")) {
  int VAR_7 = 0;
  if (FUNC_3(&VAR_7, VAR_0, VAR_1) == 0)
   VAR_3->args_alignment = VAR_7;
 }
out:
 return VAR_4;
}
