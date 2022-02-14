
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sym_args {char const* name; int idx; int global; int selected; int size; int start; int started; scalar_t__ cnt; scalar_t__ duplicate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sym_args*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, u64 *VAR_4, u64 *VAR_5, int VAR_6)
{
 struct sym_args VAR_7 = {
  .name = VAR_3,
  .idx = VAR_6,
  .global = !VAR_6,
  .selected = VAR_6 > 0,
 };
 int VAR_8;

 *VAR_4 = 0;
 *VAR_5 = 0;

 VAR_8 = FUNC_0("/proc/kallsyms", &VAR_7, VAR_1);
 if (VAR_8 < 0) {
  FUNC_1("Failed to parse /proc/kallsyms\n");
  return VAR_8;
 }

 if (VAR_7.duplicate) {
  FUNC_1("Multiple kernel symbols with name '%s'\n", VAR_3);
  VAR_7.cnt = 0;
  FUNC_0("/proc/kallsyms", &VAR_7, VAR_2);
  FUNC_1("Disambiguate symbol name by inserting #n after the name e.g. %s #2\n",
         VAR_3);
  FUNC_1("Or select a global symbol by inserting #0 or #g or #G\n");
  return -VAR_0;
 }

 if (!VAR_7.started) {
  FUNC_1("Kernel symbol lookup: ");
  return FUNC_2(VAR_3, VAR_6);
 }

 *VAR_4 = VAR_7.start;
 *VAR_5 = VAR_7.size;

 return 0;
}
