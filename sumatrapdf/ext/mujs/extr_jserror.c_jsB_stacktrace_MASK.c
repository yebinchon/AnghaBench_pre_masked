
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tracetop; TYPE_1__* trace; } ;
typedef TYPE_2__ js_State ;
struct TYPE_6__ {char* name; char* file; int line; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_3(js_State *VAR_0, int VAR_1)
{
 char VAR_2[256];
 int VAR_3 = VAR_0->tracetop - VAR_1;
 if (VAR_3 <= 0)
  return 0;
 for (; VAR_3 > 0; --VAR_3) {
  const char *VAR_4 = VAR_0->trace[VAR_3].name;
  const char *VAR_5 = VAR_0->trace[VAR_3].file;
  int VAR_6 = VAR_0->trace[VAR_3].line;
  if (VAR_6 > 0) {
   if (VAR_4[0])
    FUNC_2(VAR_2, sizeof VAR_2, "\n\tat %s (%s:%d)", VAR_4, VAR_5, VAR_6);
   else
    FUNC_2(VAR_2, sizeof VAR_2, "\n\tat %s:%d", VAR_5, VAR_6);
  } else
   FUNC_2(VAR_2, sizeof VAR_2, "\n\tat %s (%s)", VAR_4, VAR_5);
  FUNC_1(VAR_0, VAR_2);
  if (VAR_3 < VAR_0->tracetop - VAR_1)
   FUNC_0(VAR_0);
 }
 return 1;
}
