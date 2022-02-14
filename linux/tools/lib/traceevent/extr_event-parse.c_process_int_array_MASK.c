
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; int * count; int * el_size; } ;
struct tep_print_arg {TYPE_1__ int_array; int type; } ;
struct tep_event {int dummy; } ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tep_event*,char*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tep_print_arg*,int ,int) ;
 int FUNC_3 (char**) ;

__attribute__((used)) static enum tep_event_type
FUNC_4(struct tep_event *VAR_2, struct tep_print_arg *VAR_3, char **VAR_4)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->type = VAR_1;

 if (FUNC_0(VAR_2, ",", &VAR_3->int_array.field))
  goto out;

 if (FUNC_0(VAR_2, ",", &VAR_3->int_array.count))
  goto free_field;

 if (FUNC_0(VAR_2, ")", &VAR_3->int_array.el_size))
  goto free_size;

 return FUNC_3(VAR_4);

free_size:
 FUNC_1(VAR_3->int_array.count);
 VAR_3->int_array.count = ((void*)0);
free_field:
 FUNC_1(VAR_3->int_array.field);
 VAR_3->int_array.field = ((void*)0);
out:
 *VAR_4 = ((void*)0);
 return VAR_0;
}
