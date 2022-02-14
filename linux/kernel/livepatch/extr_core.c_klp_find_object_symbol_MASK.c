
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_find_arg {char const* objname; char const* name; unsigned long addr; int count; unsigned long pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct klp_find_arg*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct klp_find_arg*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4,
      unsigned long VAR_5, unsigned long *VAR_6)
{
 struct klp_find_arg VAR_7 = {
  .objname = VAR_3,
  .name = VAR_4,
  .addr = 0,
  .count = 0,
  .pos = VAR_5,
 };

 FUNC_2(&VAR_2);
 if (VAR_3)
  FUNC_1(VAR_1, &VAR_7);
 else
  FUNC_0(VAR_1, &VAR_7);
 FUNC_3(&VAR_2);





 if (VAR_7.addr == 0)
  FUNC_4("symbol '%s' not found in symbol table\n", VAR_4);
 else if (VAR_7.count > 1 && VAR_5 == 0) {
  FUNC_4("unresolvable ambiguity for symbol '%s' in object '%s'\n",
         VAR_4, VAR_3);
 } else if (VAR_5 != VAR_7.count && VAR_5 > 0) {
  FUNC_4("symbol position %lu for symbol '%s' in object '%s' not found\n",
         VAR_5, VAR_4, VAR_3 ? VAR_3 : "vmlinux");
 } else {
  *VAR_6 = VAR_7.addr;
  return 0;
 }

 *VAR_6 = 0;
 return -VAR_0;
}
