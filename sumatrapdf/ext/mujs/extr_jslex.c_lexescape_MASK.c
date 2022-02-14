
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lexchar; } ;
typedef TYPE_1__ js_State ;


 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_6(js_State *VAR_0)
{
 int VAR_1 = 0;



 if (FUNC_0(VAR_0, '\n'))
  return 0;

 switch (VAR_0->lexchar) {
 case 0: FUNC_1(VAR_0, "unterminated escape sequence");
 case 'u':
  FUNC_3(VAR_0);
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar) << 12; FUNC_3(VAR_0); }
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar) << 8; FUNC_3(VAR_0); }
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar) << 4; FUNC_3(VAR_0); }
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar); FUNC_3(VAR_0); }
  FUNC_5(VAR_0, VAR_1);
  break;
 case 'x':
  FUNC_3(VAR_0);
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar) << 4; FUNC_3(VAR_0); }
  if (!FUNC_2(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_4(VAR_0->lexchar); FUNC_3(VAR_0); }
  FUNC_5(VAR_0, VAR_1);
  break;
 case '0': FUNC_5(VAR_0, 0); FUNC_3(VAR_0); break;
 case '\\': FUNC_5(VAR_0, '\\'); FUNC_3(VAR_0); break;
 case '\'': FUNC_5(VAR_0, '\''); FUNC_3(VAR_0); break;
 case '"': FUNC_5(VAR_0, '"'); FUNC_3(VAR_0); break;
 case 'b': FUNC_5(VAR_0, '\b'); FUNC_3(VAR_0); break;
 case 'f': FUNC_5(VAR_0, '\f'); FUNC_3(VAR_0); break;
 case 'n': FUNC_5(VAR_0, '\n'); FUNC_3(VAR_0); break;
 case 'r': FUNC_5(VAR_0, '\r'); FUNC_3(VAR_0); break;
 case 't': FUNC_5(VAR_0, '\t'); FUNC_3(VAR_0); break;
 case 'v': FUNC_5(VAR_0, '\v'); FUNC_3(VAR_0); break;
 default: FUNC_5(VAR_0, VAR_0->lexchar); FUNC_3(VAR_0); break;
 }
 return 0;
}
