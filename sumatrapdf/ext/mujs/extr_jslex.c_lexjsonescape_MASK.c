
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lexchar; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_5(js_State *VAR_0)
{
 int VAR_1 = 0;



 switch (VAR_0->lexchar) {
 default: FUNC_0(VAR_0, "invalid escape sequence");
 case 'u':
  FUNC_2(VAR_0);
  if (!FUNC_1(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_3(VAR_0->lexchar) << 12; FUNC_2(VAR_0); }
  if (!FUNC_1(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_3(VAR_0->lexchar) << 8; FUNC_2(VAR_0); }
  if (!FUNC_1(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_3(VAR_0->lexchar) << 4; FUNC_2(VAR_0); }
  if (!FUNC_1(VAR_0->lexchar)) return 1; else { VAR_1 |= FUNC_3(VAR_0->lexchar); FUNC_2(VAR_0); }
  FUNC_4(VAR_0, VAR_1);
  break;
 case '"': FUNC_4(VAR_0, '"'); FUNC_2(VAR_0); break;
 case '\\': FUNC_4(VAR_0, '\\'); FUNC_2(VAR_0); break;
 case '/': FUNC_4(VAR_0, '/'); FUNC_2(VAR_0); break;
 case 'b': FUNC_4(VAR_0, '\b'); FUNC_2(VAR_0); break;
 case 'f': FUNC_4(VAR_0, '\f'); FUNC_2(VAR_0); break;
 case 'n': FUNC_4(VAR_0, '\n'); FUNC_2(VAR_0); break;
 case 'r': FUNC_4(VAR_0, '\r'); FUNC_2(VAR_0); break;
 case 't': FUNC_4(VAR_0, '\t'); FUNC_2(VAR_0); break;
 }
 return 0;
}
