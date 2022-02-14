
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_args {int started; int size; int start; } ;
struct addr_filter {int size; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sym_args*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct addr_filter *VAR_1)
{
 struct sym_args VAR_2 = { .started = 0 };
 int VAR_3;

 VAR_3 = FUNC_0("/proc/kallsyms", &VAR_2, VAR_0);
 if (VAR_3 < 0 || !VAR_2.started) {
  FUNC_1("Failed to parse /proc/kallsyms\n");
  return VAR_3;
 }

 VAR_1->addr = VAR_2.start;
 VAR_1->size = VAR_2.size;

 return 0;
}
