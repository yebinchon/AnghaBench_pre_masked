
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_handler_data {int dbghelp; int module_list; int module_name; int cpu_info; int str; int sym_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct exception_handler_data *VAR_0)
{
 FUNC_1(VAR_0->sym_info);
 FUNC_2(&VAR_0->str);
 FUNC_2(&VAR_0->cpu_info);
 FUNC_2(&VAR_0->module_name);
 FUNC_2(&VAR_0->module_list);
 FUNC_0(VAR_0->dbghelp);
}
