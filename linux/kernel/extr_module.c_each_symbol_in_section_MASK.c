
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsearch {int dummy; } ;
struct module {int dummy; } ;



__attribute__((used)) static bool FUNC_0(const struct symsearch *VAR_0,
       unsigned int VAR_1,
       struct module *VAR_2,
       bool (*VAR_3)(const struct symsearch *VAR_4,
           struct module *VAR_5,
           void *VAR_6),
       void *VAR_7)
{
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_3(&VAR_0[VAR_8], VAR_2, VAR_7))
   return 1;
 }

 return 0;
}
