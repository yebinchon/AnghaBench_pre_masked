
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_disasm_data {scalar_t__ distype; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static char *
FUNC_0 (struct cris_disasm_data *VAR_1, unsigned int VAR_2, char *VAR_3)
{





  static const char VAR_4[] = "cvznxibm";
  static const char VAR_5[] = "cvznxiup";
  const char *VAR_6
    = VAR_1->distype == VAR_0 ? VAR_5 : VAR_4;

  unsigned char VAR_7 = (((VAR_2 >> 8) & 0xf0) | (VAR_2 & 15));
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   if (VAR_7 & (1 << VAR_8)) {
    *VAR_3++ = VAR_6[VAR_8];
   }
  }

  return VAR_3;
}
