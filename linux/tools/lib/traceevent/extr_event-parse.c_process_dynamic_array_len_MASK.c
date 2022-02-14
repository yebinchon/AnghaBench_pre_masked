
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; struct tep_format_field* field; } ;
struct tep_print_arg {TYPE_1__ dynarray; int type; } ;
struct tep_format_field {int dummy; } ;
struct tep_event {int dummy; } ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char**) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char**) ;
 struct tep_format_field* FUNC_4 (struct tep_event*,char*) ;

__attribute__((used)) static enum tep_event_type
FUNC_5(struct tep_event *VAR_4, struct tep_print_arg *VAR_5,
     char **VAR_6)
{
 struct tep_format_field *VAR_7;
 enum tep_event_type VAR_8;
 char *VAR_9;

 if (FUNC_1(VAR_2, &VAR_9) < 0)
  goto out_free;

 VAR_5->type = VAR_3;


 VAR_7 = FUNC_4(VAR_4, VAR_9);
 if (!VAR_7)
  goto out_free;

 VAR_5->dynarray.field = VAR_7;
 VAR_5->dynarray.index = 0;

 if (FUNC_2(VAR_0, ")") < 0)
  goto out_err;

 VAR_8 = FUNC_3(&VAR_9);
 *VAR_6 = VAR_9;

 return VAR_8;

 out_free:
 FUNC_0(VAR_9);
 out_err:
 *VAR_6 = ((void*)0);
 return VAR_1;
}
