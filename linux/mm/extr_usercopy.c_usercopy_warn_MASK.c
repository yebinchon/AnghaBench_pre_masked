
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,char*,char*,char*,char*,char*,unsigned long,unsigned long) ;

void FUNC_1(const char *VAR_0, const char *VAR_1, bool VAR_2,
     unsigned long VAR_3, unsigned long VAR_4)
{
 FUNC_0(1, "Bad or missing usercopy whitelist? Kernel memory %s attempt detected %s %s%s%s%s (offset %lu, size %lu)!\n",
   VAR_2 ? "exposure" : "overwrite",
   VAR_2 ? "from" : "to",
   VAR_0 ? : "unknown?!",
   VAR_1 ? " '" : "", VAR_1 ? : "", VAR_1 ? "'" : "",
   VAR_3, VAR_4);
}
