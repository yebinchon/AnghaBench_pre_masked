
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_print_flag_sym {struct tep_print_flag_sym* next; int str; int value; } ;


 int FUNC_0 (struct trace_seq*,char*,int ,int ) ;
 int FUNC_1 (struct trace_seq*,char*) ;

__attribute__((used)) static void FUNC_2(struct trace_seq *VAR_0, struct tep_print_flag_sym *VAR_1)
{
 FUNC_0(VAR_0, "{ %s, %s }", VAR_1->value, VAR_1->str);
 if (VAR_1->next) {
  FUNC_1(VAR_0, ", ");
  FUNC_2(VAR_0, VAR_1->next);
 }
}
