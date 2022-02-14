
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tracetop; TYPE_1__* trace; } ;
typedef TYPE_2__ js_State ;
struct TYPE_5__ {char const* name; char const* file; int line; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_1->tracetop + 1 == VAR_0)
  FUNC_0(VAR_1, "call stack overflow");
 ++VAR_1->tracetop;
 VAR_1->trace[VAR_1->tracetop].name = VAR_2;
 VAR_1->trace[VAR_1->tracetop].file = VAR_3;
 VAR_1->trace[VAR_1->tracetop].line = VAR_4;
}
