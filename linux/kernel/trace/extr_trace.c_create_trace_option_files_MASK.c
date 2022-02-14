
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_opt {scalar_t__ name; } ;
struct tracer_flags {struct tracer_opt* opts; } ;
struct tracer {struct tracer_flags* flags; } ;
struct trace_options {struct trace_option_dentry* topts; struct tracer* tracer; } ;
struct trace_option_dentry {int * entry; } ;
struct trace_array {int nr_topts; struct trace_options* topts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct trace_array*,struct trace_option_dentry*,struct tracer_flags*,struct tracer_opt*) ;
 struct trace_option_dentry* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct trace_option_dentry*) ;
 struct trace_options* FUNC_5 (struct trace_options*,int,int ) ;
 int FUNC_6 (struct tracer*,struct trace_array*) ;

__attribute__((used)) static void
FUNC_7(struct trace_array *VAR_1, struct tracer *VAR_2)
{
 struct trace_option_dentry *VAR_3;
 struct trace_options *VAR_4;
 struct tracer_flags *VAR_5;
 struct tracer_opt *VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_2)
  return;

 VAR_5 = VAR_2->flags;

 if (!VAR_5 || !VAR_5->opts)
  return;





 if (!FUNC_6(VAR_2, VAR_1))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_1->nr_topts; VAR_8++) {

  if (FUNC_1(VAR_1->topts[VAR_8].tracer->flags == VAR_2->flags))
   return;
 }

 VAR_6 = VAR_5->opts;

 for (VAR_7 = 0; VAR_6[VAR_7].name; VAR_7++)
  ;

 VAR_3 = FUNC_3(VAR_7 + 1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_5(VAR_1->topts, sizeof(*VAR_1->topts) * (VAR_1->nr_topts + 1),
       VAR_0);
 if (!VAR_4) {
  FUNC_4(VAR_3);
  return;
 }

 VAR_1->topts = VAR_4;
 VAR_1->topts[VAR_1->nr_topts].tracer = VAR_2;
 VAR_1->topts[VAR_1->nr_topts].topts = VAR_3;
 VAR_1->nr_topts++;

 for (VAR_7 = 0; VAR_6[VAR_7].name; VAR_7++) {
  FUNC_2(VAR_1, &VAR_3[VAR_7], VAR_5,
      &VAR_6[VAR_7]);
  FUNC_0(VAR_3[VAR_7].entry == ((void*)0),
     "Failed to create trace option: %s",
     VAR_6[VAR_7].name);
 }
}
