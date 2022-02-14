
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_opt {int name; } ;
struct tracer_flags {int dummy; } ;
struct trace_option_dentry {int entry; struct trace_array* tr; struct tracer_opt* opt; struct tracer_flags* flags; } ;
struct trace_array {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,int,struct dentry*,struct trace_option_dentry*,int *) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (struct trace_array*) ;

__attribute__((used)) static void
FUNC_2(struct trace_array *VAR_1,
    struct trace_option_dentry *VAR_2,
    struct tracer_flags *VAR_3,
    struct tracer_opt *VAR_4)
{
 struct dentry *VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (!VAR_5)
  return;

 VAR_2->flags = VAR_3;
 VAR_2->opt = VAR_4;
 VAR_2->tr = VAR_1;

 VAR_2->entry = FUNC_0(VAR_4->name, 0644, VAR_5, VAR_2,
        &VAR_0);

}
