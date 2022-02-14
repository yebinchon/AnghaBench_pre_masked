
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lexer {char* text; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

void FUNC_2(const struct lexer *VAR_0, const char *VAR_1, uint32_t *VAR_2,
   uint32_t *VAR_3)
{
 uint32_t VAR_4 = 1, VAR_5 = 1;
 const char *VAR_6 = VAR_0->text;

 if (!VAR_1)
  return;

 while (VAR_6 < VAR_1) {
  if (FUNC_0(*VAR_6)) {
   VAR_6 += FUNC_1(VAR_6) - 1;
   VAR_4 = 1;
   VAR_5++;
  } else {
   VAR_4++;
  }

  VAR_6++;
 }

 *VAR_2 = VAR_5;
 *VAR_3 = VAR_4;
}
