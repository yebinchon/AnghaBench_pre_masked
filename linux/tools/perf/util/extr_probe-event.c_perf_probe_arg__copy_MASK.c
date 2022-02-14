
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_arg_field {struct perf_probe_arg_field* next; int ref; int index; void* name; } ;
struct perf_probe_arg {struct perf_probe_arg_field* field; void* type; void* var; void* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 struct perf_probe_arg_field* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct perf_probe_arg *VAR_2,
    struct perf_probe_arg *VAR_3)
{
 struct perf_probe_arg_field *VAR_4, **VAR_5;

 VAR_2->name = FUNC_0(VAR_3->name, VAR_1);
 VAR_2->var = FUNC_0(VAR_3->var, VAR_1);
 VAR_2->type = FUNC_0(VAR_3->type, VAR_1);

 VAR_4 = VAR_3->field;
 VAR_5 = &(VAR_2->field);
 while (VAR_4) {
  *VAR_5 = FUNC_1(sizeof(*VAR_4));
  if (!*VAR_5)
   goto out_err;
  (*VAR_5)->name = FUNC_0(VAR_4->name, VAR_1);
  (*VAR_5)->index = VAR_4->index;
  (*VAR_5)->ref = VAR_4->ref;
  VAR_4 = VAR_4->next;
  VAR_5 = &((*VAR_5)->next);
 }
 return 0;
out_err:
 return -VAR_0;
}
