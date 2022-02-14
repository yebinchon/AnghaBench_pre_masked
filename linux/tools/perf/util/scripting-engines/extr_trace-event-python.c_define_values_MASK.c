
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_flag_sym {struct tep_print_flag_sym* next; int str; int value; } ;
typedef enum tep_print_arg_type { ____Placeholder_tep_print_arg_type } tep_print_arg_type ;


 int FUNC_0 (int,char const*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(enum tep_print_arg_type VAR_0,
     struct tep_print_flag_sym *VAR_1,
     const char *VAR_2,
     const char *VAR_3)
{
 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1->value,
       VAR_1->str);

 if (VAR_1->next)
  FUNC_1(VAR_0, VAR_1->next, VAR_2, VAR_3);
}
