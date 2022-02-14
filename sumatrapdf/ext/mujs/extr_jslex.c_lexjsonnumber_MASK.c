
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* source; char lexchar; int number; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*,int *) ;

__attribute__((used)) static int FUNC_5(js_State *VAR_1)
{
 const char *VAR_2 = VAR_1->source - 1;

 if (VAR_1->lexchar == '-')
  FUNC_3(VAR_1);

 if (VAR_1->lexchar == '0')
  FUNC_3(VAR_1);
 else if (VAR_1->lexchar >= '1' && VAR_1->lexchar <= '9')
  while (FUNC_0(VAR_1->lexchar))
   FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1, "unexpected non-digit");

 if (FUNC_1(VAR_1, '.')) {
  if (FUNC_0(VAR_1->lexchar))
   while (FUNC_0(VAR_1->lexchar))
    FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1, "missing digits after decimal point");
 }

 if (FUNC_1(VAR_1, 'e') || FUNC_1(VAR_1, 'E')) {
  if (VAR_1->lexchar == '-' || VAR_1->lexchar == '+')
   FUNC_3(VAR_1);
  if (FUNC_0(VAR_1->lexchar))
   while (FUNC_0(VAR_1->lexchar))
    FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1, "missing digits after exponent indicator");
 }

 VAR_1->number = FUNC_4(VAR_2, ((void*)0));
 return VAR_0;
}
