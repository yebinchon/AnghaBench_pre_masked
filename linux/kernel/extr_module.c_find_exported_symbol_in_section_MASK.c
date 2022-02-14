
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsearch {int start; int stop; } ;
struct module {int dummy; } ;
struct kernel_symbol {int dummy; } ;
struct find_symbol_arg {int name; } ;


 struct kernel_symbol* FUNC_0 (int ,int,int,int,int ) ;
 scalar_t__ FUNC_1 (struct symsearch const*,struct module*,struct kernel_symbol*,void*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(const struct symsearch *VAR_1,
         struct module *VAR_2,
         void *VAR_3)
{
 struct find_symbol_arg *VAR_4 = VAR_3;
 struct kernel_symbol *VAR_5;

 VAR_5 = FUNC_0(VAR_4->name, VAR_1->start, VAR_1->stop - VAR_1->start,
   sizeof(struct kernel_symbol), VAR_0);

 if (VAR_5 != ((void*)0) && FUNC_1(VAR_1, VAR_2,
       VAR_5 - VAR_1->start, VAR_3))
  return 1;

 return 0;
}
