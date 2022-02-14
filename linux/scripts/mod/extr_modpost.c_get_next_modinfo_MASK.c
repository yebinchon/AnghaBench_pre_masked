
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_info {char* modinfo; unsigned long modinfo_len; } ;


 char* FUNC_0 (char*,unsigned long*) ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,unsigned int) ;

__attribute__((used)) static char *FUNC_3(struct elf_info *VAR_0, const char *VAR_1,
         char *VAR_2)
{
 char *VAR_3;
 unsigned int VAR_4 = FUNC_1(VAR_1);
 char *VAR_5 = VAR_0->modinfo;
 unsigned long VAR_6 = VAR_0->modinfo_len;

 if (VAR_2) {
  VAR_6 -= VAR_2 - VAR_5;
  VAR_5 = FUNC_0(VAR_2, &VAR_6);
 }

 for (VAR_3 = VAR_5; VAR_3; VAR_3 = FUNC_0(VAR_3, &VAR_6)) {
  if (FUNC_2(VAR_3, VAR_1, VAR_4) == 0 && VAR_3[VAR_4] == '=')
   return VAR_3 + VAR_4 + 1;
 }
 return ((void*)0);
}
