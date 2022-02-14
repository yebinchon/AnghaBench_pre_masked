
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct hist_trigger_data {TYPE_3__* attrs; TYPE_1__* event_file; } ;
struct TYPE_5__ {char** name; char** expr; unsigned int n_vars; } ;
struct TYPE_6__ {unsigned int n_assignments; char** assignment_str; TYPE_2__ var_defs; } ;
struct TYPE_4__ {struct trace_array* tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hist_trigger_data*) ;
 int FUNC_2 (struct trace_array*,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int FUNC_6(struct hist_trigger_data *VAR_6)
{
 struct trace_array *VAR_7 = VAR_6->event_file->tr;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_6->attrs->n_assignments; VAR_12++) {
  VAR_9 = VAR_6->attrs->assignment_str[VAR_12];
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   VAR_11 = FUNC_5(&VAR_9, ",");
   if (!VAR_11)
    break;

   VAR_10 = FUNC_5(&VAR_11, "=");
   if (!VAR_10 || !VAR_11) {
    FUNC_2(VAR_7, VAR_3,
      FUNC_0(VAR_10));
    VAR_15 = -VAR_0;
    goto free;
   }

   if (VAR_14 == VAR_5) {
    FUNC_2(VAR_7, VAR_4, FUNC_0(VAR_10));
    VAR_15 = -VAR_0;
    goto free;
   }

   VAR_8 = FUNC_4(VAR_10, VAR_2);
   if (!VAR_8) {
    VAR_15 = -VAR_1;
    goto free;
   }
   VAR_6->attrs->var_defs.name[VAR_14] = VAR_8;

   VAR_8 = FUNC_4(VAR_11, VAR_2);
   if (!VAR_8) {
    FUNC_3(VAR_6->attrs->var_defs.name[VAR_14]);
    VAR_15 = -VAR_1;
    goto free;
   }
   VAR_6->attrs->var_defs.expr[VAR_14++] = VAR_8;

   VAR_6->attrs->var_defs.n_vars = VAR_14;
  }
 }

 return VAR_15;
 free:
 FUNC_1(VAR_6);

 return VAR_15;
}
