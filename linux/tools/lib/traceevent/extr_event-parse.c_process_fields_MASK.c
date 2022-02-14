
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_flag_sym {struct tep_print_flag_sym* next; int * str; int * value; } ;
struct tep_print_arg {int dummy; } ;
struct tep_event {int dummy; } ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tep_print_arg* FUNC_0 () ;
 char* FUNC_1 (struct tep_print_arg*) ;
 struct tep_print_flag_sym* FUNC_2 (int,int) ;
 int FUNC_3 (struct tep_print_arg*) ;
 int FUNC_4 (struct tep_print_flag_sym*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_7 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_8 (char**) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 void* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int,char*,int,char*) ;

__attribute__((used)) static enum tep_event_type
FUNC_12(struct tep_event *VAR_3, struct tep_print_flag_sym **VAR_4, char **VAR_5)
{
 enum tep_event_type VAR_6;
 struct tep_print_arg *VAR_7 = ((void*)0);
 struct tep_print_flag_sym *VAR_8;
 char *VAR_9 = *VAR_5;
 char *VAR_10;

 do {
  FUNC_5(VAR_9);
  VAR_6 = FUNC_8(&VAR_9);
  if (FUNC_11(VAR_6, VAR_9, VAR_2, "{"))
   break;

  VAR_7 = FUNC_0();
  if (!VAR_7)
   goto out_free;

  FUNC_5(VAR_9);
  VAR_6 = FUNC_6(VAR_3, VAR_7, &VAR_9);

  if (VAR_6 == VAR_2)
   VAR_6 = FUNC_7(VAR_3, VAR_7, &VAR_9);

  if (VAR_6 == VAR_1)
   goto out_free;

  if (FUNC_11(VAR_6, VAR_9, VAR_0, ","))
   goto out_free;

  VAR_8 = FUNC_2(1, sizeof(*VAR_8));
  if (!VAR_8)
   goto out_free;

  VAR_10 = FUNC_1(VAR_7);
  if (VAR_10 == ((void*)0))
   goto out_free_field;
  VAR_8->value = FUNC_10(VAR_10);
  if (VAR_8->value == ((void*)0))
   goto out_free_field;

  FUNC_3(VAR_7);
  VAR_7 = FUNC_0();
  if (!VAR_7)
   goto out_free;

  FUNC_5(VAR_9);
  VAR_6 = FUNC_6(VAR_3, VAR_7, &VAR_9);
  if (FUNC_11(VAR_6, VAR_9, VAR_2, "}"))
   goto out_free_field;

  VAR_10 = FUNC_1(VAR_7);
  if (VAR_10 == ((void*)0))
   goto out_free_field;
  VAR_8->str = FUNC_10(VAR_10);
  if (VAR_8->str == ((void*)0))
   goto out_free_field;
  FUNC_3(VAR_7);
  VAR_7 = ((void*)0);

  *VAR_4 = VAR_8;
  VAR_4 = &VAR_8->next;

  FUNC_5(VAR_9);
  VAR_6 = FUNC_8(&VAR_9);
 } while (VAR_6 == VAR_0 && FUNC_9(VAR_9, ",") == 0);

 *VAR_5 = VAR_9;
 return VAR_6;

out_free_field:
 FUNC_4(VAR_8);
out_free:
 FUNC_3(VAR_7);
 FUNC_5(VAR_9);
 *VAR_5 = ((void*)0);

 return VAR_1;
}
