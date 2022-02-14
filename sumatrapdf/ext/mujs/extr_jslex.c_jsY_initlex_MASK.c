
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* filename; char const* source; int line; scalar_t__ lasttoken; } ;
typedef TYPE_1__ js_State ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(js_State *VAR_0, const char *VAR_1, const char *VAR_2)
{
 VAR_0->filename = VAR_1;
 VAR_0->source = VAR_2;
 VAR_0->line = 1;
 VAR_0->lasttoken = 0;
 FUNC_0(VAR_0);
}
