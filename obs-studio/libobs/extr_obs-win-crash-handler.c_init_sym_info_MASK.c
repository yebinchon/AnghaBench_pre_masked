
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exception_handler_data {TYPE_1__* sym_info; int process; int (* sym_refresh_module_list ) (int ) ;int (* sym_initialize ) (int ,int *,int) ;int (* sym_set_options ) (int) ;} ;
struct TYPE_2__ {int SizeOfStruct; int MaxNameLen; } ;
typedef int SYMBOL_INFO ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_4(struct exception_handler_data *VAR_5)
{
 VAR_5->sym_set_options(VAR_3 | VAR_1 |
         VAR_2);

 if (!VAR_4)
  VAR_5->sym_initialize(VAR_5->process, ((void*)0), 1);
 else
  VAR_5->sym_refresh_module_list(VAR_5->process);

 VAR_5->sym_info = FUNC_0(VAR_0, sizeof(*VAR_5->sym_info) + 256);
 VAR_5->sym_info->SizeOfStruct = sizeof(SYMBOL_INFO);
 VAR_5->sym_info->MaxNameLen = 256;
}
