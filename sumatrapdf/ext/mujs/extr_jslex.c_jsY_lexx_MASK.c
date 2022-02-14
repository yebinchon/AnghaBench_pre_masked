
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int text; } ;
struct TYPE_18__ {int newline; char lexchar; TYPE_1__ lexbuf; int lasttoken; int line; int lexline; } ;
typedef TYPE_2__ js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,char) ;

__attribute__((used)) static int FUNC_18(js_State *VAR_24)
{
 VAR_24->newline = 0;

 while (1) {
  VAR_24->lexline = VAR_24->line;

  while (FUNC_7(VAR_24->lexchar))
   FUNC_8(VAR_24);

  if (FUNC_2(VAR_24, '\n')) {
   VAR_24->newline = 1;
   if (FUNC_0(VAR_24->lasttoken))
    return ';';
   continue;
  }

  if (FUNC_2(VAR_24, '/')) {
   if (FUNC_2(VAR_24, '/')) {
    FUNC_11(VAR_24);
    continue;
   } else if (FUNC_2(VAR_24, '*')) {
    if (FUNC_10(VAR_24))
     FUNC_3(VAR_24, "multi-line comment not terminated");
    continue;
   } else if (FUNC_1(VAR_24->lasttoken)) {
    return FUNC_13(VAR_24);
   } else if (FUNC_2(VAR_24, '=')) {
    return VAR_4;
   } else {
    return '/';
   }
  }

  if (VAR_24->lexchar >= '0' && VAR_24->lexchar <= '9') {
   return FUNC_12(VAR_24);
  }

  switch (VAR_24->lexchar) {
  case '(': FUNC_8(VAR_24); return '(';
  case ')': FUNC_8(VAR_24); return ')';
  case ',': FUNC_8(VAR_24); return ',';
  case ':': FUNC_8(VAR_24); return ':';
  case ';': FUNC_8(VAR_24); return ';';
  case '?': FUNC_8(VAR_24); return '?';
  case '[': FUNC_8(VAR_24); return '[';
  case ']': FUNC_8(VAR_24); return ']';
  case '{': FUNC_8(VAR_24); return '{';
  case '}': FUNC_8(VAR_24); return '}';
  case '~': FUNC_8(VAR_24); return '~';

  case '\'':
  case '"':
   return FUNC_14(VAR_24);

  case '.':
   return FUNC_12(VAR_24);

  case '<':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '<')) {
    if (FUNC_2(VAR_24, '='))
     return VAR_15;
    return VAR_14;
   }
   if (FUNC_2(VAR_24, '='))
    return VAR_8;
   return '<';

  case '>':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '>')) {
    if (FUNC_2(VAR_24, '>')) {
     if (FUNC_2(VAR_24, '='))
      return VAR_22;
     return VAR_21;
    }
    if (FUNC_2(VAR_24, '='))
     return VAR_17;
    return VAR_16;
   }
   if (FUNC_2(VAR_24, '='))
    return VAR_6;
   return '>';

  case '=':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '=')) {
    if (FUNC_2(VAR_24, '='))
     return VAR_18;
    return VAR_5;
   }
   return '=';

  case '!':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '=')) {
    if (FUNC_2(VAR_24, '='))
     return VAR_19;
    return VAR_11;
   }
   return '!';

  case '+':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '+'))
    return VAR_7;
   if (FUNC_2(VAR_24, '='))
    return VAR_0;
   return '+';

  case '-':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '-'))
    return VAR_3;
   if (FUNC_2(VAR_24, '='))
    return VAR_20;
   return '-';

  case '*':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '='))
    return VAR_10;
   return '*';

  case '%':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '='))
    return VAR_9;
   return '%';

  case '&':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '&'))
    return VAR_1;
   if (FUNC_2(VAR_24, '='))
    return VAR_2;
   return '&';

  case '|':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '|'))
    return VAR_12;
   if (FUNC_2(VAR_24, '='))
    return VAR_13;
   return '|';

  case '^':
   FUNC_8(VAR_24);
   if (FUNC_2(VAR_24, '='))
    return VAR_23;
   return '^';

  case 0:
   return 0;
  }


  FUNC_9(VAR_24);
  if (FUNC_6(VAR_24->lexchar)) {
   FUNC_16(VAR_24);
   FUNC_17(VAR_24, VAR_24->lexchar);

   FUNC_8(VAR_24);
   FUNC_9(VAR_24);
   while (FUNC_5(VAR_24->lexchar)) {
    FUNC_17(VAR_24, VAR_24->lexchar);
    FUNC_8(VAR_24);
    FUNC_9(VAR_24);
   }

   FUNC_15(VAR_24);

   return FUNC_4(VAR_24, VAR_24->lexbuf.text);
  }

  if (VAR_24->lexchar >= 0x20 && VAR_24->lexchar <= 0x7E)
   FUNC_3(VAR_24, "unexpected character: '%c'", VAR_24->lexchar);
  FUNC_3(VAR_24, "unexpected character: \\u%04X", VAR_24->lexchar);
 }
}
