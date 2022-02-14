
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_arg {int dummy; } ;
struct tep_event {int dummy; } ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int FUNC_0 (struct tep_event*,struct tep_print_arg*,char**,int) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static enum tep_event_type
FUNC_2(struct tep_event *VAR_0, struct tep_print_arg *VAR_1, char **VAR_2)
{
 enum tep_event_type VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(&VAR_4);
 *VAR_2 = VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
