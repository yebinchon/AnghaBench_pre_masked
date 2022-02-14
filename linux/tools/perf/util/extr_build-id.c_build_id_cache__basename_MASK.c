
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(bool VAR_0, bool VAR_1,
         bool VAR_2)
{
 return VAR_0 ? "kallsyms" : (VAR_1 ? "vdso" : (VAR_2 ?
     "debug" : "elf"));
}
