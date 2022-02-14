
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_int {int* variable; int boot_val; int reset_val; int min; int max; int gen; int show_hook; int assign_hook; int check_hook; } ;
typedef int GucShowHook ;
typedef int GucIntCheckHook ;
typedef int GucIntAssignHook ;
typedef int GucContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char const*,char const*,int ,int,int ,int) ;

void
FUNC_2(const char *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      int *VAR_4,
      int VAR_5,
      int VAR_6,
      int VAR_7,
      GucContext VAR_8,
      int VAR_9,
      GucIntCheckHook VAR_10,
      GucIntAssignHook VAR_11,
      GucShowHook VAR_12)
{
 struct config_int *VAR_13;

 VAR_13 = (struct config_int *)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8, VAR_9,
        VAR_0, sizeof(struct config_int));
 VAR_13->variable = VAR_4;
 VAR_13->boot_val = VAR_5;
 VAR_13->reset_val = VAR_5;
 VAR_13->min = VAR_6;
 VAR_13->max = VAR_7;
 VAR_13->check_hook = VAR_10;
 VAR_13->assign_hook = VAR_11;
 VAR_13->show_hook = VAR_12;
 FUNC_0(&VAR_13->gen);
}
