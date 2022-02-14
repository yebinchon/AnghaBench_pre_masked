
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int lexchar; int text; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_9(js_State *VAR_1)
{
 const char *VAR_2;

 int VAR_3 = VAR_1->lexchar;
 FUNC_3(VAR_1);

 FUNC_7(VAR_1);

 while (VAR_1->lexchar != VAR_3) {
  if (VAR_1->lexchar == 0 || VAR_1->lexchar == '\n')
   FUNC_1(VAR_1, "string not terminated");
  if (FUNC_0(VAR_1, '\\')) {
   if (FUNC_5(VAR_1))
    FUNC_1(VAR_1, "malformed escape sequence");
  } else {
   FUNC_8(VAR_1, VAR_1->lexchar);
   FUNC_3(VAR_1);
  }
 }
 FUNC_2(VAR_1, VAR_3);

 VAR_2 = FUNC_6(VAR_1);

 VAR_1->text = FUNC_4(VAR_1, VAR_2);
 return VAR_0;
}
