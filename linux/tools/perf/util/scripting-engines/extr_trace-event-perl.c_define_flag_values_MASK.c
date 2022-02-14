
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_print_flag_sym {struct tep_print_flag_sym* next; int str; int value; } ;


 int FUNC_0 (char const*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tep_print_flag_sym *VAR_0,
          const char *VAR_1,
          const char *VAR_2)
{
 FUNC_0(VAR_1, VAR_2, VAR_0->value, VAR_0->str);
 if (VAR_0->next)
  FUNC_1(VAR_0->next, VAR_1, VAR_2);
}
