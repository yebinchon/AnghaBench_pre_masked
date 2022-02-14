
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* source; char lexchar; int number; } ;
typedef TYPE_1__ js_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(js_State *VAR_1)
{
 const char *VAR_2 = VAR_1->source - 1;

 if (FUNC_0(VAR_1, '0')) {
  if (FUNC_0(VAR_1, 'x') || FUNC_0(VAR_1, 'X')) {
   VAR_1->number = FUNC_6(VAR_1);
   return VAR_0;
  }
  if (FUNC_2(VAR_1->lexchar))
   FUNC_1(VAR_1, "number with leading zero");
  if (FUNC_0(VAR_1, '.')) {
   while (FUNC_2(VAR_1->lexchar))
    FUNC_4(VAR_1);
  }
 } else if (FUNC_0(VAR_1, '.')) {
  if (!FUNC_2(VAR_1->lexchar))
   return '.';
  while (FUNC_2(VAR_1->lexchar))
   FUNC_4(VAR_1);
 } else {
  while (FUNC_2(VAR_1->lexchar))
   FUNC_4(VAR_1);
  if (FUNC_0(VAR_1, '.')) {
   while (FUNC_2(VAR_1->lexchar))
    FUNC_4(VAR_1);
  }
 }

 if (FUNC_0(VAR_1, 'e') || FUNC_0(VAR_1, 'E')) {
  if (VAR_1->lexchar == '-' || VAR_1->lexchar == '+')
   FUNC_4(VAR_1);
  if (FUNC_2(VAR_1->lexchar))
   while (FUNC_2(VAR_1->lexchar))
    FUNC_4(VAR_1);
  else
   FUNC_1(VAR_1, "missing exponent");
 }

 if (FUNC_3(VAR_1->lexchar))
  FUNC_1(VAR_1, "number with letter suffix");

 VAR_1->number = FUNC_5(VAR_2, ((void*)0));
 return VAR_0;
}
