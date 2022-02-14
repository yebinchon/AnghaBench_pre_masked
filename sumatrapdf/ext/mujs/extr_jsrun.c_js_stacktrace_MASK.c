
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tracetop; TYPE_1__* trace; } ;
typedef TYPE_2__ js_State ;
struct TYPE_4__ {char* name; char* file; int line; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(js_State *VAR_0)
{
 int VAR_1;
 FUNC_0("stack trace:\n");
 for (VAR_1 = VAR_0->tracetop; VAR_1 >= 0; --VAR_1) {
  const char *VAR_2 = VAR_0->trace[VAR_1].name;
  const char *VAR_3 = VAR_0->trace[VAR_1].file;
  int VAR_4 = VAR_0->trace[VAR_1].line;
  if (VAR_4 > 0) {
   if (VAR_2[0])
    FUNC_0("\tat %s (%s:%d)\n", VAR_2, VAR_3, VAR_4);
   else
    FUNC_0("\tat %s:%d\n", VAR_3, VAR_4);
  } else
   FUNC_0("\tat %s (%s)\n", VAR_2, VAR_3);
 }
}
