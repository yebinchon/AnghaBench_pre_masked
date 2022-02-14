
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_enum_entry {int dummy; } ;
struct config_enum {int* variable; int boot_val; int reset_val; int gen; int show_hook; int assign_hook; int check_hook; struct config_enum_entry const* options; } ;
typedef int GucShowHook ;
typedef int GucEnumCheckHook ;
typedef int GucEnumAssignHook ;
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
       const struct config_enum_entry *VAR_6,
       GucContext VAR_7,
       int VAR_8,
       GucEnumCheckHook VAR_9,
       GucEnumAssignHook VAR_10,
       GucShowHook VAR_11)
{
 struct config_enum *VAR_12;

 VAR_12 = (struct config_enum *)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, VAR_8,
        VAR_0, sizeof(struct config_enum));
 VAR_12->variable = VAR_4;
 VAR_12->boot_val = VAR_5;
 VAR_12->reset_val = VAR_5;
 VAR_12->options = VAR_6;
 VAR_12->check_hook = VAR_9;
 VAR_12->assign_hook = VAR_10;
 VAR_12->show_hook = VAR_11;
 FUNC_0(&VAR_12->gen);
}
