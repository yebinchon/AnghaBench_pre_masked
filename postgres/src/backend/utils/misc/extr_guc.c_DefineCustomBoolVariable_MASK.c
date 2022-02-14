
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_bool {int* variable; int boot_val; int reset_val; int gen; int show_hook; int assign_hook; int check_hook; } ;
typedef int GucShowHook ;
typedef int GucContext ;
typedef int GucBoolCheckHook ;
typedef int GucBoolAssignHook ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char const*,char const*,int ,int,int ,int) ;

void
FUNC_2(const char *VAR_1,
       const char *VAR_2,
       const char *VAR_3,
       bool *VAR_4,
       bool VAR_5,
       GucContext VAR_6,
       int VAR_7,
       GucBoolCheckHook VAR_8,
       GucBoolAssignHook VAR_9,
       GucShowHook VAR_10)
{
 struct config_bool *VAR_11;

 VAR_11 = (struct config_bool *)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7,
        VAR_0, sizeof(struct config_bool));
 VAR_11->variable = VAR_4;
 VAR_11->boot_val = VAR_5;
 VAR_11->reset_val = VAR_5;
 VAR_11->check_hook = VAR_8;
 VAR_11->assign_hook = VAR_9;
 VAR_11->show_hook = VAR_10;
 FUNC_0(&VAR_11->gen);
}
