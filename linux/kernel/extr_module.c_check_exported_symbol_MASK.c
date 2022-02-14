
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsearch {scalar_t__ licence; int * start; int crcs; scalar_t__ unused; } ;
struct module {int dummy; } ;
struct find_symbol_arg {int * sym; int crc; struct module* owner; int name; scalar_t__ warn; int gplok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static bool FUNC_2(const struct symsearch *VAR_2,
      struct module *VAR_3,
      unsigned int VAR_4, void *VAR_5)
{
 struct find_symbol_arg *VAR_6 = VAR_5;

 if (!VAR_6->gplok) {
  if (VAR_2->licence == VAR_0)
   return 0;
  if (VAR_2->licence == VAR_1 && VAR_6->warn) {
   FUNC_0("Symbol %s is being used by a non-GPL module, "
    "which will not be allowed in the future\n",
    VAR_6->name);
  }
 }
 VAR_6->owner = VAR_3;
 VAR_6->crc = FUNC_1(VAR_2->crcs, VAR_4);
 VAR_6->sym = &VAR_2->start[VAR_4];
 return 1;
}
