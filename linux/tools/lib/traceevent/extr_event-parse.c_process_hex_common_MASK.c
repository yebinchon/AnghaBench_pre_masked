
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; int * size; } ;
struct tep_print_arg {int type; TYPE_1__ hex; } ;
struct tep_event {int dummy; } ;
typedef enum tep_print_arg_type { ____Placeholder_tep_print_arg_type } tep_print_arg_type ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tep_event*,char*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tep_print_arg*,int ,int) ;
 int FUNC_3 (char**) ;

__attribute__((used)) static enum tep_event_type
FUNC_4(struct tep_event *VAR_1, struct tep_print_arg *VAR_2,
     char **VAR_3, enum tep_print_arg_type VAR_4)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->type = VAR_4;

 if (FUNC_0(VAR_1, ",", &VAR_2->hex.field))
  goto out;

 if (FUNC_0(VAR_1, ")", &VAR_2->hex.size))
  goto free_field;

 return FUNC_3(VAR_3);

free_field:
 FUNC_1(VAR_2->hex.field);
 VAR_2->hex.field = ((void*)0);
out:
 *VAR_3 = ((void*)0);
 return VAR_0;
}
