
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {size_t symtab_type; } ;
 size_t VAR_0 ;







char FUNC_0(const struct dso *VAR_1)
{
 static const char VAR_2[] = {
  [134] = 'k',
  [128] = 'v',
  [135] = 'j',
  [141] = 'l',
  [143] = 'B',
  [142] = 'D',
  [140] = 'f',
  [129] = 'u',
  [133] = 'o',
  [144] = 'b',
  [132] = 'd',
  [131] = 'K',
  [130] = 'm',
  [139] = 'g',
  [138] = 'G',
  [137] = 'M',
  [136] = 'V',
 };

 if (VAR_1 == ((void*)0) || VAR_1->symtab_type == VAR_0)
  return '!';
 return VAR_2[VAR_1->symtab_type];
}
