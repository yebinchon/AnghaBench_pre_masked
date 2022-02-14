
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char lexchar; int text; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(js_State *VAR_1)
{
 const char *VAR_2;

 FUNC_7(VAR_1);

 while (VAR_1->lexchar != '"') {
  if (VAR_1->lexchar == 0)
   FUNC_1(VAR_1, "unterminated string");
  else if (VAR_1->lexchar < 32)
   FUNC_1(VAR_1, "invalid control character in string");
  else if (FUNC_0(VAR_1, '\\'))
   FUNC_5(VAR_1);
  else {
   FUNC_8(VAR_1, VAR_1->lexchar);
   FUNC_3(VAR_1);
  }
 }
 FUNC_2(VAR_1, '"');

 VAR_2 = FUNC_6(VAR_1);

 VAR_1->text = FUNC_4(VAR_1, VAR_2);
 return VAR_0;
}
