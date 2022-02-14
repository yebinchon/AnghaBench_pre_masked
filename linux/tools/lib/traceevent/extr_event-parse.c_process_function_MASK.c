
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_arg {int dummy; } ;
struct tep_function_handler {int dummy; } ;
struct tep_event {int tep; } ;
typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct tep_event*,char*,char*) ;
 struct tep_function_handler* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_4 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_5 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_6 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_7 (struct tep_event*,struct tep_function_handler*,struct tep_print_arg*,char**) ;
 int FUNC_8 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_9 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_10 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_11 (struct tep_event*,struct tep_print_arg*,char**) ;
 int FUNC_12 (struct tep_event*,struct tep_print_arg*,char**) ;
 scalar_t__ FUNC_13 (char*,char*) ;

__attribute__((used)) static enum tep_event_type
FUNC_14(struct tep_event *VAR_3, struct tep_print_arg *VAR_4,
   char *VAR_5, char **VAR_6)
{
 struct tep_function_handler *VAR_7;

 if (FUNC_13(VAR_5, "__print_flags") == 0) {
  FUNC_2(VAR_5);
  VAR_1 = 1;
  return FUNC_6(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__print_symbolic") == 0) {
  FUNC_2(VAR_5);
  VAR_2 = 1;
  return FUNC_12(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__print_hex") == 0) {
  FUNC_2(VAR_5);
  return FUNC_8(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__print_hex_str") == 0) {
  FUNC_2(VAR_5);
  return FUNC_9(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__print_array") == 0) {
  FUNC_2(VAR_5);
  return FUNC_10(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__get_str") == 0) {
  FUNC_2(VAR_5);
  return FUNC_11(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__get_bitmask") == 0) {
  FUNC_2(VAR_5);
  return FUNC_3(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__get_dynamic_array") == 0) {
  FUNC_2(VAR_5);
  return FUNC_4(VAR_3, VAR_4, VAR_6);
 }
 if (FUNC_13(VAR_5, "__get_dynamic_array_len") == 0) {
  FUNC_2(VAR_5);
  return FUNC_5(VAR_3, VAR_4, VAR_6);
 }

 VAR_7 = FUNC_1(VAR_3->tep, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_5);
  return FUNC_7(VAR_3, VAR_7, VAR_4, VAR_6);
 }

 FUNC_0(VAR_3, "function %s not defined", VAR_5);
 FUNC_2(VAR_5);
 return VAR_0;
}
