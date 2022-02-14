
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char lexchar; scalar_t__ number; int text; } ;
typedef TYPE_1__ js_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_9(js_State *VAR_4)
{
 const char *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;



 FUNC_7(VAR_4);


 while (VAR_4->lexchar != '/' || VAR_9) {
  if (VAR_4->lexchar == 0 || VAR_4->lexchar == '\n') {
   FUNC_1(VAR_4, "regular expression not terminated");
  } else if (FUNC_0(VAR_4, '\\')) {
   if (FUNC_0(VAR_4, '/')) {
    FUNC_8(VAR_4, '/');
   } else {
    FUNC_8(VAR_4, '\\');
    if (VAR_4->lexchar == 0 || VAR_4->lexchar == '\n')
     FUNC_1(VAR_4, "regular expression not terminated");
    FUNC_8(VAR_4, VAR_4->lexchar);
    FUNC_4(VAR_4);
   }
  } else {
   if (VAR_4->lexchar == '[' && !VAR_9)
    VAR_9 = 1;
   if (VAR_4->lexchar == ']' && VAR_9)
    VAR_9 = 0;
   FUNC_8(VAR_4, VAR_4->lexchar);
   FUNC_4(VAR_4);
  }
 }
 FUNC_2(VAR_4, '/');

 VAR_5 = FUNC_6(VAR_4);


 VAR_6 = VAR_8 = VAR_7 = 0;

 while (FUNC_3(VAR_4->lexchar)) {
  if (FUNC_0(VAR_4, 'g')) ++VAR_6;
  else if (FUNC_0(VAR_4, 'i')) ++VAR_8;
  else if (FUNC_0(VAR_4, 'm')) ++VAR_7;
  else FUNC_1(VAR_4, "illegal flag in regular expression: %c", VAR_4->lexchar);
 }

 if (VAR_6 > 1 || VAR_8 > 1 || VAR_7 > 1)
  FUNC_1(VAR_4, "duplicated flag in regular expression");

 VAR_4->text = FUNC_5(VAR_4, VAR_5);
 VAR_4->number = 0;
 if (VAR_6) VAR_4->number += VAR_0;
 if (VAR_8) VAR_4->number += VAR_1;
 if (VAR_7) VAR_4->number += VAR_2;
 return VAR_3;
}
