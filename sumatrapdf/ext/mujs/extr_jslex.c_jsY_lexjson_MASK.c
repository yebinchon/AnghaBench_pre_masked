
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char lexchar; int line; int lexline; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(js_State *VAR_3)
{
 while (1) {
  VAR_3->lexline = VAR_3->line;

  while (FUNC_2(VAR_3->lexchar) || VAR_3->lexchar == '\n')
   FUNC_3(VAR_3);

  if ((VAR_3->lexchar >= '0' && VAR_3->lexchar <= '9') || VAR_3->lexchar == '-')
   return FUNC_4(VAR_3);

  switch (VAR_3->lexchar) {
  case ',': FUNC_3(VAR_3); return ',';
  case ':': FUNC_3(VAR_3); return ':';
  case '[': FUNC_3(VAR_3); return '[';
  case ']': FUNC_3(VAR_3); return ']';
  case '{': FUNC_3(VAR_3); return '{';
  case '}': FUNC_3(VAR_3); return '}';

  case '"':
   FUNC_3(VAR_3);
   return FUNC_5(VAR_3);

  case 'f':
   FUNC_3(VAR_3); FUNC_1(VAR_3, 'a'); FUNC_1(VAR_3, 'l'); FUNC_1(VAR_3, 's'); FUNC_1(VAR_3, 'e');
   return VAR_0;

  case 'n':
   FUNC_3(VAR_3); FUNC_1(VAR_3, 'u'); FUNC_1(VAR_3, 'l'); FUNC_1(VAR_3, 'l');
   return VAR_1;

  case 't':
   FUNC_3(VAR_3); FUNC_1(VAR_3, 'r'); FUNC_1(VAR_3, 'u'); FUNC_1(VAR_3, 'e');
   return VAR_2;

  case 0:
   return 0;
  }

  if (VAR_3->lexchar >= 0x20 && VAR_3->lexchar <= 0x7E)
   FUNC_0(VAR_3, "unexpected character: '%c'", VAR_3->lexchar);
  FUNC_0(VAR_3, "unexpected character: \\u%04X", VAR_3->lexchar);
 }
}
