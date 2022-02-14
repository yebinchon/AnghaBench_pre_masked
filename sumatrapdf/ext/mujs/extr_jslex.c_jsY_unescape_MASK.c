
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lexchar; } ;
typedef TYPE_1__ js_State ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0)
{
 if (FUNC_0(VAR_0, '\\')) {
  if (FUNC_0(VAR_0, 'u')) {
   int VAR_1 = 0;
   if (!FUNC_2(VAR_0->lexchar)) { goto error; } VAR_1 |= FUNC_4(VAR_0->lexchar) << 12; FUNC_3(VAR_0);
   if (!FUNC_2(VAR_0->lexchar)) { goto error; } VAR_1 |= FUNC_4(VAR_0->lexchar) << 8; FUNC_3(VAR_0);
   if (!FUNC_2(VAR_0->lexchar)) { goto error; } VAR_1 |= FUNC_4(VAR_0->lexchar) << 4; FUNC_3(VAR_0);
   if (!FUNC_2(VAR_0->lexchar)) { goto error; } VAR_1 |= FUNC_4(VAR_0->lexchar);
   VAR_0->lexchar = VAR_1;
   return;
  }
error:
  FUNC_1(VAR_0, "unexpected escape sequence");
 }
}
