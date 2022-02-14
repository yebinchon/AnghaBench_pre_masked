
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_flag_sym {struct tep_print_flag_sym* str; struct tep_print_flag_sym* value; struct tep_print_flag_sym* next; } ;


 int FUNC_0 (struct tep_print_flag_sym*) ;

__attribute__((used)) static void FUNC_1(struct tep_print_flag_sym *VAR_0)
{
 struct tep_print_flag_sym *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->value);
  FUNC_0(VAR_0->str);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
