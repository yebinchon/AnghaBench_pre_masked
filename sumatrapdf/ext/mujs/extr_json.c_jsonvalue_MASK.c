
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int lookahead; char* text; int number; } ;
typedef TYPE_1__ js_State ;







 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,char const*) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 int FUNC_10 (TYPE_1__*,char) ;
 int FUNC_11 (TYPE_1__*,char) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(js_State *VAR_0)
{
 int VAR_1;
 const char *VAR_2;

 switch (VAR_0->lookahead) {
 case 129:
  FUNC_6(VAR_0, VAR_0->text);
  FUNC_12(VAR_0);
  break;

 case 130:
  FUNC_5(VAR_0, VAR_0->number);
  FUNC_12(VAR_0);
  break;

 case '{':
  FUNC_2(VAR_0);
  FUNC_12(VAR_0);
  if (FUNC_10(VAR_0, '}'))
   return;
  do {
   if (VAR_0->lookahead != 129)
    FUNC_9(VAR_0, "JSON: unexpected token: %s (expected string)", FUNC_0(VAR_0->lookahead));
   VAR_2 = VAR_0->text;
   FUNC_12(VAR_0);
   FUNC_11(VAR_0, ':');
   FUNC_13(VAR_0);
   FUNC_8(VAR_0, -2, VAR_2);
  } while (FUNC_10(VAR_0, ','));
  FUNC_11(VAR_0, '}');
  break;

 case '[':
  FUNC_1(VAR_0);
  FUNC_12(VAR_0);
  VAR_1 = 0;
  if (FUNC_10(VAR_0, ']'))
   return;
  do {
   FUNC_13(VAR_0);
   FUNC_7(VAR_0, -2, VAR_1++);
  } while (FUNC_10(VAR_0, ','));
  FUNC_11(VAR_0, ']');
  break;

 case 128:
  FUNC_3(VAR_0, 1);
  FUNC_12(VAR_0);
  break;

 case 132:
  FUNC_3(VAR_0, 0);
  FUNC_12(VAR_0);
  break;

 case 131:
  FUNC_4(VAR_0);
  FUNC_12(VAR_0);
  break;

 default:
  FUNC_9(VAR_0, "JSON: unexpected token: %s", FUNC_0(VAR_0->lookahead));
 }
}
